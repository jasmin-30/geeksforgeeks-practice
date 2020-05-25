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

int majorityElement(vi &arr, int n)
{
    int res = 1, count = 1;
    
    //Phase 1 gives indes of potential candidate for majority element.
    rep(i,0,n) {
        if(arr[res] == arr[i])
            count++;
        else
            count--;

        if(count == 0) {
            res = i;
            count = 1;
        }
    }

    //Phase 2 ensure that the potential candidate is actually majority element.
    count = 0;
    rep(i,0,n) {
        if(arr[res] == arr[i])
            count++;
    }   
    if(count <= (n/2))
        res = -1;

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
        vi arr(n);
        rep(i,0,n) { cin>>arr[i]; }
        cout<<majorityElement(arr, n)<<endl;
    }
    return 0;
}