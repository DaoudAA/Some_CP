#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std  ;
vector< long>v;
multiset< long> pric;
int main()
{ long n,m;
cin >> n >> m ;
for( long  i=0;i<n;i++){
     long x;
    cin >> x ; 
    pric.insert(x);
}
for( long i=0;i<m;i++){
     long x;
    cin >> x ; 
    v.push_back(x);
}
for( long i=0;i<m;i++){
    auto y=pric.upper_bound(v[i]);
    if(y!=pric.begin()){
        y--;
    cout<< *y <<endl;
    pric.erase(y);}
    else {cout<<-1<<endl;}
}

    return 0;
}