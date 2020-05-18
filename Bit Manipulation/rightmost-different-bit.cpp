#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define M 1000000007
using namespace std;

int posOfRightMostDiffBit(int m, int n)
{
    if(m==n)
        return 0;
        
    int Xor = m^n;
    int pos = Xor & ~(Xor-1);
    int res = log2(pos);
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
        int m,n;
        cin>>m>>n;
        cout<<posOfRightMostDiffBit(m,n)<<endl;
    }
    return 0;
}