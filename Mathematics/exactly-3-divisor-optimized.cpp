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
    vector<int> prime((N+1), 1);
    int count = 0;
    prime[0]=prime[1]=0;

    //this for loop is for finding out prime numbers.
    for(int P=2;P*P<=N;++P) {
        if(prime[P]) {
            for(int j=P*2;j<=N;j+=P) {
                prime[j] = false;
            }
        }
    }


    //Now counting all prime numbers whose square is less than N
    for(int i=0;i*i<=N;++i) {
        if(prime[i])
            ++count;
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