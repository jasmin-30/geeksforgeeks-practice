/*
Given a number find sum of its digit recursivelt until you find single digit sum.

Input 0 : 191
output 0 : 2
// 191 : 1+9+1 = 11
// 11 : 1+1 = 2 // Returns it

*/

#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define M 1000000007
using namespace std;

int digitSum(int n)
{
    if(n<10) {
        return n;
    }

    return digitSum(n/10) + (n%10);
}

int recursiveSum(int n)
{
    if(n<10)
        return n;
    
    return recursiveSum(digitSum(n));
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
        cout<<recursiveSum(n)<<endl;
    }
    return 0;
}