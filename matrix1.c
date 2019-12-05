#include <stdio.h>
int main()
{
   int arr[6][6],s=1,k,sum,s1=0,s2=0,i,j,a=-999,y=0,t=0;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(k=1;k<=16;k++)
    {
        for(i=0;i<3;i++)
        {
            if(i==0 || i==2)
            {
                for(j=0;j<3;j++)
                {
                    s1+=arr[i+y][j+t];
                }
            }
               else 
            {
              
                s2+=arr[i+y][s];
                s++;
            }
        }
     
       sum=s1+s2;
        if(a<sum)
           a=sum;
         sum=0;s1=0;s2=0;
    t++;
    if(k%4==0)
    {
        y++;
        s=1;
        t=0;
    }
    
    }
     printf("%d",a);
    return 0;
}

