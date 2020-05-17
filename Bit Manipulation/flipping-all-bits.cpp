#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define M 1000000007
using namespace std;

int Flip(int n)
{
    int x = log2(n);
    int m = 1 << x; // making number whose only (x+1)th bit from left is set.
    m = m | (m-1); // making number in which all the bits are set.
    return n^m;
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
        int n;
        cin>>n;
        cout<<Flip(n)<<endl;
    }
    return 0;
}