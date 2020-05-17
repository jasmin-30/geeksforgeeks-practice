#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define M 1000000007
using namespace std;

int xorUpton(int n)
{
    int m = n % 4;
    if(m==0)
        return n;
    else if(m==1)
        return 1;
    else if(m==2)
        return (n+1);
    else
        return 0;
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
        cout<<xorUpton(n)<<endl;
    }
    return 0;
}

/*
Number     Binary-Repr   XOR-from-1-to-n
1              1           [0001]  <----- Equals to 1
2             10           [0011]  <----- Equals to n+1
3             11           [0000]  <----- We get a 0
4            100           [0100]  <----- Equals to n
5            101           [0001]  <----- Equals to 1
6            110           [0111]  <----- Equals to n+1
7            111           [0000]  <----- We get 0
8           1000           [1000]  <----- Equals to n
9           1001           [0001]
10          1010           [1011]
11          1011           [0000] <------ We get 0
12          1100           [1100] <------ Equals to n

*/