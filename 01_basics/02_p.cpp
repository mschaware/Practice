/*
*******
*     *
*     *
*******
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=0;i<4;i++)
    {
        if(i==0||i==3)
        {
            for(int j=0;j<7;j++)
            {
                cout<<"*";
            }
        }
        else
        {
            cout<<"*";
            for(int i=1;i<6;i++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }

}