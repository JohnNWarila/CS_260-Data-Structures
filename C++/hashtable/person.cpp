#include "person.hpp"

Person::Person(void) {
  key_ = "";
  gradePointAverage_ = 0;
}

Person::Person(bool isNull) {
  isNull_ = isNull;
}

Person::Person(std::string key, float gradePointAverage) {
  key_ = key;
  gradePointAverage_ = gradePointAverage;
  isNull_ = false;
}

std::string Person::key(void) const {
  return key_;
}

float Person::gradePointAverage(void) const {
  return gradePointAverage_;
}

bool Person::isNull(void) const {
  return isNull_;
}
