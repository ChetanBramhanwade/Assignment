// A1. Write a program in C++ to find the first 10 natural numbers.
// Author : <Chetan Bramhanwade>
//-------------------------------------------------------
//header files included
#include<iostream>
using namespace std;

int main()
{
    int i;
    cout << "find the first ten natural number:\n";
    cout << "*******************************\n";
    cout << "the natural numbers are:\n";
      for (i=1;i<=10;i++){
        cout << i <<" ";
      }
    return 0;

}