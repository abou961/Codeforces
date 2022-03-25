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
        string s;
        cin >> s;
        ll maxi = -1;
        for(ll i = 0; i <s.size();i++)
        {
            ll mini = 0;
            for(ll j=i+1; j<s.size(); j++ )
            {
                if(s[j] == s[i])
                {
                    maxi++;
                    mini++;
                    break;
                }
            }
          if(mini==0)
                break;
        }


        cout << s.substr(maxi+1, s.size()-maxi) << endl;

    }
	return 0;


}
