/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

void print(string str)
{
    int i=0;string t,a[100];
    stringstream x(str);
    while(getline(x,t,'.'))
   {
       a[i++]=t;
   }
   i--;
   for(int j=i;j>=0;j--)
   {
       cout<<a[j];
       if(j!=0)
       {
           cout<<".";
       }
   }
   cout<<"\n";
}

int main()
{
   string str;int tc;
   cout<<"enter the no.of testcase:";
   cin>>tc;
   for(int k=0;k<=tc;k++)
   {
        getline(cin,str);
        print(str);
   }

    return 0;
}

