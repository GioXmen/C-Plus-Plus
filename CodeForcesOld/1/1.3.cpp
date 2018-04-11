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
    long long n,m, a[120],sum,s=0;


    cin>>n;


for(int i=1;i<=n;i++){

            cin>>a[i];


}

for(int i=1;i<=n;i++){

            if((a[i]==a[i+1])&&(a[i]==a[i+2])&&(a[i+1]==a[i+2])){s=s+1;};




}
if (s>0){cout<<"TAIP";};
if (s==0){cout<<"NE";};
    return 0;
}
