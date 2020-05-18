#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define M 1000000007
using namespace std;

int sumOfDigit(int n)
{
    if(n<10)
        return n;

    return sumOfDigit(n/10) + (n%10);
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
        cout<<sumOfDigit(n)<<endl;
    }
    return 0;
}