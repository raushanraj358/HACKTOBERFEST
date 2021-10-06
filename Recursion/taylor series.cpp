#include <stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

double factorial(double n)
{
    if(n==0)
    return 1;
    
    else return n*factorial(n-1);
    
}

double taylorseries(double x, double n)
{
    if(n==0)
    return 1; 
    else 
    return pow(x,n)/factorial(n) + taylorseries(x,n-1);
}



int main()
{
    double m,n;
    cin>>m>>n;
    cout<<taylorseries(m,n);

    return 0;
}
