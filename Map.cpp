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
    long long x,s[10],s2[10],s3[10],maxi, st=0,s2t=0,tmp,h;
    unsigned long long n;
    cin>>x>>n;
tmp=0;
h=n-1;
if(n==1){h=1;}

//if(n>15){n=15;} //xxxxxxx


if(n==1){cout<<x;}

    s[4] = x%10;
    x =x/ 10;
    s[3] = x%10;
    x =x/10;
    s[2] = x%10;
    x =x/10;
    s[1] = x%10;
    x =x/10;


bool baigta = false;
while( !baigta )
{

int temp;
for(int i = 1; i <= 4; i++){
for (int j=0; j < 4; j++){
if (s[j+1] > s[j]){

    temp = s[j];
    s[j] = s[j+1];
    s[j+1] = temp;

}
}
}

s2[1]=s[1];
s2[2]=s[2];
s2[3]=s[3];
s2[4]=s[4];


for(int i = 4; i >=1; i--){
for (int j=4; j >0; j--){
if (s[j+1] < s[j]){
    temp = s[j];
    s[j] = s[j+1];
    s[j+1] = temp;

}
}
}


st=0;
s2t=0;
int i=1;
while(i!=4){

if (s[i]>s2[i]){st=st+1; i=4;}
else if (s[i]<s2[i]){s2t=s2t+1;i=4;}
else if (s[i]==s2[i]){i=i+1;}

}

if(s2t>0){

int mint=0;

for(int i=4; i>=1;i--){

s3[i]=s2[i]-s[i]-mint;
mint=0;

if (s3[i]<0){mint=1; s3[i]=s3[i]+10;}


}
}

s[1]=s3[1];
s[2]=s3[2];
s[3]=s3[3];
s[4]=s3[4];



tmp=tmp+1;
if( tmp==h ){baigta = true;}
if(( s[1]==6 )&&(s[2]==1)&&(s[3]==7)&&(s[4]==4)){baigta = true;}

}

if(n!=1){
cout<<s[1];
cout<<s[2];
cout<<s[3];
cout<<s[4];
}

    return 0;
}
