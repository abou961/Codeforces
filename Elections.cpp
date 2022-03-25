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
         ll a, b, c ,s, m;
         ll A, B, C;
         cin >> a >> b >> c;
         s = a + b + c;
         m = max (a,max (b, c));
         if(m == a)
         {
             A = 0;
             B = m+1 - b;
             C = m+1 - c;
         }
         if(m == b)
         {
             B = 0;
             A = m+1 - a;
             C = m+1 - c;
         }
         if(m == c)
         {
             C = 0;
             A = m+1 - a;
             B = m+1 - b;
         }
         if(a == b && b==c)
         {
             A = 1;
             B = 1;
             C = 1;
         }
         if(m == c && m == b && m!=a)
         {
             B = 1;
             C = 1;
             A = m+1 - a;
         }
         if(m == a && m == b && m!=c)
         {
             B = 1;
             C = m+1 - c;
             A = 1;
         }
         if(m == a && m == c && m!=b)
         {
             B = m+1 - b;
             C = 1;
             A = 1;
         }

         cout << A << " " << B << " " << C << endl;

     }
	return 0;
}
