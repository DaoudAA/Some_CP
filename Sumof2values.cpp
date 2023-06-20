#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    map<int , int> M;
for(int i=0;i<n;i++){
int x ;
cin >>x;
if(M.find(m-x)!=M.end()){
    cout << M[m-x] << " "<< i+1 << endl;
    return 0;
}
M[x]=i+1;
}

cout << "IMPOSSIBLE" <<endl ;
    return 0;
}/*if(m%2==0){
    if(M[m/2].size()>=2){cout<< M[m/2][0] <<" "<< M[m/2][1]; return 0;}
}
for(int j=m;j>m/2;j--){
    if(M[j].empty()){continue;}
    else{
        if(!(M[m-j].empty())){cout << M[j][0] <<" "<< M[m-j][0]; return 0; }
    }
}*/