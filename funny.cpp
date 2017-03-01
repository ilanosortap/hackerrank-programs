#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;
void checkfunny(char s[10000]){
   int n=0;int flag=0;
  for(int i=0;s[i]!='\0';i++)
      n++;
 char r[10000];
   strcpy(r,s);
    int mid=n/2;
    for(int i=0;i<mid;i++)
    {char t=r[i]; 
     r[i]=r[n-i-1];
     r[n-i-1]=t;
    }  
 for(int i=1;i<n;i++){
  int a= s[i]-s[i-1];
  int b= r[i]-r[i-1];
    if(a<0)
     a=abs(a); 
  
    if(b<0)
     b=abs(b); 
  
   if(a!=b)
     {flag=1;
     break;}
 }
  if(flag==1)
      cout<<"Not Funny\n";
  else
      cout<<"Funny\n";
   
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
     for(int i=0;i<t;i++){ 
         char s[10000];
         cin>>s;
      checkfunny(s);
      
     }
    return 0;
}

