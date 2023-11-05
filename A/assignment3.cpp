// A3. Write a program in C++ to calculate the series (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n).
// Author : <Chetan Bramhanwade>
//-------------------------------------------------------

//header files included

#include<iostream>
using namespace std;

main(){
    int n,j,i, sum=0;
    cout<<" Input the value for nth term: ";
    cin>> n;
    for(i=1; i<=n; i++)
    {
      int temp=0;
      for(j=1;j<=i;j++)
      {
        temp+=j;
        cout<<j;
        if(j!=i)
        cout<<"+";
        sum+=j;
      }
      cout<<"="<<temp<<endl;
    }
    cout<<"the sum of the above serirs is: "<<sum<<endl;
return 0;
}