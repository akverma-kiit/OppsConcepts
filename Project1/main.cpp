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

  //Doit(78);
  //std::string param = "ASHISH";
  //Doit(param);

  Base a(77, "AMAN");
  Base b;
  b = a;
  Base c = b;

 cout << Base::GetObjectCount() << endl;
}
