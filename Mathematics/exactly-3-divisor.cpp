// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

//Complete this function
int exactly3Divisors(int N)
{
    //Your code here
    if(N<2) {
        return 0;
    }
    int count = 0;
    for(int j = 2;j <= N; ++j) {
        int flag=1;
        for(int i=2;i<=int(sqrt(j));++i) {
            if(!(j%i))
                flag = 0;
        }
        if(flag) {
            if(j*j <= N) {
                cout<<j<<endl;
                ++count;
            }
        }
    }
    return count;
}

// { Driver Code Starts.


int main()
 {
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        cout<<exactly3Divisors(N)<<endl;
    }
	return 0;
}  // } Driver Code Ends