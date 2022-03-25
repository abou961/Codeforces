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
        string ch;
        cin >> ch;
        int p = ch.length()-1, d = 0;
        bool z =false;
        int c = ch.length();
        for(int i = 0; i < ch.length(); i++)
        {
            for(int j = i + 1; j < ch.length(); j++)
            {
                int a = int(ch[i]) - 48;
                int b = int(ch[j]) - 48;
                if((a*10+b) % 25 == 0)
                {
                    z = true;
                    int tt = ch.length();
                    c = min(tt-2-i, c);
                }
            }
        }
        if(!z)
        {
            cout << ch.length()<< endl;
        }
        else
        {
            cout << c << endl;
        }

    }
	return 0;
}
