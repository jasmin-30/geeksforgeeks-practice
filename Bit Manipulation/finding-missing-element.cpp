/*
Given an array of n elements that has values in range (1,n+1).
Every number appears once. Hence one number is missing.
Task is to find that missing number.
*/

#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define M 1000000007
using namespace std;

int findMissing(int arr[], int n)
{
    int res = 0,i;
    for(i=1;i<=(n-1);++i) {
        res ^= arr[(i-1)];
        res ^= i;
    }
    res ^= i;
    return res;
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
        int arr[(n-1)];
        for(int i=0;i<(n-1);++i)
            cin>>arr[i];

        cout<<findMissing(arr, n)<<endl;
    }
    return 0;
}

/*
You can solve this problem by using sum of arithmatic progression formula.
as we know that in the array elements are in range.
we can use formula of sum of all the natural numbers from 1 to n.

Step 1 : traverse through whole array and find sum of all element.
Step 2 : now find expected_sum = (n*(n+1))/2 for give n;
Step 3 : return (expected_sum - sum)

*/