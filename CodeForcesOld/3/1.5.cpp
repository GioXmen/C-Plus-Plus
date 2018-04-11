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
    long long n,k, a[10000],p=1, pl=2;
    int z;

cin>>n>>k;
if (n%2!=0){z=(n+1)/2;}
else z=n/2;

if(k<=z){
for(int i=1; i<k;i++){p=p+2;}
cout<<p;
}
if(k>z){
for(int i=1; i<k-z;i++){pl=pl+2;}
cout<<pl;
}

    return 0;
}

