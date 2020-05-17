/*
Given an array of integers with duplicates.
task is to find integer with odd numbers of occurence.
it is given that there is only two odd occuring integer.
*/

#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define M 1000000007
using namespace std;

void twoOddAppearing(int arr[], int n)
{
    int Xor = 0, res1 = 0, res2 = 0;
    for(int i=0;i<n;++i)
        Xor ^= arr[i];
    
    int sn = Xor & (~(Xor-1));

    for(int i=0;i<n;++i) {
        if((arr[i] & sn) != 0)
            res1 ^= arr[i];
        
        else
            res2 ^= arr[i];
    }

    cout<<res1<<" "<<res2<<endl;

    
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
        int arr[n];
        for(int i=0;i<n;++i) {
            cin>>arr[i];
        }

        twoOddAppearing(arr, n);
    }
    return 0;
}