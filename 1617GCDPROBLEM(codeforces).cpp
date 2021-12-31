#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
void solve()
{
	int n;cin>>n;
	if(n&1)
	{
		int x=n/2;
		if(x&1) cout<<x-2<<' '<<x+2<<' '<<1<<endl;
		else cout<<x-1<<' '<<x+1<<" "<<1<<endl;
	}
	else
	{
		cout<<n/2<<' '<<(n/2-1)<<' '<<1<<endl;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}