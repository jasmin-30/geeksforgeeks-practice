/*
Given a string.
task is to find power set of the given string
*/

#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define M 1000000007
using namespace std;

void powerSet(string s)
{
    int l = s.length();
    int Pow = pow(2,l);
    for(int counter=0;counter<Pow;++counter) {
        for(int j=0;j<l;++j) {
            if((counter&(1<<j)) != 0)
                cout<<s[j];
        }
        cout<<", ";
    }
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
        string s;
        cin>>s;
        cout<<s<<endl;
        powerSet(s);
        cout<<endl;
    }
    return 0;
}