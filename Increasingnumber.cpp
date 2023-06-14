#include<iostream>
using namespace std  ;
int main()
{
    long long n ,s=0,x=-1,y ; 
    cin>>n ;
    while(n--){
        cin>>y ; 
        if(x==-1){x=y;}
        if (y<x){s+=x-y ;}
        else{x=y;}
    }
    cout<<s ; 
    return 0 ;
}