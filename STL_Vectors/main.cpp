/*C++ vectors can automatically manage storage.
  It is efficient if you add and delete data often.
  If you use vectors, you can copy and assign other vectors with ease.
  A vector might consume more memory than an array.
*/
#pragma once
#include <algorithm>
#include <iostream>
#include <list>
#include <string>
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
    cout << "V{" << vec.size() << "," << vec.capacity() << "}\t[  ";
    //cout << "," << vec.front() << "," << vec.back() << "}\t[  ";
    for (auto x : vec)
      cout << x << " ";
    cout << "]" << endl;
  }
}

template <typename T>
void CapacityVector(std::vector<T> vec)
{
  /*
    Capacity
    size() – Returns the number of elements in the vector.
    max_size() – Returns the maximum number of elements that the vector can hold.
    capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
    resize(n) – Resizes the container so that it contains ‘n’ elements.
    empty() – Returns whether the container is empty.
    shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
    reserve() – Requests that the vector capacity be at least enough to contain n elements.
  */
  cout << "\nSTL::Vector Capacity" << endl;
  cout << "**********************" << endl;

  cout << "size()\t\t" << vec.size() << "\t\tcapacity()\t\t" << vec.capacity() << endl;

  vec.reserve(10);
  cout << "size()\t\t" << vec.size() << "\t\tcapacity()\t\t" << vec.capacity() << "\t{ reserve(10) }" << endl;

  vec.resize(3);
  cout << "size()\t\t" << vec.size() << "\t\tcapacity()\t\t" << vec.capacity() << "\t{ resize(3) }" << endl;

  vec.shrink_to_fit();
  cout << "size()\t\t" << vec.size() << "\t\tcapacity()\t\t" << vec.capacity() << "\t{ shrink_to_fit() }" << endl;

  vec.clear();
  if (vec.empty())
  {
    cout << "size()\t\t" << vec.size() << "\t\tcapacity()\t\t" << vec.capacity() << "\t{ empty() }" << endl;
  }

  cout << "max_size()\t" << vec.max_size() << endl;

  cout << "**********************" << endl;
}

template <typename T>
void IteratorVector(const std::vector<T>& vec)
{
  /*
    Iterators
    begin()   – Returns an iterator pointing to the first element in the vector
    end()     – Returns an iterator pointing to the theoretical element that follows the last element in the vector
    rbegin()  – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
    rend()    – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
    cbegin()  – Returns a constant iterator pointing to the first element in the vector.
    cend()    – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
    crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
    crend()   – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
  */
  cout << "\nSTL::Vector Iterators" << endl;
  cout << "**********************" << endl;

  cout << "begin() & end()" << endl;
  cout << "\t\tV{" << vec.size() << "," << vec.capacity() << "}\t[  ";
  for (auto i = vec.begin(); i != vec.end(); ++i)
    cout << *i << " ";
  cout << "]" << endl;

  cout << "cbegin() & cend()" << endl;
  cout << "\t\tV{" << vec.size() << "," << vec.capacity() << "}\t[  ";
  for (auto i = vec.cbegin(); i != vec.cend(); ++i)
    cout << *i << " ";
  cout << "]" << endl;

  cout << "rbegin() & rend()" << endl;
  cout << "\t\tV{" << vec.size() << "," << vec.capacity() << "}\t[  ";
  for (auto ir = vec.rbegin(); ir != vec.rend(); ++ir)
    cout << *ir << " ";
  cout << "]" << endl;

  cout << "crbegin() & crend()" << endl;
  cout << "\t\tV{" << vec.size() << "," << vec.capacity() << "}\t[  ";
  for (auto ir = vec.crbegin(); ir != vec.crend(); ++ir)
    cout << *ir << " ";
  cout << "]" << endl;

  cout << "**********************" << endl;
}

template <typename T>
void AccessVector(const std::vector<T>& vec)
{
  /*
    Element access
    reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
    at(g) – Returns a reference to the element at position ‘g’ in the vector
    front() – Returns a reference to the first element in the vector
    back() – Returns a reference to the last element in the vector
    data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
  */

  cout << "\nSTL::Vector Element Access" << endl;
  cout << "*************************" << endl;

  cout << "Reference operator vec[2]\t\t=\t" << vec[2] << endl;
  cout << "Reference operator vec.operator[](2)\t=\t" << vec.operator[](2) << endl;
  
  //cout << "size()\t\t" << vec.size() << "\t\tcapacity()\t\t" << vec.capacity() << endl;

  //cout << "\nReference operator [g] : g1[2] = " << g1[2];

  //cout << "\nat : g1.at(4) = " << g1.at(4);

  //cout << "\nfront() : g1.front() = " << g1.front();

  //cout << "\nback() : g1.back() = " << g1.back();

  // pointer to the first element
  //int* pos = g1.data();

  //cout << "\nThe first element is " << *pos;
  //return 0;

  cout << "begin() & end()" << endl;
  cout << "\t\tV{" << vec.size() << "," << vec.capacity() << "}\t[  ";
  for (auto i = vec.begin(); i != vec.end(); ++i)
    cout << *i << " ";
  cout << "]" << endl;

  cout << "cbegin() & cend()" << endl;
  cout << "\t\tV{" << vec.size() << "," << vec.capacity() << "}\t[  ";
  for (auto i = vec.cbegin(); i != vec.cend(); ++i)
    cout << *i << " ";
  cout << "]" << endl;

  cout << "rbegin() & rend()" << endl;
  cout << "\t\tV{" << vec.size() << "," << vec.capacity() << "}\t[  ";
  for (auto ir = vec.rbegin(); ir != vec.rend(); ++ir)
    cout << *ir << " ";
  cout << "]" << endl;

  cout << "crbegin() & crend()" << endl;
  cout << "\t\tV{" << vec.size() << "," << vec.capacity() << "}\t[  ";
  for (auto ir = vec.crbegin(); ir != vec.crend(); ++ir)
    cout << *ir << " ";
  cout << "]" << endl;

  cout << "**********************" << endl;
}

int mainold()
{
  cout << "STL::Vector Tutorial" << endl;
  cout << "**********************" << endl;

  IntegerVector vec;
  vec.push_back(97);
  vec.push_back(67);
  vec.push_back(37);
  vec.push_back(7);
  vec.push_back(101);
  displayVector(vec);

  CapacityVector(vec);
  IteratorVector(vec);
  AccessVector(vec);

  /*
  Element access:




  Modifiers:

    assign() – It assigns new value to the vector elements by replacing old ones
    push_back() – It push the elements into a vector from the back
    pop_back() – It is used to pop or remove elements from a vector from the back.
    insert() – It inserts new elements before the element at the specified position
    erase() – It is used to remove elements from a container from the specified position or range.
    swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
    clear() – It is used to remove all the elements of the vector container
    emplace() – It extends the container by inserting new element at position
    emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector
  

    vector::begin() and vector::end()
    vector rbegin() and rend()
    vector::cbegin() and vector::cend()
    vector::crend() and vector::crbegin()
    vector::assign()
    vector::at()
    vector::back()
    vector::capacity()
    vector::clear()
    vector::push_back()
    vector::pop_back()
    vector::empty()
    vector::erase()

    vector::size()
    vector::swap()
    vector::reserve()
    vector::resize()
    vector::shrink_to_fit()
    vector::operator=
    vector::operator[]
    vector::front()
    vector::data()
    vector::emplace_back()
    vector::emplace()
    vector::max_size()
    vector::insert()


  
  */

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

return 1;
}
