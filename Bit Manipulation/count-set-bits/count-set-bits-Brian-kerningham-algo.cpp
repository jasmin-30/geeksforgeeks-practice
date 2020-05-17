/*
In this program we are implementing brian kerningham algorithm for finding total number of set bits in n.
*/

#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define M 1000000007
using namespace std;

long countSetBit(long n)
{
    int res = 0;
    while(n>0) {
        n = n&(n-1);
        res++;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int q;
    cin>>q;
    while (q--)
    {
        long n;
        cin>>n;
        cout<<countSetBit(n)<<endl;
    }
    return 0;
}

// Time complexity is O(total number of set bits in n)