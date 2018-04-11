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
    int n, m,d=0, v=0;

    cin>>n>>m;

    while(n>0){
        if(n>0){d=d+1; n=n-1;}
        v=v+1;
        if(v==m){n=n+1; v=0;}

    }

    cout<<d;

    return 0;
}


long long int n,k=1,v,max,sum=0;
    double vid;
    int A[101],B[101];
    cin>>n;
    if(n>10||n<1)
    {

        return 0;
    }

    for (int i = 1; i<=n;i++)
    {
            cin>>A[i];
    }

    for (int i = 1; i<=n;i++)
    {
            sum+=A[i];

    }
    vid=(double)sum/n;
            //cout <<vid;
            sum=0;
            for (int i = 1; i<=n;i++)
    {
            if(A[i]>0 && A[i]<vid)
            {
               sum+=A[i] ;
            }

    }
    if (sum==0)
    {
        cout <<"No";
        return 0;
    }
    cout <<sum;
