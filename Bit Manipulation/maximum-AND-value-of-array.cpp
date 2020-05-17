/*
Problem Statement : Given an array. Find maximum AND value that can be obtained by performing AND operation between
any poosible pair from an array.

*/

#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define M 1000000007
using namespace std;

int checkbit(int pattern, int arr[], int n)
{
    int count=0;
    for(int i=0;i<n;++i) {
        if((pattern&arr[i]) == pattern)
            ++count;
    }
    return count;
}


int maximum_AND(int arr[], int n)
{
    int result = 0, count;
    for(int i=31;i>=0;--i) {
        count = checkbit(result | (1<<i), arr, n);

        
        if(count >= 2) {
            result |= 1<<i;
        }
    }
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
        for(int i=0;i<n;++i) {
            cin>>arr[i];
        }
        cout<<maximum_AND(arr, n)<<endl;
    }
    return 0;
}