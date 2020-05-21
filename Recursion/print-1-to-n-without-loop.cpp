/*
Given number n.
print numbers from 1 to n without using for loop.
*/


#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define M 1000000007
using namespace std;

void printNos(int n)
{
    if(n<1)
        return;
    printNos(n-1);
    cout<<n<<" ";
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
        printNos(n);
        cout<<endl;
    }
    return 0;
}