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
    long long n,m, a[200][200];
    long long s=0,k,z;
    double sum;

    cin>>n;
    sum =0;

for(int i=1;i<=n;i++){
      for(int h=1;h<=n;h++){
            cin>>a[i][h];


    }


}
k=1;
z=n;
for(int i=1;i<=n;i++){
      for(int h=1;h<=n;h++){
            if((h>k)&&(h<z)){

            sum=sum+a[i][h];


            s=s+1;
            }

    }

k=k+1;
z=z-1;
}

sum=sum/s;

cout<<fixed<<setprecision(2)<<sum;
    return 0;
}
