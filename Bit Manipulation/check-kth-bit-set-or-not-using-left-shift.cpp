#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int q;
    cin>>q;
    while (q--)
    {
        int num,k;
        cin>>num>>k;
        if(num&(1<<(k-1)))
            cout<<"SET"<<endl;
        else
            cout<<"UNSET"<<endl;
    }
    
    return 0;
}