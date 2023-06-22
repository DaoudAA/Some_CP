
#include <bits/stdc++.h>
using namespace std;
vector<long long int> v(1001, 0);
class Solution
{
public:
    long long int nthFibonacci(long long int n)
    {if (v[n] != 0)
        {
            return v[n];
        }
        if (n <= 2)
        { v[n]=1;}
        else
        {
            v[n] = (nthFibonacci(n - 1) + nthFibonacci(n - 2))% 1000000007;
        } return v[n];
    }
};

//{ Driver Ctarts.ode S
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n)<< endl;
    }

    return 0;
}
