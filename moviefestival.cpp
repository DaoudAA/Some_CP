#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> elt1,pair<int,int> elt2){
    return (elt1.second<elt2.second);}
int main()
{int n;
cin >> n;
vector<pair<int,int>> v;
for(int i=0;i<n;i++){
    int x,y;
    cin>> x >> y ;
    v.push_back({x,y});
}
int outdate=0,res=0;

sort(v.begin(),v.end(),cmp);
for(int i=0;i<n;i++){
    if(v[i].first>=outdate){
        res++;
        outdate=v[i].second;
    }
}
cout << res <<endl ;
    return 0;
     
}
