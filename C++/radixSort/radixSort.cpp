#include "radixSort.hpp"

// The subSort here is counting sort.
void subSort(int arr[], int size, int exponent) {
  int temp[size];
  int temp2[10] = {0};

  for (int i = 0; i < size; i++) {
    temp2[(arr[i] / exponent) % 10]++;
  }

  for (int i = 1; i < 10; i++) {
    temp2[i] += temp2[i - 1];
  }

  for (int i = size - 1; i >= 0; i--) {
    temp[temp2[(arr[i] / exponent) % 10] - 1] = arr[i];
    temp2[(arr[i] / exponent) % 10]--;
  }

  for (int i = 0; i < size; i++) {
    arr[i] = temp[i];
  }
}

// Get the max value in array
int getMaxVal(int arr[], int size) {
  int max = arr[0];
  for (int i = 0; i < size; i++) {
    if (arr[i] > max)
      max = arr[i];
  }

  return max;
}

// for every level of exponent (1, 10 , 100) run the sub sort on list
void sort(int inArr[], int size) {
  int max = getMaxVal(inArr, size);

  for (int exponent = 1; max / exponent > 0; exponent *= 10)
    subSort(inArr, size, exponent);
}
