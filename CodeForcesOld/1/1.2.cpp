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
    long long n,m, a[120][120],sum;


    cin>>n>>m;
    sum =0;
    if((n>1)&&(m>1)){
for(int i=1;i<=n;i++){
      for(int h=1;h<=m;h++){
            cin>>a[i][h];

    }
}
sum=a[1][1]*a[1][m]*a[n][1]*a[n][m];
cout<<sum;
    }
    if((n==1)&&(m>1)){
        for(int i=1;i<=n;i++){
      for(int h=1;h<=m;h++){
            cin>>a[i][h];

    }
}
sum=a[1][1]*a[1][m];
cout<<sum;

    }

        if((m==1)&&(n>1)){
        for(int i=1;i<=n;i++){
      for(int h=1;h<=m;h++){
            cin>>a[i][h];

    }
}
sum=a[1][1]*a[n][1];
cout<<sum;

    }

            if((m==1)&&(n==1)){

            cin>>a[1][1];




cout<<a[1][1];

    }

    return 0;
}
