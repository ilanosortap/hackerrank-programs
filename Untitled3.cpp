#include<cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool check(long long int num, long long int x,long long int y,long long int z) {
  while(num) {
    long long int digit = num % 10;
    if (digit == 4 && x) x--;
    else if (digit == 5 && y) y--;
    else if (digit == 6 && z) z--;
    else return false;
    num /= 10;
  }
  return true;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int x,y,z;
    cin>>x>>y>>z;
    long long int sum = 0;long long int a,b,c,p,q,r,n;
    a=(pow(z+1,10)-1)/9;
    p=6*a;
    b=(pow(y+1,10)-1)/9;
    q=5*b;
    c=(pow(x+1,10)-1)/9;
    r=4*c;
    n=a*(pow(y+x,10))+b*(pow(x,10))+c;
    
  for (long long int i = 4; i <= n; i++) {
    if (check(i, x, y, z)) {
      
      sum+=i;
    }
  }
  cout<<"sum = ";
  cout <<sum%((long long int)pow(10,9)+7)<< endl;

    return 0;
}
