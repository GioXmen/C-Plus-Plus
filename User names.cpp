#include <stdio.h>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <math.h>
#include <vector>
#include <cstring>
using namespace std;

int main() {
    int k=0;
char s1[110],s2[110],sv[110];
cin>>s1>>s2;

int ilg1=strlen(s1);
int ilg2=strlen(s2);


if(ilg1<ilg2){cout<<"no"<<endl; goto E;}


if(ilg1>=8){

if(ilg1>ilg2){
if(ilg1-ilg2>1){cout<<"no"<<endl; goto E;}

int i=0;
for(int j=0; i<ilg1; j++, i++){

    if(s1[i]==s2[j]){sv[i]= s2[j];}
     else if(s1[i]!=s2[j]){sv[i]='*'; j--;}

}

}
if(ilg1==ilg2){
for(int i=0; i<ilg1; i++){
if(s1[i]!=s2[i]){sv[i]='*';}
else if(s1[i]==s2[i]){sv[i]=s2[i];}

}
}

for(int i=0; i<ilg1; i++){
if(s1[i]!=sv[i]){k++;}
        }

if(k>1){cout<<"no"<<endl; goto E;}
else if(k<=1){cout<<"yes"<<endl;goto E;}


}

for(int i=0; s1[i]; i++){
        if(s1[i]!=s2[i]){cout<<"no"<<endl;goto E;}
}

cout<<"yes"<<endl;

E:
    return 0;
}