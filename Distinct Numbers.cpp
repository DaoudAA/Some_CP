#include<bits/stdc++.h>
using namespace std ;  
int main() 
{

    long long n ; 
    cin>>n ;
    set<long long> S; 
while (n--){long long x;
cin >>x;
S.insert(x);
}
cout<< S.size()<<endl;
    return 0  ; 
}