#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define M 1000000007
using namespace std;

bool isPal(string s, int start, int end)
{
    if(start >= end)
        return true;

    if(s[start] != s[end])
        return false;

    return isPal(s, start+1, end-1);
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
        string str;
        cin>>str;
        int l = str.length();
        cout<<(isPal(str,0,l-1)?"Yes":"No")<<endl;
    }
    return 0;
}