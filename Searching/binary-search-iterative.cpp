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

int binarySearch(vi &arr, int n, int k)
{
    int low = 0;
    int high = n-1;
    while(low <= high) {
        int mid = low + (high-low)/2;
        if(arr[mid] == k)
            return mid;
        
        if(arr[mid] > k)
            high = mid-1;
        else
            low = mid+1;
    }
    return -1;
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
        cout<<binarySearch(arr, n, k)<<endl;
    }
    return 0;
}