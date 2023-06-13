#include <iostream>

using namespace std; 
int main(){
int t;
cin >> t;
while(t--){
    int x,y;
    cin >> x >> y;
    if (y>x){
        cout << y-x << endl; 
        continue ;
    }
    cout << 0 << endl;
}
return 0;
}