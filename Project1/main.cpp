#include "Sample.h"

void Doit(Base obj)
{
  cout << obj.GetNumber() << "=" << obj.GetName() << endl;
}

int main()
{
  //Base a(99, "XYZ");
  //Base b(a);
  //cout << b.GetNumber() << "=" << b.GetName() << endl;

  std::string param = "AMAN";
  Base obj1(10, "GOD");
  cout << obj1.GetObjectNumber() << "=" << obj1.GetNumber() << "=" << obj1.GetName() << endl;
  Base obj2{ 20, "GREAT" };
  cout << obj2.GetObjectNumber() << "=" << obj2.GetNumber() << "=" << obj2.GetName() << endl;
  Base obj3{ 30 };
  cout << obj3.GetObjectNumber() << "=" << obj3.GetNumber() << "=" << obj3.GetName() << endl;
  Base obj4{ "PRATIK" };
  cout << obj4.GetObjectNumber() << "=" << obj4.GetNumber() << "=" << obj4.GetName() << endl;

  /*
  Base obj1{10, "GOD"};
  Base obj2{20, "GREAT"};
  cout << obj2.GetObjectNumber() << "=" << obj2.GetNumber() << "=" << obj2.GetName() << endl;
  //obj2 = obj1;
  obj2.operator=(obj1);
  cout << obj2.GetObjectNumber() << "=" << obj2.GetNumber() << "=" << obj2.GetName() << endl;
  obj2 = obj2;
  cout << obj2.GetObjectNumber() << "=" << obj2.GetNumber() << "=" << obj2.GetName() << endl;
  */

  //Base obj4{ "ASHISH" };
  //Base obj3({ 30, "PRATIK" });

  //Base a = 5;
  //Base b = param;
  //Base c = { 10, "CAT" };
  //Base d = {};
  //Base e = obj;
  //Base f(e);

  //Doit(78);
  //Doit(param);
  //Doit({});

  //Base a(77, "AMAN");
  //Base b;
  //b = a;
  //Base c = b;

  cout << Base::GetObjectCount() << endl;
}
