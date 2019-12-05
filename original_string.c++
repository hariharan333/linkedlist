/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>

using namespace std;

int main()
{
   string str,T,arr[100],org[100];
   
   int count = 0,i=0,k=0;
   
   getline(cin,str);
   
   stringstream x(str);
   
   while(getline(x,T,' '))
   {
       arr[i++] = T;
   }
   for(int j=0;j<i;j++)
   {
       if(count == 0)
       {
          org[k++]=arr[j];
          count++;
       }
       else
       {
          int flag=1;
           for(int s=0;s<k;s++)
           {
               if(org[s]==arr[j])
               {
                  flag=0;
               }
           }
            if(flag==1)
               {
                   org[k++]=arr[j];
                   count++;
               }
       }
   }
   cout<<count;

    return 0;
}

