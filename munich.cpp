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
double n,m,k,tp,tpm=0,tpn,tb;
double p1,p2,p3;
double q1,q2,q3;
double k1,k2,k3,k4=10000,best,best2,best3;
double temp,temp2;


cin>>m>>n>>k;
cin>>p1>>p2>>p3;
cin>>q1>>q2>>q3;
tp=m+n;

//1day
k1=(m*p1)+(n*p1);
k2=(m*p1)+(n*p2);

if(k1>k2){best=k2*k;}else best=k1*k;

//cout<<k1*k<<"  "<<k2*k<<endl;



tpn=n;

if(m>=5){
temp=trunc(m/5);

k3=p3*temp;

k1=((m-temp*5)*p1)+(n*p1);
k2=((m-temp*5)*p1)+(n*p2);

if(k1>k2){tb=k2*k;}else tb=k1*k;
//cout<<k1<<"  "<<k2<<endl;
//cout<<best<<endl;

tpm=(m-(5*temp))*2;

if((tpm+tpn)<10){k4=p3*k;} // flag 11 childern and 0 adult
if(tb>k4){tb=(k3*k)+k4;}

if(tb<best){best=tb;}
}

//tpm=n+(temp*2);
//cout<<tpm<<"  "<<tpn<<endl;

if((tpm+tpn)>=10){
        tpn=tpn-(10-tpm);

        tpm=0;


        k3=k3+p3;

        tpm=tpn;


//cout<<k3<<endl;

while(tpm>0){
    if(tpm>=10){k3=k3+p3; tpm=tpm-10;}
    else {
if(p3>tpm*p2){k3=k3+(tpm*p2);}else k3=k3+p3;

        tpm=0;
    }
}


} else if((tpm+tpn)<10){

    tpm=tpm/2;
k1=(tpm*p1)+(tpn*p1);
k2=(tpm*p1)+(tpn*p2);

//cout<<k1<<"  "<<k2<<endl;

if(k1>k2){best2=k2;}else best2=k1;
k3=k3+best2;
}

if(best>k3*k){best=k3*k;}
cout<<best<<endl;




//3day


k3=0;
k1=(m*q1)+(n*q1);
k2=(m*q1)+(n*q2);

if(k1>k2){best3=k2;}else best3=k1;

cout<<k1<<"  "<<k2<<endl;



tpn=n;

if(m>=5){
temp=trunc(m/5);

k3=q3*temp;

k1=((m-temp*5)*q1)+(n*q1);
k2=((m-temp*5)*q1)+(n*q2);

if(k1>k2){tb=k2;}else tb=k1;

cout<<k1<<"  "<<k2<<endl;

tpm=(m-(5*temp))*2;

if((tpm+tpn)<10){k4=q3;} // flag 11 childern and 0 adult
if(tb>k4){tb=k3+k4;}

if(tb<best3){best3=tb;}
}
cout<<tb<<endl;

//tpm=n+(temp*2);
//cout<<tpm<<"  "<<tpn<<endl;

if((tpm+tpn)>=10){
        tpn=tpn-(10-tpm);

        tpm=0;


        k3=k3+q3;

        tpm=tpn;


//cout<<k3<<endl;

while(tpm>0){
    if(tpm>=10){k3=k3+q3; tpm=tpm-10;}
    else {
if(q3>tpm*q2){k3=k3+(tpm*q2);}else k3=k3+q3;

        tpm=0;
    }
}


} else if((tpm+tpn)<10){

    tpm=tpm/2;
k1=(tpm*q1)+(tpn*q1);
k2=(tpm*q1)+(tpn*q2);

//cout<<k1<<"  "<<k2<<endl;

if(k1>k2){best2=k2;}else best2=k1;
k3=k3+best2;
}

if(best3>k3){best3=k3;}
cout<<best3<<endl;


    return 0;
}
