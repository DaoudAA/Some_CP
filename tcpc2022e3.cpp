#include <bits/stdc++.h>
using namespace std  ;
long long next(long long x){
    for(int j=x/2;j>0;j--){
        if(x%j==0){
            //cout << j <<endl ; 
            return j;
        }
    }
    
}

vector<long long >v;
int main()
{int t;
cin >>t ;
while(t--){
    long long n;
    cin >> n ;
    vector<long long > A,B;
    for(long long i=0;i<n;i++){
        long long x;
        cin>>x ;
        A.push_back(x);
    }
    for(long long i=0;i<n;i++){
        long long x;
        cin>>x ;
        B.push_back(x);
    }
    long long sum = 0;
    for (long long i = 0; i < n; i++){
        if (A[i]==B[i]) continue;
        else {long long y=max(A[i],B[i]);
                long long z=min(A[i],B[i]); 
            while(y!=z){
            y=next(y);sum++;
            if(y<z){z=next(z);sum++;}
            if(y<z){long long temp;temp=y;y=z;z=temp;}
        }
        }
    }
    cout << sum << endl;
}
  return 0 ;
}