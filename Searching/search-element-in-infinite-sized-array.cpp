/*
Given an infinite sized array.
Find index of an element from array.

Here infinite sized array means array which is of milions of size.
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

int binarySearch(vi &arr, int l, int h, int k)
{
    if(l>h)
        return -1;
    
    int mid = l + ((h-l)/2);
    if(arr[mid] == k)
        return mid;
    
    if(arr[mid] > k)
        return binarySearch(arr, l, mid-1, k);
    else
        return binarySearch(arr, mid+1, h, k);
}

int findPos(vi &arr, int k)
{
    if(arr[0] == k)
        return 0;

    int i = 1;
    while(arr[i] < k)
        i *= 2;
    
    if(arr[i] == k)
        return i;
    
    else
        return binarySearch(arr, i/2, i, k);
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
        int n, k;
        cin>>n>>k;
        vi arr(n);
        rep(i,0,n) { cin>>arr[i]; }
        cout<<findPos(arr, k)<<endl;
    }
    return 0;
}