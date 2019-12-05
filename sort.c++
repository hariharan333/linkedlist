#include <iostream>

using namespace std;
void sort(int *arr,int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
        if(arr[i]>arr[j])
        {
            temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
  int *arr,n,i;
  cin>>n;
  arr = new int(n);
  for(i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  sort(arr,n);
    return 0;
}
