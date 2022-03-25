#include <vector>
#include <iostream>
#include <math.h>
#include <cstring>
#include <algorithm>

using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int res = 0;
        bool serie = false;
        for(int i = 0; i < n ; i ++)
        {
            cin >> a[i];
        }

        int first1 = 1;
        int last1 = 1;
        for(int i = 0; i < n ; i++)
        {
            if(a[i] == 0)
            {
                first1 = i-1;
                break;
            }
        }
        for(int i = n-1 ; i >= 0; i --)
        {
            if(a[i] == 0)
            {
                last1 = i+1;
                break;
            }
        }

        cout << last1-first1 << endl;

    }
	return 0;
}
