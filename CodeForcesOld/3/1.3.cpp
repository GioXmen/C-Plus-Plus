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
    int n,m, a[200], d[200],s, mino;

    cin>>n;

s=1;
for(int i=1;i<=n;i++){
cin>>a[i];

}

for(int i=1;i<=n;i++){

if((i>1)&&(i!=n)){
if((a[i]>a[i-1])&&(a[i]>a[i+1])){

     if (a[i]>0){d[s]=a[i]; s=s+1;};

}
}
}
if(a[1]>0){
if (a[1]>a[2]){d[s]=a[1]; s=s+1;};
}
if(a[n]>0){
if (a[n]>a[n-1]){d[s]=a[n]; s=s+1;};
}
mino=d[1];
for(int i=1;i<s;i++){

        if (d[i]<mino){mino=d[i];};

}
if(s==1){cout<<"No"; goto E;};
cout<<mino;
E:
    return 0;
}
