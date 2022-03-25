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
    int n;
    cin >> n;
    while(n--)
    {
       bool kr = false, kg = false, kb = false, fct = true;
       for(int i = 0; i < 6; i++)
       {
           char a;
           cin >> a;
           if(!fct)
           {
               continue;
           }
           if( a == 'r' )
           {
               kr = true;
           }
           else if (a == 'g')
           {
               kg = true;
           }
           else if (a == 'b')
           {
               kb = true;
           }

           else if(( a == 'R' && !kr) || ( a == 'B' && !kb) || ( a == 'G' && !kg) )
           {
               cout << "NO" << endl;
               fct = false;
           }
       }
       if(fct)
       {
           cout << "YES" << endl;
       }
    }

	return 0;
}
