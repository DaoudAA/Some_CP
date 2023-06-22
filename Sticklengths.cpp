#include <bits/stdc++.h>
using namespace std;


int main()
{int n;
cin >> n;
vector<int> v;
//long long sum=0;
for(int i=0;i<n;i++){
int x;cin>>x;
v.push_back(x);//sum+=x;
}
sort(v.begin(),v.end());
//long moy=floor(((float)sum/(float)n)+0.5);
long long res=0;
for(int i=0;i<n;i++){res+=abs(v[i]-v[n/2]);}
cout << res <<endl ;
    return 0;
     
}
