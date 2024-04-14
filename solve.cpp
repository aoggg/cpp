#include<bits/stdc++.h>
#define int long long
// #include<iostream>
// #include<queue>
// #include<vector>
// #include<set>
// #include<utility>
// #define pip pair<int, pair<int, int>>
using namespace std;

int n,p;
vector<int> v;

void PRINT()
{
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<' ';
	}
	cout<<'\n';
}

signed main()
{
	cin>>n>>p;
	
	int now = n;
	while(now>0)
	{
		v.push_back(now%p);
		now /= p;
	}
	
	int ans = 0;
	
	int cnt = 0;
	int sz = v.size();
	for(int i=0;i<sz;i++)
	{
		// cout<<v.size()<<'\n';
		// PRINT();
		if(i==v.size()-1)
		{
			ans += v[i];
			break;
		}
		if(p-v[i]>v[i])
		{
			ans += v[i];
			if(v[i]>0)cnt++;
		}
		else
		{
			ans += (p-v[i]);
			v[i] = 0;
			bool go = true;
			for(int j=i+1;j<sz;j++)
			{
				if(!go)break;
				go = false;
				v[j]++;
				if(v[j]==p)
				{
					v[j] = 0;
					go = true;
				}
			}
			if(go)v.push_back(1);
		}
		// cout<<ans<<' '<<cnt<<'\n';
		sz = v.size();
	}
	cout<<ans*2-1;
	
	return 0;
}
	