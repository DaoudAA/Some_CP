/*#include<iostream>
#include<cmath>
 #include <Set>
using namespace std  ;
int main()
{long long n,x,S=0 ;
set<long long> sett;
cin >> n >> x ;
    while (n--){
        long long p;
        cin >> p;
        sett.insert(p);
        S+=p;
    }
    long long res=sett.count(x);
    long long temp=x;
    while(temp--){
        if (temp<(x/2)){
            break;
        }
        long counter=sett.count(temp);
        long comp=sett.count(x-temp);
        if(counter>=comp){res+=counter;}
        else{res+=counter;
            for(int i=0;i<counter;i++){
            sett.erase(sett.find(x-temp));
        }}
    }

    }
    if (S%x){cout<< (S/x)+1 <<endl ; }
    else cout << S/x << endl;
return 0 ;
}*/
#include <bits/stdc++.h>
using namespace std  ;


vector<long long >v;
int main()
{
 long long n,x;
 cin>>n>>x;

 while(n>0){

    long long p;
    cin>>p;
    v.push_back(p);

    n--;
 }
 sort(v.begin(),v.end());
 int nb=0;
 int debut=0;
 int fin =v.size() - 1;
 while(debut<=fin){

      if(v[debut]+v[fin]<=x){

        debut++;
        fin--;
    }
     else{
        fin--;
    }
    nb++;
 }

  cout<<nb<<endl;
  return 0 ;
}