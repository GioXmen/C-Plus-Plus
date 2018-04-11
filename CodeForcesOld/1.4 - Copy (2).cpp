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
long long pirmas[400],antras[400];
long long n,sum=0;
double vid;

    cin>>n;

    if(n>10||n<1){goto E;}

    for (int i = 1; i<=n;i++){cin>>pirmas[i];}

    for (int i = 1; i<=n;i++){sum=sum+pirmas[i];}
    vid=(double)sum/n;

            sum=0;
    for (int i = 1; i<=n;i++){
    if(pirmas[i]>0 && pirmas[i]<vid){sum=sum+pirmas[i];}
    }
    if (sum==0){cout <<"No";goto E;}
    cout <<sum;
E:
    return 0;
}






