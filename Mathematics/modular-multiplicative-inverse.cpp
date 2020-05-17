// { Driver Code Starts
//Initial Template for C++

#include<iostream>
using namespace std;


 // } Driver Code Ends


//User function Template for C++
int gcd(int a, int b)
{
	if(a==0)
		return b;
	return gcd((b%a),a);
}

void EEA(int a, int b, int &x, int &y)
{
	if(a==1) {
		x = 1;
		y = 0;
		return ;
	}
	int x1,y1;
	EEA(b%a,a,x1,y1);
	x = y1 - (b/a)*x1;
	y = x1;
}

//Complete this function
int modInverse(int a, int m)
{
    //Your code here
	if(a>m) {
		int tmp = m;
		m = a;
		a = tmp;
	}
	if((gcd(a,m) != 1) || a == 0) {
		return -1;
	}
	int x,y;
	EEA(a,m,x,y);
	x = ((x%m)+m)%m;
	return x;
	
}

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--){
		int a,m;
		cin>>a>>m;
		cout << modInverse(a, m)<<endl;
	}
    return 0;
}  // } Driver Code Ends