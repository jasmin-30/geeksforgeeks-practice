/*
consider standard dialer pad.
where 0 and 1 do not correspond to any characters.
2 -> abc
3 -> def
4 -> ghi
5 -> jkl
6 -> mno
7 -> pqrs
8 -> tuv
9 -> wxyz


Given an N digit number. 
List all words which are possible by pressing these numbers.

Input 0 : 2 3 4
Output 0 : adg adh adi aeg aeh aei afg afh afi bdg bdh bdi beg beh bei bfg bfh bfi cdg cdh cdi ceg ceh cei cfg cfh cfi
dgj dgk dgl dhj dhk dhl dij dik dil egj egk egl ehj ehk ehl eij eik eil fgj fgk fgl fhj fhk fhl fij fik fil 
*/


#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define M 1000000007
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
using namespace std;

vector<string> keypad = {
    "",
    "",
    "abc",
    "def",
    "ghi",
    "jkl",
    "mno",
    "pqrs",
    "tuv",
    "wxyz"
};

// void printWords(int )

// void possibleWords(int arr[], int n)
// {

// }

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
        rep(i,0,n) { cin>>arr[i]; }
        // possibleWords(arr, n);
        cout<<endl;

    }
    return 0;
}