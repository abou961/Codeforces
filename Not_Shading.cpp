#include <vector>
#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>
#define ll long long

using namespace std;

int tab[50][50];

bool surLigne(int n, int m, int r , int c)
{
    for(int i = 0; i < n; i ++)
    {
        if(tab[i][c-1] == 1)
        {
            return true;
        }
    }
    for(int i = 0; i < m; i ++)
    {
        if(tab[r-1][i] == 1)
        {
            return true;
        }
    }
    return false;
}



int main()
{
    int t,n,m,r,c;
    cin >> t;
    while(t--)
    {
        int cnt = 0;
        bool test = false;
        cin >> n >> m >> r >> c;
        for (int i = 0 ; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                char ca;
                cin >> ca;
                if(ca=='B')
                {
                  tab[i][j] = 1;
                }
                else 
                {
                  tab[i][j] = 0;
                }
                if(ca == 'B' && !test)
                {
                    cnt++;
                }
            }
        }

        if(cnt == 0)
        {
            cout << "-1"<< endl;
        }
        else if(tab[r-1][c-1] == 1)
        {
            cout << "0" << endl;
        }
        else if(surLigne(n,m,r,c))
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "2"<< endl;
        }
    }
	return 0;
}
