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

    cin>>n>>m;
    sum =0;

for(int i=1;i<=n;i++){
      for(int h=1;h<=m;h++){
            cin>>a[i][h];
           if (i==1){sum=sum+a[i][h];}
           if((i>1)&&(h==m)){

sum=sum+a[i][h];
            }

    }
}
cout<<sum;

    return 0;
}
