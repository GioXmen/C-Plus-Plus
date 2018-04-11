#include <iostream>
#include <fstream>
#include <iomanip>
#include <fstream>

using namespace std;

ifstream fd("duom.txt");
ofstream fr("ats.txt", ios::out | ios::trunc);

void pradzia(int, int , int []);
void pabaiga(int, int , int []);
void spradzia(int, int , int []);
void spabaiga(int, int , int []);

int main()
{
int n,v,e;
setlocale(LC_ALL, "Lithuanian");

cout<<"Kok� veiksm� atliksim? �veskite skaitmen� kuris atitinka pageidaujam� veiksm�"<<endl;
cout<<"�terpimas � prad�i� - 1 | �terpimas � pabaig� - 2 "<<endl;
cout<<"Pa�alint i� prad�ios - 3 | Pa�alint i� pabaigos - 4 "<<endl;
cin>>v;
cout<<"Kiek yra deke elementu?"<<endl;
cin>>n;
if(v<3){
cout<<"Koki elementa naudosim?"<<endl;
cin>>e;
}

int dekas[n];

fr<<"Formuojamas dekas i� duotos aib�s"<<endl;
for(int i=1;i<=n;i++){
    fd>>dekas[i];
    for(int h=1; h<=i;h++){
    fr<<dekas[h]<<"  ";
    }
    fr<<endl;
}

if(v==1){pradzia(n,e,dekas);}
if(v==2){pabaiga(n,e,dekas);}
if(v==3){spradzia(n,e,dekas);}
if(v==4){spabaiga(n,e,dekas);}

    return 0;
}

void pradzia(int n,int e, int dekas[]){

for(int i=n+1;i>=1;i--){
    dekas[i]=dekas[i-1];

}
n=n+1;
fr<<"�terpiam nauj� element� � prad�i�"<<endl;
dekas[1]=e;
for(int h=1; h<=n;h++){
    fr<<dekas[h]<<"  ";
    }
    fr<<endl;


}

void pabaiga(int n,int e, int dekas[]){

for(int i=0;i<n;i++){
    dekas[i]=dekas[i+1];

}
fr<<"�terpiam nauj� � pabaig�"<<endl;
dekas[n]=e;
for(int h=0; h<=n;h++){
    fr<<dekas[h]<<"  ";
    }
    fr<<endl;


}
void spabaiga(int n,int e, int dekas[]){

n=n-1;


fr<<"Trinam element� i� pabaigos"<<endl;
for(int h=1; h<=n;h++){
    fr<<dekas[h]<<"  ";
    }
    fr<<endl;


}

void spradzia(int n,int e, int dekas[]){

for(int i=0;i<n;i++){
    dekas[i]=dekas[i+1];

}
n=n-1;

fr<<"Trinam element� i� prad�ios"<<endl;
for(int h=1; h<=n;h++){
    fr<<dekas[h]<<"  ";
    }
    fr<<endl;


}
