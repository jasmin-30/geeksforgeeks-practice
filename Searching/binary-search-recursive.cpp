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

int binarySearch(vi &arr, int low, int high, int k)
{
    if(low > high)
        return -1;

    int mid = low + ((high-low)/2);
    if(arr[mid] == k)
        return mid;

    if(arr[mid] > k)
        return binarySearch(arr, low, mid-1, k);
    else
        return binarySearch(arr, mid+1, high, k);
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
        cout<<binarySearch(arr, 0 ,n-1, k)<<endl;
    }
    return 0;
}