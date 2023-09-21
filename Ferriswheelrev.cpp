#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,x;
    int res=0;
    vector< int > v; 
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {   
        int y;
        cin >> y;
        v.push_back(y);
    }
    sort(v.begin(),v.end());
    int le=0,ri=n-1;
    while(le <= ri){
        if (v[le]+v[ri] <= x){
            
            le++;
        }
        res++;
        ri--;
    }
    cout << res << endl;
    
}



int main(){
solve();
return 0;}