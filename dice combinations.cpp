#include <bits/stdc++.h>
using namespace std;


int main()
{int n;
cin >> n;
vector<long long int> v(n+1,0);
v[0]=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=6;j++){
                if(i>=j){
                v[i]=(v[i]+v[i-j])%(1000000007);
            }}
        }
    
cout << v[n] ;
    return 0;
     
}
