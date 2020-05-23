/*
You are given price of stock on ith day.
we can buy stocks at any day and sell at any later days.
You need to find the maximum profit we can get.

Input 0 : arr = [1, 5, 3, 8, 12]
Output 0 : 13
// buy on day 0 and sell on day 1 --> profit => 5-1 = 4
// buy on day 2 and sell on day 4 --> Profit => 12-3 = 9
// total profit = 4 + 9 = 13


Input 1 : arr = [30, 20, 10]
Output 1 :  0

Input 2 : arr = [1, 5, 3, 1, 2, 8]
Output 2 : 11
// (5-1) + (8-1) = 11

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

int maxProfit(vi &arr, int n)
{
    int profit = 0;
    rep(i,0,n) {
        if(arr[i] > arr[i-1])
            profit += (arr[i] - arr[i-1]);
    }
    return profit;
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
        cout<<maxProfit(arr, n)<<endl;
    }
    return 0;
}