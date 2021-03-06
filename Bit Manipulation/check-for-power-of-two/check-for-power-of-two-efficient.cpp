/*
Given a number check whether the number is power of two or not.
*/

#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define M 1000000007
using namespace std;

bool isPow2(long n)
{
    /*
    if(n == 0)
        return false;

    return ((n&(n-1)) == 0);
    */
    return ((n!=0) && ((n&(n-1)) == 0));    
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
        cout<<(isPow2(n)?"Yes":"No")<<endl;
    }
    return 0;
}