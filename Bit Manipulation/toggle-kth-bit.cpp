#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define M 1000000007
using namespace std;

int togglekthbit(int n, int k)
{
    return (n ^ (1<<(k-1)));
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
        int n,k;
        cin>>n>>k;
        cout<<togglekthbit(n,k)<<endl;
    }
    return 0;
}