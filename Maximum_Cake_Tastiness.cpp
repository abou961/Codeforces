#include <vector>
#include <iostream>
#include <math.h>
#include <string.h>
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
        int maxi = -1, maxi2 = -1;
        vector<int> a(n);
        for(int i = 0; i < n ; i ++)
        {
            cin >> a[i];

        }
        sort(a.begin(), a.end());
        cout << a[n-1] + a[n-2] << endl;
    }
	return 0;
}
