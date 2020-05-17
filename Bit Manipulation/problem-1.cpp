//Problem 1: Given a number N, find the most significant set bit in the given number.
// we need to find the position of most significant bit of given number and return the number which has only that position bit set.
// I/P : n=10      (whose binary representation is [1010])
// O/P : 8         (whose binary representation is [1000])



#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define M 1000000007
using namespace std;

int func(int n)
{
    int p = log2(n);
    return pow(2,p);
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
        cout<<func(n)<<endl;
    }
    return 0;
}