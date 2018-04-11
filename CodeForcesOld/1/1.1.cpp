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
    int n,m, a[400][400],mini;
    double sum2,sum,s=0,k;

    cin>>n>>m>>k;
    sum =0;
mini=0;
for(int i=0;i<n;i++){
      for(int h=0;h<m;h++){
            cin>>a[i][h];
            if (s==0){mini=a[0][0];}
            if(i<k-1){
            if(mini>a[i][h]){mini=a[i][h];};
s=s+1;
            }

    }
}
cout<<mini;

    return 0;
}
