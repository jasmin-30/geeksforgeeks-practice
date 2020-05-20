#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define M 1000000007
using namespace std;

void TOH(int n, char s, char d, char aux)
{
    if(n==1) {
        cout<<"Move disc 1 from "<<s<<" to "<<d<<endl;
        return;
    }
    TOH(n-1, 'A', 'B', 'C');
    cout<<"Move disc "<<n<<" from "<<s<<" to "<<d<<endl;
    TOH(n-1, 'B', 'C', 'A');
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int q;
    cin>>q;
    while (q--)
    {
        int n;
        cin>>n;
        TOH(n, 'A', 'C', 'B');
        cout<<endl;
    }
    return 0;
}