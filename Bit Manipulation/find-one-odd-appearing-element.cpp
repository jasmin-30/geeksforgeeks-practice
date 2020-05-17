/*
Given an array of integers with duplicates.
task is to find integer with odd number of occurence.
it is given that there is only one odd occuring integer.
*/

#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define M 1000000007
using namespace std;

int ODDappearing(int arr[], int n)
{
    int result = 0;
    for(int i=0;i<n;++i)
        result ^= arr[i];
    
    return result;
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
        for(int i=0;i<n;++i)
            cin>>arr[i];

        cout<<ODDappearing(arr, n)<<endl;
    }
    return 0;
}