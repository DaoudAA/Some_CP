#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    vector<Node*> child;

    Node(int d):val(d) {};
};

int dfs(int k,unordered_map<int , Node*> &mp,vector<int> &res){
    if (mp[k]->child.size()==0) return 1;
    for( auto c : mp[k]->child){
        res[k]+=dfs(c->val,mp,res);
    }
    return res[k]+1;
}
void solve(){
    int n;
    cin>>n;
    unordered_map<int , Node*> mp;
    vector<int> res(n+1,0);
    for (int i = 1;i <= n;++i){
        mp[i]=new Node(i);
    }
    int x;
    for(int i=2;i<=n;i++){
        cin >> x ;
        mp[x]->child.push_back(mp[i]);
    }
    dfs(1,mp,res);
    for(int i=1;i<=n;i++){
        cout<<res[i]<<" ";
    }
}

int main(){
    solve();

    return 0 ; 
}
