#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define M 1000000007
#define rep(i, begin, end) for (__typeof(end) i = (begin); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
using namespace std;

void reverse(int arr[], int n)
{
    int low=0, high = n-1;
    while(low < high) {
        int tmp = arr[low];
        arr[low] = arr[high];
        arr[high] = tmp;
        ++low;
        --high;
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
        int n;
        cin>>n;
        int arr[n];
        rep(i,0,n) {
            cin>>arr[i];
        }
        reverse(arr, n);
        rep(i,0,n) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}