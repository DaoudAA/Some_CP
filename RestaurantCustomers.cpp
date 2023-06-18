#include<bits/stdc++.h>
#include<vector>
#include<cmath>
#include <climits>
using namespace std ;  
int main() 
{

    long n ; 
    cin>>n ; 
    long long n1=0;
    vector<pair<int,int>> v;
    while (n--){
        int  a,b; 
        cin >> a >> b ;
        v.push_back({a,1});
        v.push_back({b,-1});
      //  n1=max(n1,b);
    }
   sort(v.begin(),v.end());
   /* for (long i = 0; i < vv.size(); i+=2){
        v[vv[i]]++;v[vv[i+1]]--;
    }*/
    int  cur_sum=0,max_sum=0; 
    for(auto  elt : v){
        // if (cur_sum < 0){cur_sum = 0;}
        cur_sum = cur_sum + elt.second;
        max_sum = max(cur_sum, max_sum);
    }
    cout<<max_sum<<endl ;     
    
    

    return 0  ; 
}