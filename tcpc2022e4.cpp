#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std  ;
long firstnonul(vector<long long> v){
    for(long i=0;i<v.size();i++){
        if(v[i]!=0){return i;}
        
    }
    return -1;
}
vector<long long>v;
int main()
{long n,Q; 
cin >> n >> Q;
for(long i=0;i<n;i++){long long elt; cin >> elt;v.push_back(elt);}
while(Q--){
    long k;
    cin >> k;
    while(k--){long i=firstnonul(v);
    if(i==-1){break;}
    else {
        while(v[i]!=0){v[i]-=1;i++;}
    }}
    long long S=0;
    for(long i=0;i<v.size();i++){S+=v[i];}
    cout << S << endl;
}
  return 0 ;
}