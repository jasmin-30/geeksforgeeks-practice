/*
Given an sorted array with repitition,
find left most index of an element.

Input 0 : [2, 3, 3, 3, 3], x = 3
Output 0 : 1

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

int leftMostIndex(vi &arr, int l, int h, int x)
{
    if(l > h)
        return -1;
        
    int mid = l + ((h-l)/2);
    if(arr[mid] == x && (mid==0 || arr[mid-1] != x)) {
        return mid;
    }

    if(arr[mid] >= x) {
        return leftMostIndex(arr, l, mid-1, x);
    }
    else {
        return leftMostIndex(arr, mid+1, h, x);
    }
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
        int n,k;
        cin>>n>>k;
        vi arr(n);
        rep(i,0,n) { cin>>arr[i]; }
        cout<<leftMostIndex(arr, 0, n-1, k)<<endl;
    }
    return 0;
}