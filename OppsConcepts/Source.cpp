#include <iostream>
#include <string>
using namespace std;

class Base {
private:
  int m_BNum;
  std::string m_BName;

public:
  Base() : m_BNum(67), m_BName("BaseClassMember") {
    cout << "Base Class Default Constructor" << endl;
  }
  Base(int num, const std::string &name) : m_BNum(num), m_BName(name) {
    cout << "Base Class::Params Constructor" << endl;
    cout << "Base Class::Number = " << m_BNum << endl;
    cout << "Base Class::Name = " << m_BName << endl;
  }

  int GetNumber() { return m_BNum; }
  const std::string &GetName() const { return m_BName; }
};

class Derive {
private:
  int m_DNum;
  std::string m_DName;

public:
  Derive() : m_DNum(99), m_DName("DeriveClassMember") {
    cout << "Derive Class::Default Constructor" << endl;
  }
  Derive(int num, const std::string &name) : m_DNum(num), m_DName(name) {
    cout << "Derive Class::Params Constructor" << endl;
    cout << "Derive Class::Number = " << m_DNum << endl;
    cout << "Derive Class::Name = " << m_DName << endl;
  }

  int GetNumber() { return m_DNum; }
  const std::string &GetName() const { return m_DName; }
};

int main() {
  Derive obj;
  return 1;
}
