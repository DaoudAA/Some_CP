#include <iostream>
#include <vector>
using namespace std;
int main(){
long long n,y ; 
vector<long long> Vect ; 
cin >> n ;
for(long i = 0 ; i < n-1 ; i++){
    cin >> y ;
    Vect.push_back(y) ;     
}
long long x=1;
while (x<=n){
bool found=false;
long long i=0;
    while (i<n){
        if (Vect[i]==x) {found=true;break;}
        i++;
    }
    if (found) x++;
    else break;
}
cout<< x << endl;
return 0;
}