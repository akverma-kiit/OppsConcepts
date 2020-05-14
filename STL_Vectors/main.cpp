/*C++ vectors can automatically manage storage.
  It is efficient if you add and delete data often.
  If you use vectors, you can copy and assign other vectors with ease.
  A vector might consume more memory than an array.
*/
#pragma once
#include <iostream>
#include <list>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

using CharVector    = std::vector<char>;
using IntegerVector = std::vector<int>;
using DoubleVector  = std::vector<double>;
using StringVector  = std::vector<string>;

template <typename T>
void displayVector(const std::vector<T>& vec)
{
  if (vec.empty())
  {
    cout << "V{" << vec.size() << "," << vec.capacity() << "}\t\tEMPTY" << endl;
  }
  else
  {
    cout << "V{" << vec.size() << "," << vec.capacity();
    cout << "," << vec.front() << "," << vec.back() << "}\t";
    for (auto x : vec)
      cout << x << " , ";
    cout << "@" << endl;
  }
}

int main()
{
  cout << "STL::Vector Tutorial" << endl;

  /*
  string arr[]         = { "Santosh", "Aman", "Bineeta", "Ashish" };
  list<string> listStr = { "FIRST", "SECOND", "THIRD", "FOURTH" };
  CharVector tvec      = { 'C', '+', '+' };

  IntegerVector vecInt1(5);
  IntegerVector vecInt2{ 22, 33, 11, 89, 49 };
  StringVector vecStr3(arr, arr + sizeof(arr) / sizeof(string));
  StringVector vecStr4(listStr.begin(), listStr.end());
  CharVector vecChar5(tvec);

  //displayVector(vecInt1);
  //displayVector(vecInt2);
  //displayVector(vecStr3);
  //displayVector(vecStr4);
  //displayVector(vecChar5);
  */

  IntegerVector vec{ 97, 67, 37, 7, 101 };
  displayVector(vec);

  vec.push_back(23);
  displayVector(vec);

  vec.pop_back();
  displayVector(vec);

  vec.push_back(99);
  displayVector(vec);

  vec.erase(vec.begin() + 1);
  displayVector(vec);

  vec.clear();
  displayVector(vec);

  vec = { 99, 88, 77, 1, 2, 3, 67, 44 };
  displayVector(vec);

  sort(vec.begin(), vec.end());
  displayVector(vec);

  sort(vec.begin(), vec.end(), greater<int>());
  displayVector(vec);

  sort(vec.begin(), vec.end(), less<int>());
  displayVector(vec);

  //CharVector v1, v2;
  //v1.operator=(vecChar5);
  //v2         = vecChar5;

  //v1.operator[](1) = '#';
  //v2[2]            = '#';

  //displayVector(v1);
  //displayVector(v2);

  /*
    Iterators
    vector::begin()
    vector::end()
    vector::cbegin()
    vector::cend()
  */

  /*
    Modifiers
    vector::push_back()
    vector::insert()
    vector::pop_back() 
    vector::erase()
    vector::clear()
  */

  // Create an std::vector of 5 string objects
  //StringVector vecStr;
  //vecStr.push_back("v_first");
  //vecStr.push_back("v_sec");
  //vecStr.push_back("v_third");
  //vecStr.push_back("v_fouth");

  //for (std::string str : vecOfStr)
  //  std::cout << str << std::endl;

  //1 vectorInt vec(6);
  //2 vectorInt vec(6,67);
  //3 vectorInt vec(arr, arr + sizeof(arr) / sizeof(int));
  //4 vectorStr vec(listOfStr.begin(), listOfStr.end());
  //5 vectorStr vec(vecOfStr);

  //xx std::vector<int> vec{ 3, 2, 7, 5, 8 };

  //std::vector<int> vArray[5] = { 3, 2, 7, 5, 8 }; // not okay in C++03

  //// Array of string objects
  //std::string arr[] = {
  //  "A",
  //  "B",
  //  "C",
  //  "D",
  //  "E",
  //  "F",
  //  "G",
  //  "H"
  //};

  //// Vector with a string array
  //std::vector<std::string> vecOfStr(arr, arr + sizeof(arr) / sizeof(std::string));

  /*int x = sizeof(arr);
  int y = sizeof(std::string);
  cout << x << endl;
  cout << y << endl;

  int i = sizeof(int);
  int f = sizeof(float);
  int d = sizeof(double);
  cout << i << endl;
  cout << f << endl;
  cout << d << endl;*/
}
