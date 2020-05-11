#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

using vectorInt = std::vector<int>;
using vectorStr = std::vector<string>;

int main()
{
  cout << "STL::Vector Tutorial" << endl;

  // Create an std::vector of 5 string objects
  vectorStr vecOfStr;
  vecOfStr.push_back("v_first");
  vecOfStr.push_back("v_sec");
  vecOfStr.push_back("v_third");
  vecOfStr.push_back("v_fouth");

  //1 vectorInt vec(6);
  //2 vectorInt vec(6,67);
  //3 vectorInt vec(arr, arr + sizeof(arr) / sizeof(int));
  //4 vectorStr vec(listOfStr.begin(), listOfStr.end());
  //5 vectorStr vec(vecOfStr);

  vectorInt vecOfNums{ 1, 4, 5, 22, 33, 2, 11, 89, 49 };

  for (int x : vecOfNums) // int std::string
  {
    std::cout << x << std::endl;
  }

  //xx std::vector<int> vec{ 3, 2, 7, 5, 8 };

  //std::vector<int> vArray[5] = { 3, 2, 7, 5, 8 }; // not okay in C++03
}
