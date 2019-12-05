#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main()
{
    string str,s,arr,arr1;int n,m,i=0,k=0,flag=1,count=0;
    stack <char>t;
    getline(cin,str);
    stringstream x(str);
    while(getline(x,s,' '))
    {
        if(flag==1)
        {
        arr= s;
        n = arr.length();
        flag = 0;
        }
        else
        {
            arr1 = s;
            m = arr1.length();
        }
    }
    for(int l=0;l<n;l++)
    {
    for(int j=0;j<m;j++)
    {
        if(arr[l]==arr1[j])
        {
            count++;
        }
    }
    }
    if(count == n)
    {
        cout<<"anagram";
    }
    else
    {
        cout<<"not anagram";
    }
    return 0;
}

