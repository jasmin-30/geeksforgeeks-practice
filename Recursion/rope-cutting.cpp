/*
we have one rope of length n.
we are given three other lengths a,b and c.
we need this rope to be cut but the condition is the cut part of rope should be of length either a,b or c.
means you can cut rope in any fashion but the rope should be cut in given lengths.
your task is to find the maximum number of cut ropes you can get.
if it is not possible to cut the rope in given lengths than print -1.


Input 0 : n=5, a=2, b=5, c=1
Output 0: 5
// rope is cut in 5 pieces of length 1

Input 1: n=23, a=12, b=9, c=11
Output 1: 2
// rope is cut in 2 piece of length 11 and 12 or length 12 and 11.

Input 2: n=5, a=4, b=2, c=6
Output 2 : -1
// we can not cut rope in given length in any way.
*/


#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define M 1000000007
using namespace std;

int Max(int a, int b, int c)
{
    if(a>b && a>c)
        return a;

    if(b>a && b>c)
        return b;

    if(c>a && c>b)
        return c;
}

int maxCuts(int n, int a, int b, int c)
{
    if(n==0)
        return 0;

    if(n<0)
        return -1;

    int res = Max(
        maxCuts(n-a, a, b, c),
        maxCuts(n-b, a, b, c),
        maxCuts(n-c, a, b, c)
    );

    if(res == -1)
        return -1;

    return (res+1);
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
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        cout<<maxCuts(n, a, b, c)<<endl;
    }
    return 0;
}