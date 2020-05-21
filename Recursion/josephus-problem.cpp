/*
There are n people standing in circular manner.
initially person at 0th position is holding sword.
you need to kill person at kth position in every iteration.
and at last only one person will survive.
you need to print the position of that survivor.

Input 0 : n=7, k=3
Output 0: 3

*/
#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define M 1000000007
using namespace std;

int jos(int n, int k)
{
    if(n==1)
        return 0;
    
    return ((jos(n-1,k)+k) % n);
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
        cout<<jos(n,k)<<endl;
    }
    return 0;
}