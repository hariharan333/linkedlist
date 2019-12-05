/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


   int arr[4][4] = {
       1,1,0,1,
       1,0,1,0,
       1,1,1,0,
       0,0,1,1,
   };
   int path[4][4] = {
       0,0,0,0,
       0,0,0,0,
       0,0,0,0,
       0,0,0,0,
   };
    int findpath(int i,int j,int n)
    {
        if(i==n-1 && j=n-1)
        {
            path[i][j] = 1;
            return 1;
        }
        if(arr[i][j]==1)
        {
            path[i][j]=1;
            
            if(findpath(i,j+1,n)==1) return 1;
            if(findpath(i+1,j,n)==1) return 1;
            path[i][j] = 0;
        }
int main()
{
    findpath(0,0,4);
     for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(path[i][j])
                print(i,j);
        }
    }
}
    return 0;
}

