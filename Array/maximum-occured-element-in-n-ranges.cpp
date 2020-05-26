/*
Given two arrays of ranges.
i.e.
L[] = {1,3,5}
R[] = {3,6,8}

Here 0th element of both array combined make one range and so on.

Your task is to find out the element which occurs maximum number of times in this ranges.

Input 0 : L[] = {1, 2, 5, 15}
          R[] = {5, 8, 7, 18}

Output 0 : 5
// range(1,5)   : {1, 2, 3, 4, 5}
// range(2,8)   : {2, 3, 4, 5, 6, 7, 8}
// range(5,7)   : {5, 6, 7}
// range(15,18) : {15, 16, 17, 18}
// So element which appears max number of times is 5.


Condition is that 0<=L[i]<=1000, 0<=R[i]<=1000
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

int maxOccur(vi &L, vi &R, int n)
{
    vi arr(1000);
    rep(i,0,n) {
        arr[L[i]]++;
        arr[R[i]+1]--;
    }

    int Max = arr[0], res = 0;
    rep(i,1,1000) {
        arr[i] += arr[i-1];
        if(Max < arr[i]) {
            Max = arr[i];
            res = i;
        }
    }
    return res;
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
        vi L(n), R(n);
        rep(i,0,n) { cin>>L[i]; };
        rep(i,0,n) { cin>>R[i]; };
        cout<<maxOccur(L, R, n)<<endl;
    }
    return 0;
}