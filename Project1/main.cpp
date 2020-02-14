#include "main.h"
#include "Sample.h"

void Doit(Base obj)
{
  cout << obj.GetNumber() << "=" << obj.GetName() << endl;
}

int main()
{
  //Base *ptr = new Derive(67,"Ashish Kumar");
  //ptr->GetNumber();
  //ptr->GetName();

  //Base a(99, "XYZ");
  //Base b(a);
  //cout << b.GetNumber() << "=" << b.GetName() << endl;

  std::string param = "AMAN";
  Base obj1(10, "GOD");
  cout << obj1.GetNumber() << "=" << obj1.GetName() << endl;
  Base obj2{ 20, "GREAT" };
  cout << obj2.GetNumber() << "=" << obj2.GetName() << endl;
  Base obj3{ 30 };
  cout << obj3.GetNumber() << "=" << obj3.GetName() << endl;

  //Base obj4{ "ASHISH" };
  //Base obj3({ 30, "VIBHA" });

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
