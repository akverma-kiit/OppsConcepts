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

/*Base::Base(std::initializer_list<int> a)
{
  cout << "Base Class:: (" << m_BObjectNumber << ") Constructor(initializer_list List)" << endl;
}*/

Base::Base(const Base& obj)
  : m_BNum(obj.m_BNum)
  , m_BName(obj.m_BName)
{
  ++m_BObjectCount;
  m_BObjectNumber = m_BObjectCount;
  cout << "Base Class:: (" << m_BObjectNumber << ") Copy Constructor" << endl;
}

Base& Base::operator=(const Base& obj)
{
  cout << "Base Class:: (" << m_BObjectNumber << ") Assignment Operator Overload" << endl;
  if (this == &obj)
  {
    cout << "Base Class:: Self Object Assignment Handle" << endl;
    return *this;
  }
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
