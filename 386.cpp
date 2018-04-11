#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

int main()
{
long long int n,m1,m2,m3,trig=0, I=1, J=2, I1, J1, k1;
long long int t[10001];
    ifstream fr("injurious.in");
    ofstream fd("injurious.out");
    //ifstream fr("injurious - Copy.in");

fr>>n;

for(int i=1; i<=n;i++){
    fr>>t[i];
}

if(n<3){goto E;}
/*
for(int i=1; i<=n-2;i++){
for(int k=i+2; k<=n;k++){
for(int j=i+1; j<k;j++){

        if(((t[i]+t[k])==(t[j]*2))){m1=i; m2=j; m3=k; trig=1; goto E;}

}
}
}
*/

if(n<100){

    for(int k=3; k<=n;k++){
//cout<<"I "<<I<< "J "<<J<< "k "<<k<<endl;
        if((t[I]+t[k])==(t[J]*2)&&(I<J)&&(J<k)){m1=I; m2=J; m3=k; trig=1; goto E;}
        if ((k==n)&&(I>1)){
            I--;
            k=J;
        }
        if((k==n)&&(I==1)){
            J++;
            k=J;
            I=J-1;
        }
}
}
else{
for(int k=3; k<=n/2;k++){
//cout<<"I "<<I<< "J "<<J<< "k "<<k<<endl;
        if((t[I]+t[k])==(t[J]*2)&&(I<J)&&(J<k)){m1=I; m2=J; m3=k; trig=1; goto E;}

        I1=n-I;
        J1=n-J;
        k1=n-k;
//cout<<"I1 "<<I1<< "J1 "<<J1<< "k1 "<<k1<<endl;
        if((t[I1]+t[k1])==(t[J1]*2)&&(I1<J1)&&(J1<k1)){m1=I1; m2=J1; m3=k1; trig=1; goto E;}
        if ((k==n/2)&&(I>1)){
            I--;
            k=J;
        }
        if((k==n/2)&&(I==1)){
            J++;
            k=J;
            I=J-1;
        }
}
}

E:
    if(trig==1){
    fd<<"Yes"<<endl;
    fd<<m1<<" "<<m2<<" "<<m3;
    }
    if(trig==0){fd<<"No";}


    return 0;
}
