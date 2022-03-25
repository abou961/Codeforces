#include <vector>
#include <iostream>
#include <math.h>
#define ll long long
using namespace std;
//Version 1


int main ()
{
  ll t;
  cin >> t;

  while(t--)
  {
      ll n, maxi = -9999999999, mini  = 9999999999;
      cin >> n;

      for(ll i = 0; i < n; i++)
      {
            ll a;
            cin >> a;
            if(a > maxi)
            {
                maxi = a;
            }
            if(a < mini)
            {
                mini = a;
            }
      }

      cout << maxi - mini << "\r\n";
  }

  return 0;
}

