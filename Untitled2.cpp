#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    unsigned long long int n,q;
    cin>>n>>q;
    unsigned long long int A[n];
    for(unsigned long long int i=0;i<n;i++){
        A[i]=0;
    }
     for(unsigned long long int i=0;i<q;i++){
         unsigned long long int t,x,y;
         cin>>t>>x>>y;
        if(t==1){
            unsigned long long int m=1;
            for(unsigned long long int j=x;j<=y;j++){
               A[j]+=m*(m+1);
                m++;
            }}
         if(t==2){
             unsigned long long int s=0;
             for(unsigned long long int j=x;j<=y;j++){
                 s+=A[j];
             }
             cout<<s<<"\n";
         }
        }
     
    return 0;
}

