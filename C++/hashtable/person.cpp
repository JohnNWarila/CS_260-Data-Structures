#include "person.hpp"

Person::Person(void) {
  key_ = "";
  gradePointAverage_ = 0;
}

Person::Person(std::string key, float gradePointAverage) {
  key_ = key;
  gradePointAverage_ = gradePointAverage;
}

std::string Person::key(void) {
  return key_;
}

float Person::gradePointAverage(void) {
  return gradePointAverage_;
}