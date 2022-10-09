#include<iostream>
#include<string>
#include<math.h>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{


    int m=9;
    int n=24;

    for (int i = m; i <=n; i++)
    {
        for (int j = m; j<=n; j++)
        {
            if (sqrt(i)==j)
            {
                cout<<i<<" ";
            }
            
        }
        
        
    }
    

}