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
  Base();
  ~Base();
  Base(int num);
  Base(const std::string &name);
  Base(int num, const std::string &name);
  Base(Base &obj);
  Base &operator=(const Base &obj);

  static int GetObjectCount();
  int GetObjectNumber();
  
  int GetNumber();
  const std::string &GetName();
};


class Derive //: public Base
{
private:
  int m_DNum;
  std::string m_DName;

public:
  Derive();
  Derive(int num, const std::string &name);
  int GetNumber();
  const std::string &GetName();
};
#pragma once
