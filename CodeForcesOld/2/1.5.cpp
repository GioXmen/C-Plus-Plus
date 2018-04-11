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
int n,a[10000],k,s = 0;
cin>>n;
for(int i=0;i<n;i++){

cin>>a[i];

}



int temp,tp = 1;
for(int i = 1;(i <= n) && tp; i++){

tp = 0;

for(int j=0; j < (n-1); j++){

if(a[j+1]<a[j]){

 temp = a[j];
 a[j] = a[j+1];
 a[j+1] = temp;
 tp = 1;

}
}
}



for(int i=0;i<n-2;++i){
k=i+2;

for(int j=i+1;j<n;++j){

  while((k<n)&&(a[i]+a[j]>a[k])){

    k=k+1;
    s=s+(k-j-1);
}

}
}

if(s==0){cout<<"NE";};
if(s>0){cout<<"TAIP";};



	return 0;
}
