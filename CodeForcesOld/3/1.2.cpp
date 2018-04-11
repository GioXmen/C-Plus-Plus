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
    long long n,m, a[200][200],dini, p=0;
    long long sum2,sum,s=0,k, auks;

    cin>>n>>m;
    sum =0;
dini=1000000;
for(int i=0;i<n;i++){
      for(int h=0;h<m;h++){
            cin>>a[i][h];
            //if (s==0){dini=a[0][0];}

            if(a[i][h]<dini){dini=a[i][h]; auks=h; p=p+1; };
s=s+1;


    }
}
//cout<<dini<<endl;
//if(p==0){auks=0;};

for(int i=0;i<n;i++){
      for(int h=0;h<m;h++){

            if (h==auks){sum=sum+a[i][h];}





    }
}

cout<<sum;

    return 0;
}
