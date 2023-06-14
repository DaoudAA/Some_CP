#include<iostream>
#include<cmath>
using namespace std  ;
int main()
{const int pow=1000000007 ; 
int n;
cin>>n ;
int result=1 ; 
while (n--){result=(result*2)%pow ; }
cout<<result ; 
return 0 ;
}