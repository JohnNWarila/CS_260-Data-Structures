#pragma once

#include <string>

/* Person Class
 *
 * Stores a key (usually the person's name) and a GPA
 *
*/
class Person {
 private:
  std::string key_;

  float gradePointAverage_;

  bool isNull_;

 public:
  Person();
  Person(bool isNullObject);
  Person(std::string key, float gradePointAverage);

  std::string key(void) const;

  float gradePointAverage(void) const;

  bool isNull(void) const;
};
