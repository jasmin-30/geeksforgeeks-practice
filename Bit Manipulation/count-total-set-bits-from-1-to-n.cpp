/*
Given number N task is to find total set bits in each number from 1 to N both inclusive
*/

#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define M 1000000007
using namespace std;

int table[256];
void intializeLookupTable()
{
    table[0] = 0;
    for(int i=1;i<256;++i) {
        table[i] = (i&1) + table[i>>1]; // i>>1 gives integer value.
    }
}

long countSetBit(long n)
{
    int finalres = 0;
    for(int j=1;j<=n;++j) {
        int i = j;
        int res = table[i&0xFF];
        i >>= 8;
        res += table[i&0xFF];
        i >>= 8;
        res += table[i&0xFF];
        i >>= 8;
        res += table[i&0xFF];
        
        finalres += res;
    }
    return finalres;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int q;
    cin>>q;
    intializeLookupTable();
    while (q--)
    {
        long n;
        cin>>n;
        cout<<countSetBit(n)<<endl;
    }
    return 0;
}