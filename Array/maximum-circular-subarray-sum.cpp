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

int maxCircularSum(vi &arr, int n)
{
    // Finding Maximum sum of normal subarrays using kadane's algorithm
    int max_normal_sum, local_normal_sum;
    int min_normal_sum, local_min_sum;
    max_normal_sum = local_normal_sum = arr[0];
    min_normal_sum = local_min_sum = arr[0];
    int total_sum = arr[0];
    rep(i,1,n) {
        //computing total sum of array
        total_sum += arr[i];

        // This is standard kadane's algo for finding max subarray sum
        local_normal_sum = max(arr[i], local_normal_sum+arr[i]);
        max_normal_sum = max(max_normal_sum, local_normal_sum);

        // This is modified kadane's algorithm for finding min subarray sum
        local_min_sum = min(arr[i], local_min_sum+arr[i]);
        min_normal_sum = min(local_min_sum, min_normal_sum);
    }

    if(max_normal_sum < 0)
        return max_normal_sum;
    
    int max_circular_sum = total_sum - min_normal_sum;

    return max(max_circular_sum, max_normal_sum);
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
        cout<<maxCircularSum(arr, n)<<endl;
    }
    return 0;
}