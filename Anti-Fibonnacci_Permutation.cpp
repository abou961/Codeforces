#include <vector>
#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>
#include <cstdlib>
#define ll long long

using namespace std;


int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n==3)
        {
            cout <<"3 2 1\n1 3 2\n3 1 2\n";
        }
        else
        {
            vector<int> v;
            for (int i = n; i >0; i --)
            {
                v.push_back(i);
            }
            for(int i = 0; i < n; i ++)
            {
                int tsmp = v[0];
                for(int k = 1; k < n; k++)
                {
                    v[k-1] = v[k];
                    cout << v[k]<<" ";
                }
                v[n-1] = tsmp;
                cout << tsmp << endl;
            }
        }
    }


	return 0;
}

// test for upddate
// test for branching
