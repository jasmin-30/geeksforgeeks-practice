/*
N-bonacci Numbers.
Explaination : Fibonacci series is 2-bonacci series where
every element is sum of previous 2 element

likewise N-bonacci series is where every element 
is sum of previous N elements.

Print first M N-bonacci numbers.
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

void printSeries(int n, int m)
{
    vi series(m,0);
    series[n-1] = 1;

    int curr_sum = 1;
    rep(i,n,m) {
        series[i] = curr_sum;
        curr_sum += (series[i] - series[i-n]);
    }

    rep(i,0,m) {
        cout<<series[i]<<" ";
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
        int n,m;
        cin>>n>>m;
        printSeries(n, m);
        cout<<endl;
    }
    return 0;
}