#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

int main()
{
long long int n, n1, r, r1,uj, ujd=0, trig=0, sum=0;
long long int t[3000][5], R[3000], du[2];
    ifstream fr("domino.in");
    ofstream fd("domino.out");
    //ifstream fr("injurious - Copy.in");

fr>>n;
fr>>r;
r1=r*2;
for(int i=1; i<=n;i++){
    fr>>t[i][1];
    fr>>t[i][2];
    sum=sum+t[i][1]+t[i][2];
    //cout<<t[i][1]<<"   "<<t[i][2]<<endl;
}
for(int i=1; i<=r1;i++){
    fr>>R[i];
}

if((n==1)&&(t[1][1]==R[1])||(t[1][2]==R[r1])){
    fd<<"-1";
    return 0;
}

cout<<n<<"  ";
if((n==2)&&(t[1][1]==t[1][2])&&(t[2][1]==t[2][2])&&(((t[1][1]==R[1])&&(t[2][1]!=R[1])) || ((t[1][2]==R[r1])&& (t[2][2]!=R[r1])))       &&(((t[2][1]==R[1])&&(t[1][1]!=R[1]))||((t[2][2]==R[r1])&&(t[1][2]!=R[1])))){
    fd<<"-1";
    return 0;
}

if((R[1]==R[r1])&&(n==2)&&(t[1][1]==t[1][2])&&(t[2][1]==t[2][2])&&((t[1][1]==R[1])||(t[1][2]==R[r1]))&&((t[2][1]==R[1])||(t[2][2]==R[r1])&&(t[1][2]==R[1]))){
    fd<<"-1";
    return 0;
}



du[1]=0;
du[2]=0;
for(int i=1; i<=n;i++){
        trig=0;
if((t[i][1]==R[1])||(t[i][1]==R[r1])||(t[i][2]==R[1])||(t[i][2]==R[r1])){
        uj=t[i][1]+t[i][2];
    if(ujd<uj){ujd=uj;}


    if(t[i][1]==t[i][2]){
            //cout<<uj<<endl;
        if(uj>du[1]){
                if((du[1]>du[2])){du[2]=du[1];}
                du[1]=uj;
        }
else if(uj>du[2]){du[2]=uj;}

    }

}



}
//cout<<ujd<<"  "<< du[1]<<"  "<<du[2]<<endl;
if(ujd>du[1]+du[2]){sum=sum-ujd;}else sum=sum-du[1]-du[2];
fd<<sum;


    return 0;
}
