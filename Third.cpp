#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    int n,m, a[400][400],s,k;
    int sum2,sum[400], f;

    cin>>n;
    k=0;
f=0;
for(int i=0;i<=400;i++){
    sum[i]=0;
}
for(int i=1;i<=n;i++){
      for(int h=1;h<=n;h++){
            cin>>a[i][h];

            }

    }

for(int i=1;i<=n;i++){
      for(int h=1;h<=n;h++){

            if(i==1){
            if((i==1)&&(h==1)){
                if ((a[i][h]!=a[i][h+1]+a[i+1][h])){f=f+1;}
            }
            if((i==1)&&(h!=1)&&(h!=n)){
                if ((a[i][h]!=a[i][h+1]+a[i+1][h]+a[i][h-1])){f=f+1;}
            }
            if((i==1)&&(h==n)){
                if ((a[i][h]!=a[i][h-1]+a[i+1][h])){f=f+1;}
            }
            }

if(i!=1){
if(h==1){
if ((a[i][h]!=a[i][h+1]+a[i+1][h]+a[i-1][h])){f=f+1;}
}
if(h==n){
if ((a[i][h]!=a[i][h-1]+a[i+1][h]+a[i-1][h])){f=f+1;}
}
}
            if(i==n){
            if((i==n)&&(h==1)){
                if ((a[i][h]!=a[i][h+1]+a[i-1][h])){f=f+1;}
            }
            if((i==n)&&(h!=1)&&(h!=n)){
                if ((a[i][h]!=a[i][h+1]+a[i-1][h]+a[i][h-1])){f=f+1;}
            }
            if((i==n)&&(h==n)){
                if ((a[i][h]!=a[i][h-1]+a[i-1][h])){f=f+1;}
            }
            }

   if((i!=1)&&(i!=n)&&(h!=1)&&(h!=n)){
            if ((a[i][h]!=a[i][h+1]+a[i][h-1]+a[i+1][h]+a[i-1][h])){f=f+1;}

   }
}

    }



if (f>0){cout<<"NE";}
if (f ==0){cout<<"TAIP";}
    return 0;
}
