#include "Sample.h"

//Base Class
int Base::m_BObjectCount = 0;
Base::Base()
  : m_BNum(99)
  , m_BName("BASE_DEFAULT")
{
  ++m_BObjectCount;
  m_BObjectNumber = m_BObjectCount;
  cout << "Base Class:: (" << m_BObjectNumber << ") Constructor(NULL)" << endl;
}

Base::~Base()
{
  --m_BObjectCount;
  cout << "Base Class:: (" << m_BObjectNumber << ") Destructor()" << endl;
}

Base::Base(int num)
  : m_BNum(num)
  , m_BName("BASE_DEFAULT")
{
  ++m_BObjectCount;
  m_BObjectNumber = m_BObjectCount;
  cout << "Base Class:: (" << m_BObjectNumber << ") Constructor(Integer,DFAULT)" << endl;
}

Base::Base(const std::string& name)
  : m_BNum(99)
  , m_BName(name)
{
  ++m_BObjectCount;
  m_BObjectNumber = m_BObjectCount;
  cout << "Base Class:: (" << m_BObjectNumber << ") Constructor(DFAULT,String)" << endl;
}

Base::Base(int num, const std::string& name)
  : m_BNum(num)
  , m_BName(name)
{
  ++m_BObjectCount;
  m_BObjectNumber = m_BObjectCount;
  cout << "Base Class:: (" << m_BObjectNumber << ") Constructor(Integer,String)" << endl;
}

Base::Base(Base& obj)
{
  ++m_BObjectCount;
  m_BObjectNumber = m_BObjectCount;
  cout << "Base Class:: (" << m_BObjectNumber << ") Copy Constructor" << endl;
  m_BNum  = obj.m_BNum;
  m_BName = obj.m_BName;
}

Base& Base::operator=(const Base& obj)
{
  cout << "Base Class:: (" << m_BObjectNumber << ") Assignment Operator Overload" << endl;
  m_BNum  = obj.m_BNum;
  m_BName = obj.m_BName;

  return *this;
}

int Base::GetObjectCount()
{
  return m_BObjectCount;
}

int Base::GetObjectNumber()
{
  return m_BObjectNumber;
}

int Base::GetNumber()
{
  return m_BNum;
}

const std::string& Base::GetName()
{
  return m_BName;
}

//Derive Class
Derive::Derive()
  : m_DNum(99)
  , m_DName("DeriveClassMember")
{
  cout << "Derive Class::Default Constructor" << endl;
}

int Derive::GetNumber()
{
  return m_DNum;
}

const std::string& Derive::GetName()
{
  return m_DName;
}

Derive::Derive(int num, const std::string& name)
  : m_DNum(num)
  , m_DName(name)
{
  cout << "Derive Class::Params Constructor" << endl;
  cout << "Derive Class::Number = " << m_DNum << endl;
  cout << "Derive Class::Name = " << m_DName << endl;
}
