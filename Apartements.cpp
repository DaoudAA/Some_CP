#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    int k;
    cin >> n >> m >> k;
    vector<int> Cus, Ap;
    for(int h=0;h<n;h++)
    {
        int x;
        cin >> x;
        Cus.push_back(x);
    }

    for(int h=0;h<m;h++)
    {
        int x;
        cin >> x;
        Ap.push_back(x);
    }
    sort(Ap.begin(), Ap.end());
    sort(Cus.begin(), Cus.end());
    long Sum = 0; /*
       for(auto x: Cus){
           auto U=upper_bound(Ap.begin(),Ap.end(),x-k);
           auto L=lower_bound(Ap.begin(),Ap.end(),x+k);
           if (U==L){continue;}
           else{U--;
               Ap.erase(U);
               Sum++;
           }
       }*/
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (abs(Cus[i] - Ap[j]) <= k)
        {
            i++;
            j++;
            Sum++;
        }
        else if (Cus[i] > (Ap[j]))
        {
            j++;
        }
        else
            i++;
    }
    cout << Sum;

    return 0;
}