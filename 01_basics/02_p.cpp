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
            cout<<endl;
        }
        cout<<"*";
        if(i==1||i==2)
        {
            for(int j=1;j<6;j++)
            {
                cout<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}