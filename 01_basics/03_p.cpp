/*
*
**
* *
*  *
*   *
******
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=0;i<6;i++)
    {
        if(i==0||i==1||i==5)
        {
            for(int j=0;j<=i;j++)
            {
                cout<<"*";
            }
        }
        else 
        {
            for(int j=0;j<6;j++)
            {
                if(j==0||i==j)
                {
                    cout<<"*";
                }
                else 
                    cout<<" ";
            }
        }
        cout<<endl;
    }
}