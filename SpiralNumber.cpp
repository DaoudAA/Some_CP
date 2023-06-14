#include<iostream>
using namespace std  ;
int main()
{
int t;
cin>>t ; 
while(t--){
    long long x,y,R=1;
    cin >> y >> x ;
    long long c=x-1,l=y-1;
    if(c==l){
        R=x*x-x+1;
    }
    if (c>l){
        if(c%2==0){R=x*x-y+1;}
        else{R=c*c+y;}
    }
    if(l>c){
       if(l%2==0){R=l*l+x;}
       else {R=y*y-x+1;} 
    }
    cout << R << endl; 
}

    return 0 ;
}