#include<iostream> 
using namespace std; 
  
unsigned long int catalan(unsigned int n) 
{ 
    unsigned long int c[n+1]; 
 
    c[0] = c[1] = 1; 
  
    for (int i=2; i<=n; i++) 
    { 
        c[i] = 0; 
        for (int j=0; j<i; j++) 
            c[i] += c[j] * c[i-j-1]; 
    } 
 
    return c[n]; 
} 
  
int main() 
{ 
    int s;
    cin>>s;
    cout << catalan(s-1) ; 
    return 0; 
} 
