#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{int n,k,v;
	cin>>n>>k>>v;
	int arr[n],sum=0;
	for(int i=0;i<n;i++)
	{cin>>arr[i];
	sum=sum+arr[i];}
	int res=((n+k)*v)-sum;
	if(res>0&&res%k==0)
	{cout<<res/k<<endl;}
	else
	{cout<<-1<<endl;}}
	return 0;
}
