#pragma once
#include <iostream>
#include <string>
using namespace std;

class Base
{
private:
  int m_BObjectNumber;
  int m_BNum;
  std::string m_BName;

public:
  static int m_BObjectCount;

  explicit Base();
  ~Base();
  explicit Base(int num);
  explicit Base(const std::string &name);
  explicit Base(int num, const std::string &name);
  //explicit Base(std::initializer_list<int> a);
  Base(const Base &obj);
  Base &operator=(const Base &obj);

  static int GetObjectCount();
  int GetObjectNumber();

  int GetNumber();
  const std::string &GetName();
};
