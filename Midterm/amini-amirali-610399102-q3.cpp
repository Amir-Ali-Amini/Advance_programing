//q 3
//Fig : 2
//use ?:
//date
//amiraliamini 610399102 UT-CS-99

//=================================================================================

#include <iostream>
#include <string>
#include<vector>
#include <iomanip>
#include<cstdlib>
using namespace std;


//----------------------------------------------------------------------------------

int mod = 1000000007;
long long int C[1005][1005];
int sum[1005];
long long int Sech(int n, int m)
{
	if(n==1)
		return 1;
	return C[m-1][sum[n]-1]*Sech(n-1, m-sum[n])%mod;
}
int main()
{
	int m, n, i, j;
	for(i=0;i<=1002;i++)
		C[i][0] = 1;
	for(i=1;i<=1002;i++)
	{
		for(j=1;j<=i;j++)
			C[i][j] = (C[i-1][j-1]+C[i-1][j])%mod;
	}
	m = 0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>sum[i];
		m += sum[i];
	}
	cout<<Sech(n,m);
	return 0;
}
