#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <math.h>

using namespace std;

struct ypat{
string rasti[100];
string pakeisti[100];
string kryptis[100];
string nbusena[100];
};
ypat A[500];

int main()
{
    bool baigta = false;
while( !baigta )
{
    int galvute,s[1000],busena,so=0, bus=0, eil=0, pereilutes=0,random,trig=0;
    string juosta,juostreiksm,temp;
    string txt;
    char naujreiks;


    cout<<"**************************************************************************"<<endl;
 cout<<"*        Ernesto Lobacevskio tiuringo masina C++ pavidale           *"<<endl;
 cout<<"**************************************************************************"<<endl;
cin>>txt;
 cin.ignore();

//ifstream fr("1.txt");
//ifstream fr("1Pataisytas.txt");
//ifstream fr("2.txt");
//ifstream fr("3.txt");
//ifstream fr("4.txt");

ifstream fr(txt.c_str());

    ofstream fd("ats.txt", ios::out | ios::trunc);

fr>>galvute;
fr>>juosta;

for(int i=0;i<1000;i++){
        s[i]=0;
}

while(!fr.eof()){
fr>>busena;
fr>>A[busena].rasti[s[busena]]>>A[busena].pakeisti[s[busena]]>>A[busena].kryptis[s[busena]]>>A[busena].nbusena[s[busena]];
s[busena]=s[busena]+1;
eil=eil+1;
}



while((galvute>-1)&&(galvute<juosta.length())){



stringstream ss;
ss << juosta[galvute-1];
ss >> juostreiksm;

if(juostreiksm=="*"){
    for(int i=0; i<=s[bus];i++){
        if((A[bus].rasti[i]=="*")&&(A[bus].pakeisti[i]=="*")){trig=1; so=i;}

    }
}

temp=A[bus].pakeisti[so];

if ((A[bus].rasti[so]==juostreiksm)||(juostreiksm=="*")||(A[bus].rasti[so]=="*")){

if((A[bus].pakeisti[so]=="*")&&(juostreiksm=="*")){temp="*";}
if((A[bus].pakeisti[so]=="*")&&(juostreiksm!="*")){temp=juostreiksm;}

if(trig==1){temp="*";}



stringstream ss;
ss << temp;
ss >> naujreiks;
juosta[galvute-1]=naujreiks;

if(A[bus].kryptis[so]!="*"){
if (A[bus].kryptis[so]=="R"){galvute=galvute+1;}
if (A[bus].kryptis[so]=="L"){galvute=galvute-1;}
}
if(A[bus].nbusena[so]=="X"){goto E;}
//cout<<galvute<<"  ";
//cout<<juosta<<"  "<<bus<<"  "<<so<<"  "<<A[bus].rasti[so]<<"  "<<A[bus].pakeisti[so]<<endl;
cout<<juosta<<endl;
fd<<juosta<<endl;

stringstream sa(A[bus].nbusena[so]);
sa>>bus;

pereilutes=0;
so=0;
} else if (A[bus].rasti[so]!=juostreiksm){so=so+1;}

//if (so>s[bus]){so=0;}

pereilutes=pereilutes+1;

if(pereilutes>eil*2){goto E;}


trig=0;
}
E:



       //loopas i pradzia//
char tempChar;
    cout<<" "<<endl;
	cout << "Ar norite grizti i pradzia ir atlikti dar viena veiksma? [Y/N]: ";
	cin >> tempChar;

		if( tempChar == 'N' || tempChar == 'n' ){
			baigta = true;
    cout<<" "<<endl;


}

}

    return 0;
}
