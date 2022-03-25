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
    ll n, a, b, res = 0;
    cin >> n >> a >> b;
    if(a<=0 && b>=0)
    {
        a=-a;
        res = 1 + (a/n)+(b/n);
        cout << res << endl;
        return 0;
 
    }
    else if (a<=0 && b<=0)
    {
        a=-a; b=-b;
        swap(a,b);
    }
    res = (b/n)-(a-1)/n;
    cout << res << endl;
	return 0;
}
