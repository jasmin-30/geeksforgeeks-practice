/*
Given an array of size n and one number sum.
you need to find out how many subset of given array gives elements sum equal to given sum.
*/
#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define M 1000000007
using namespace std;

int countSubsetSum(int arr[], int n, int sum)
{
    if(n==0)
        return (sum == 0)?1:0;
    return (
        countSubsetSum(arr, n-1, sum) + 
        countSubsetSum(arr, n-1, sum-arr[n-1])
    );
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
        int n,sum;
        cin>>n>>sum;
        int arr[n];
        for(int i=0;i<n;++i) { cin>>arr[i]; }
        cout<<countSubsetSum(arr,n,sum)<<endl;
    }
    return 0;
}