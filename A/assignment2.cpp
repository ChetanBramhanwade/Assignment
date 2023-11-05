// A2. Write a program in C++ to display n terms of natural numbers and their sum.
// Author : <Chetan Bramhanwade>
//-------------------------------------------------------
//header files included


#include<iostream>
using namespace std;

int main()
{
    int n,i, sum=0;
   cout << "Input a number of terms:";
   cin >> n;
   cout << "The natural numbers upto "<< n <<" terms are:\n";
    for(i=1; i<=n ; i++)
    {
        cout << i <<" ""\n";
        sum =sum+ i;
    }
    cout << " sum of the natural terms is:" << sum << "\n";
    return 0;
}