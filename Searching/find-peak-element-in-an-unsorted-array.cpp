/*
You are given an unsorted array.
You need to find peak element in given array.

Peak element is the element which is greater than its neighbours.

Input 0 : [5, 10, 20, 15, 7]
Output 0 : 20

Input 1 : [10, 20, 15, 5, 23, 90, 67]
Output 1 : 20 or 90

Input 2 : [20, 8, 7]
Output 2 : 20

*/

#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define vi vector<int>
#define vll vector<long long>
#define vc vector<char>
#define vs vector<string>
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define M 1000000007
#define rep(i, begin, end) for (__typeof(end) i = (begin); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
using namespace std;

int findPeakUtil(vi &arr, int low, int high, int n)
{
    int mid = low + (high-low)/2;

    if((mid == 0 || arr[mid-1] <= arr[mid]) && (mid == n-1 || arr[mid+1] <= arr[mid]))
        return mid;

    if(mid > 0 && arr[mid] < arr[mid-1])
        return findPeakUtil(arr, low, mid-1, n);
    
    return findPeakUtil(arr, mid+1, high, n);
}

int findPeak(vi &arr, int n)
{
    return findPeakUtil(arr, 0, n-1, n);
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
        int n;
        cin>>n;
        vi arr(n);
        rep(i,0,n) { cin>>arr[i]; }
        cout<<findPeak(arr, n)<<endl;
    }
    return 0;
}