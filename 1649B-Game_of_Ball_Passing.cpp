#include <vector>
#include <iostream>
#include <math.h>
#include <cstring>
#include <algorithm>
#define ll long long

using namespace std;


int main()
{
	ll t;
	ll ans, temp, sum;
	string sans;
	cin >> t;
	while(t--)
	{
		sans = "NO";
		ans = temp = sum = 0;
		ll n;
		cin >> n;
		ll maxi = -1;
		vector<ll> a(n+1);
		for(ll i = 1 ; i <= n; i++)
		{
			cin >> a[i];
			maxi = max (maxi, a[i]);
			sum += a[i];
		}

		if(sum == 0)
		{
			cout << "0"<< endl;
			continue;
		}
		sum-=maxi;
		if(sum>=maxi-1)
		{
			cout << "1" << endl;
			continue;
		}
		else
		{
			cout << 1+(maxi) -(sum+1) << endl;
			continue;
		}


	}
	return 0;
}
