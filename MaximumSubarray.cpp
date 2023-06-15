#include <bits/stdc++.h>
using namespace std  ;


vector<long long >v;
int main()
{ long long n;
    cin >> n ;
while(n--){
    long long p ;
  cin >> p;
  v.push_back(p);
}
long long res=-9223372036854775808;
long long k =v.size();
while(k){
for(long long i=0;i<k;i++){
    long long S=0;
    for(long long j=k-1;j>=i;j--){
        S+=v[j];
    }
   // cout << "compte de "<< i << "a " << k-1 << "somme = "<< S << endl ;//cout << "change a " << res ;
    if (S>res){res=S;}
}
k--;}
  cout<<res<<endl;
  return 0 ;
}