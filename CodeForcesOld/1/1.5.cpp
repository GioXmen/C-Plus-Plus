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
    long long n,m, a[200];
    long long s,z,k;
    double sum;

    cin>>n;
if (n<6){cout<<0; goto E;}
if (n%2!=0){cout<<0; goto E;}

    a[1]=0;
    a[2]=0;
    a[3]=0;
    a[4]=0;

z=(n/2)-1;
k=n/4;
    a[1]=1;
    a[2]=1;
    a[3]=z;
    a[4]=z;
s=1;
    while(a[3]>k){
        a[2]=a[2]+1;
        a[3]=a[3]-1;
//cout<<a[2]<<"  "<<a[3]<<endl;
        if((a[2]!=a[3])&&(a[2]<a[3])){s=s+1;};

    }
cout<<s;
E:
    return 0;
}
