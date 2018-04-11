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
    int n,m, a[400],dini;
    double sum2,sum,s=0,k;

    cin>>n;
    sum =0;
dini=-100;
for(int i=1;i<=n;i++){

            cin>>a[i];
          if((a[i]<-9)&&(a[i]>-100)){
            if(dini<a[i]){dini=a[i];}
          }


}
if(dini==-100){cout<<"No";}
if(dini!=-100){cout<<dini;}
    return 0;
}
