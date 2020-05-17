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
    int res = table[n&0xFF];
    n >>= 8;
    res += table[n&0xFF];
    n >>= 8;
    res += table[n&0xFF];
    n >>= 8;
    res += table[n&0xFF];
    return res;
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

// Time complexity is O(total number of bits in n)