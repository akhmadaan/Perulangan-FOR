#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    system("color b");
    for(int j=1;j<=10;j++)
    {
        for(int k=1;k<=j;k++)
            cout<<k*j<<" ";
        cout<<"\n";
    }
    return 0;
}
