#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std  ;
int main()
{
    long t ;
    cin>> t ;
    while(t--){
        long long n ;
        cin >> n ;
        vector<long long> v(n);
        for(long long i = 0 ; i < n ; i++){
        long k;
        cin >> k;
        while(k--){long x;
        cin>> x;
        v[x-1]++;}   
        }
        long y=0;
        set<long long> S;
        for(long long i = 0 ; i < n ; i++){
            if (v[i]>(n/2)){S.insert(i+1);y++;}
        }
        cout << y<<endl;
        for(long long elt:S){cout << elt << " ";}
        cout <<endl ;
    }
 return 0 ;
}