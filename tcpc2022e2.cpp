#include <iostream>

using namespace std; 
int main(){
int n;
cin >> n;
int A[n],Sum=0;
cin>>A[0];
for(int i = 1; i < n; i++){
    int j;
    cin>>j;
    A[i]=A[i-1]+j;
}
int t;
cin >> t;
while(t--){
    int x,y,m;
    cin >> x >> y >> m ;
    int B,C;
    B= (x < A[n-1]) ? A[n-1] : x;
    C=y+A[m-1];
    if (B>C) {cout << C<<endl;} 
    else {cout << B<<endl;}
}
return 0;
}