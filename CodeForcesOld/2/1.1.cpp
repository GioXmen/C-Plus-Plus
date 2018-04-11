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
    int n,m, a[400][400],dini;
    double sum2,sum,s=0,k;

    cin>>n>>m>>k;
    sum =0;
dini=0;
for(int i=0;i<n;i++){
      for(int h=0;h<m;h++){
            cin>>a[i][h];
            if (s==0){dini=a[0][0];}
            if(i>k-1){
            if(dini<a[i][h]){dini=a[i][h];};
s=s+1;
            }

    }
}
cout<<dini;

    return 0;
}
