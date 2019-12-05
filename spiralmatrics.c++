
#include <iostream>

using namespace std;
int main()
{
   int r,c,arr[10][10];int k=0,l=0,last_row,last_column;
   cout<<"enter the row and column:";
   cin>>r>>c;
   last_row = r-1;last_column = c-1;
   for(int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++)
       {
           cin>>arr[i][j];
       }
   }
   while(k<=last_row && l<=last_column)
   {
       for(int i=k;i<=last_column;i++)
       {
           cout<<arr[k][i];
       }
       k++;
       for(int i=k;i<=last_row;i++)
       {
           cout<<arr[i][last_column];
       }
       last_column--;
       if(k<=last_row)
       {
           for(int i=last_column;i>=l;i--)
           {
               cout<<arr[last_row][i];
           }
           last_row--;
       }
       if(l<=last_column)
       {
           for(int i=last_row;i>=k;i--)
           {
               cout<<arr[i][l];
           }
           l++;
       }
   }
    return 0;
}

