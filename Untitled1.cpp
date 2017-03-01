#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long int a[10000];
void Find(long int L,long int R,long int A[100000])
{
    long int sum = 0;
    long int i=L;
    while(i<=R)
    {
        sum+=A[i];
       if(sum<0)
        sum*=-1;
      i++;
     }
     cout<<sum<<"\n";
    
    /*if(sum%2==0)
       cout<<"Even\n";
    else
       cout<<"Odd\n";*/
}
 
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long int n,q;
    cin>>n>>q;
   
    for(long int i=0;i<=n;i++)
        cin>>a[i];
    for(long int j=0;j<q;j++){
        long int l,r;
        cin>>l>>r;
     
          Find(l,r,a);
      
    }
    return 0;
}

