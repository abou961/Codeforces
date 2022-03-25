#include <vector>
#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>
#define ll long long

using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n, k;
        ll sum = 0, c = 0;
        cin >> n >> k;
        vector<ll> tab(k);
        for(ll i = 0;i < k; i++)
        {
            ll a;
            cin >> a;
            tab[i]=a;
        }
        sort(tab.rbegin(), tab.rend());
        for(ll i = 0;i < k; i++)
        {
            if(tab[i] > c)
            {
                c+=n;
                c-=tab[i];
                sum++;

            }
        }
        cout << sum << endl;
    }
	return 0;
}
