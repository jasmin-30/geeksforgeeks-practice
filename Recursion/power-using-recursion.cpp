/*
Given number n and p.
print n raised to p using recursion.
*/

#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define M 1000000007
using namespace std;

//Below approach is O(n) solution.
/*
long power(int n, int p)
{
    if(p==1)
        return n;
    
    return n * power(n,p-1);
}
*/

//Below approach is also O(n) because it computes power(n,p/2) two times.
/*
long power(int n, int p)
{
    if(p==0)
        return 1;
    if(p&1)
        return n * power(n,p/2) * power(n,p/2);
    else
        return power(n,p/2) * power(n,p/2);
}
*/

// we can optimize above solution to O(logn)
long power(int n, int p)
{
    if(p==0)
        return 1;
    long tmp = power(n,p/2);
    if(p&1)
        return n * tmp * tmp;
    else
        return tmp * tmp;  
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int q;
    cin>>q;
    while(q--)
    {
        int n,p;
        cin>>n>>p;
        cout<<power(n,p)<<endl;
    }
    return 0;
}