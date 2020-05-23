#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define M 1000000007
using namespace std;

void printSub(string str, string current = "", int ind = 0)
{
    if(ind == str.length()) {
        cout<<current<<", ";
        return;
    }
    printSub(str, current, ind+1);
    printSub(str, current+str[ind], ind+1);
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
        printSub(str);
        cout<<endl;
    }
    return 0;
}