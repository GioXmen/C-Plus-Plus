#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <string.h>

using namespace std;

int main ()
{
 setlocale(LC_ALL, "Lithuanian");
 int n, ns , h,dal[10],d[10],p,s, z, skaitm[10], g[100];
 double skai,  dx, sk2, ans, temp, sk1 ;
 string sk, hx;

bool baigta = false;
while( !baigta )
{
 cout<<"**************************************************************************"<<endl;
 cout<<"*        Ernesto Lobacevskio skaiciavimo sistemos C++ pavidale           *"<<endl;
 cout<<"**************************************************************************"<<endl;
 cout<<" "<<endl;
 cout<<"Skaitmenu limitas pries ir po kableli yra 8. Kai kurios konvertacijos veikia ir su 9 arba retu atveju su 10 skaitmenu "<<endl;
 cout<<"Sesioliktainës skaitmenø limitas dar þemesnis "<<endl;
 cout<<"**********************"<<endl;
 cout<<"*  Iveskite skaiciu  *"<<endl;
 cout<<"**********************"<<endl;
 cin>>sk;
 cout<<"Koks tai skaicius? 2 - dvejetainis, 8 - astuntainis 10 - desimtainis ar 16 - sesioliktainis?"<<endl;
 cout<<"Iveskite skaiciu 2, 8, 10 arba 16"<<endl;
 cin>>n;
 cout<<"I kuria sistema versti?"<<endl;
 cout<<"Iveskite skaiciu 2, 8, 10 arba 16"<<endl;
 cin>>ns;
 cout<<" "<<endl;


if ((n == 10)&&(ns==8)){


// atskiriam string nuo kablelio ir gaunam du string
stringstream ss(sk);
string num[10];
int i=1;
while( getline( ss, num[i], '.' ) ) {
    i=i+1;
}


//verciam abu string i int
stringstream(num[1]) >> dal[1];
stringstream(num[2]) >> dal[2]; //neveikia :(



// padarom kad liekanos masyve butu visi sk nuliai arba koks kitas sk
for(i=1; i<10; i++){
d[i] = 69;
}



p=9;// 9 nes turi but daugiau uz 8 kad veiktu pirmas while
i=1;
while(p>ns){

//pirma karta naudojas ivesta sk o poto jau pagal loopa
if (i==1){
d[i]= dal[1] % ns;
p= dal[1]/ns;
i=i+1;

}

else {
d[i]= p % ns;
p= p/ns;
i=i+1;
}
//paskutini sk irgi dameta
if (p<ns){
    d[i]=p;
}

}
//ziuri kiek skaitmenu yra
z=0;
for(i=1; i<10; i++){
 if (d[i] != 69){
    z=z+1;
 }
}

cout<<"Atsakymas :";

//Deda atvirksciai
for(i=z+1; i>1; i--){
 d[z]=d[i-1];


cout<<d[z];  // metam sveika atsakyma

}


cout<<","; //metam kableli

temp=dal[2];

// skaiciuojam ilgi
 int skaitmenu = 0;
    if (dal[2] < 0) skaitmenu = 1;
    while (dal[2]) {
        dal[2] /= 10;
        skaitmenu++;
    }

// ieskom ilgi
sk2=temp;
for(i=1; i<skaitmenu+1;i++){
sk2=sk2/10;

}


for(i=1; i<9;i++){

        ans=sk2*ns;
        //paima pirma skaitmeni
        g[i] = ans;
        while(g[i] >= 10){
        g[i] /= 10;
        }
        sk2=ans-g[i];


        cout<<g[i];// metam atsakyma po nulio
    }




}
else if ((n == 10)&&(ns==16)){
cout<<"Atsakymas :";

// atskiriam string nuo kablelio ir gaunam du string
stringstream ss(sk);
string num[10];
int i=1;
while( getline( ss, num[i], '.' ) ) {
    i=i+1;
}


//verciam abu string i int
stringstream(num[1]) >> dal[1];
stringstream(num[2]) >> dal[2];


stringstream skai;
   skai << n ;
   string str3 = skai.str();
// padarom kad liekanos masyve butu visi sk nuliai arba koks kitas sk
for(i=1; i<10; i++){
d[i] = 69;
}


p=17;// 17 nes turi but daugiau uz 16 kad veiktu pirmas while
i=1;
while(p>ns){

//pirma karta naudojas ivesta sk o poto jau pagal loopa
if (i==1){
d[i]= dal[1] % ns;
p= dal[1]/ns;
i=i+1;

}

else {
d[i]= p % ns;
p= p/ns;
i=i+1;
}
//paskutini sk irgi dameta
if (p<ns){
    d[i]=p;
}

}
//ziuri kiek skaitmenu yra
z=0;
for(i=1; i<10; i++){
 if (d[i] != 69){
    z=z+1;
 }
}

//Deda atvirksciai
for(i=z+1; i>1; i--){
 d[z]=d[i-1];

if (d[z]<9) cout<<d[z]; // metam sveika atsakyma

if (d[z]>9) // jei sk daugiau uz 9 tai pries metant atsakyma keiciam skaicius i raides
    if (d[z]==10) {
    hx = "A";
    cout<<hx;}
else if (d[z]==11){
    hx = "B";
    cout<<hx;}      // priskiriam raides prie skaiciu
else if (d[z]==12){
    hx = "C";
    cout<<hx;}
else if (d[z]==13){
    hx = "D";
    cout<<hx;}
else if (d[z]==14){
    hx = "E";
    cout<<hx;}
else if (d[z]==15){
    hx = "F";
    cout<<hx;}



z--;
}


cout<<","; //metam kableli

temp=dal[2];

// skaiciuojam ilgi
 int skaitmenu = 0;
    if (dal[2] < 0) skaitmenu = 1;
    while (dal[2]) {
        dal[2] /= 10;
        skaitmenu++;
    }

// verciam skaiciu xxxxx i 0.xxxxxx
sk2=temp;
for(i=1; i<skaitmenu+1;i++){
sk2=sk2/10;

}


for(i=1; i<9;i++){

        ans=sk2*ns; // daugina is sistemos sk, pvz 16-taine tai 16
        if (ans > 10){ //jei daugiau uz 10 tai ims 2 skaitmenis, jei ne tai eis prie funkcijos kitos kuri ima tik viena
        g[i] = ans;
        while(g[i] >= 100){
        g[i] /= 100;
        }


        }
        //paima pirma skaitmeni
        else {
        g[i] = ans;
        while(g[i] >= 10){
        g[i] /= 10;
        }

        }
        sk2=ans-g[i];

if (g[i]<9) cout<<g[i];// metam atsakyma po kablelio

if (g[i]>9) // jei daugiau uz 9 tai priskiriam raide
 if (g[i]==10) {
    hx = "A";
    cout<<hx;}
else if (g[i]==11){
    hx = "B";
    cout<<hx;}
else if (g[i]==12){
    hx = "C";
    cout<<hx;}
else if (g[i]==13){
    hx = "D";
    cout<<hx;}
else if (g[i]==14){
    hx = "E";
    cout<<hx;}
else if (g[i]==15){
    hx = "F";
    cout<<hx;}


    }
}
else if ((n == 8)&&(ns==2)){
cout<<"Atsakymas :";


// atskiriam string nuo kablelio ir gaunam du string
stringstream ss(sk);
string num[10];
int i=1;
while( getline( ss, num[i], '.' ) ) {
    i=i+1;
}

//verciam abu string i int
stringstream(num[1]) >> dal[1];
stringstream(num[2]) >> dal[2];


// priskiriam skaiciu masyve i kintama be masyvo kad lengviau dirbt butu

sk1=dal[1];
sk2=dal[2];

// skaiciuojam sveiko ilgi
 int skaitmenu1 = 0;
    if (dal[1] < 0) skaitmenu1 = 1;
    while (dal[1]) {
        dal[1] /= 10;
        skaitmenu1++;
    }


int p1;
int p2[1000];
int p2t;
int temp;
for(i=skaitmenu1; i>0; i--){

    if (i==skaitmenu1){
    temp = skaitmenu1-1;
      p1=sk1 / lround(pow(10, skaitmenu1-1)); // funkcija atskiria skaicius skaitmenimis , vercia i stringa ir poto jei jie atitinka x tai vercia i z, ir iskart meta rezultata ant ekrano
      p2[i]=p1;
    stringstream skai;
   skai << p2[i];
   string str = skai.str();

      if (str=="0") str="000";
      else if (str=="1") str="001";
      else if (str=="2") str="010";
      else if (str=="3") str="011";
      else if (str=="4") str="100";
      else if (str=="5") str="101";
      else if (str=="6") str="110";
      else if (str=="7") str="111";


      cout<<str;

    }                                         // yra else nes pirmam skaitmeniui nereikejo % , o kitiem reikia %
     else  {
            p2t=(sk1 / lround(pow(10, temp)));
            p2[i]=p2t % 10;
  stringstream skai;
   skai << p2[i];
   string str = skai.str();

      if (str=="0") str="000";
      else if (str=="1") str="001";
      else if (str=="2") str="010";
      else if (str=="3") str="011";
      else if (str=="4") str="100";
      else if (str=="5") str="101";
      else if (str=="6") str="110";
      else if (str=="7") str="111";


      cout<<str;

     }
      temp=temp-1;



}

cout<<".";

    // skaiciuojam po kablelio ilgi
 int skaitmenu2 = 0;
    if (dal[2] < 0) skaitmenu2 = 1;
    while (dal[2]) {
        dal[2] /= 10;
        skaitmenu2++;
    }

int p1k;
int p2k[1000];             // ta pati funkcija tik dabar po kablelio skaiciuoja ir daro ta pati
int p2tk;
int tempk;
for(i=skaitmenu2; i>0; i--){

    if (i==skaitmenu2){
    tempk = skaitmenu2-1;
      p1k=sk2 / lround(pow(10, skaitmenu2-1));
       p2k[i]=p1k;

stringstream skai;
   skai << p2k[i];
   string str = skai.str();

      if (str=="0") str="000";
      else if (str=="1") str="001";
      else if (str=="2") str="010";
      else if (str=="3") str="011";
      else if (str=="4") str="100";
      else if (str=="5") str="101";
      else if (str=="6") str="110";
      else if (str=="7") str="111";


      cout<<str;
    }
     else  {
            p2tk=(sk2 / lround(pow(10, tempk)));
            p2k[i]=p2tk % 10;
stringstream skai;
   skai << p2k[i];
   string str = skai.str();

      if (str=="0") str="000";
      else if (str=="1") str="001";
      else if (str=="2") str="010";
      else if (str=="3") str="011";
      else if (str=="4") str="100";
      else if (str=="5") str="101";
      else if (str=="6") str="110";
      else if (str=="7") str="111";


      cout<<str;

     }
      tempk=tempk-1;

}



}
else if ((n == 16)&&(ns==2)){
cout<<"Atsakymas :";

stringstream ss(sk);
string num[10];
int i=1;
while( getline( ss, num[i], '.' ) ) { // atskiriam sveika nuo nesveikos dalies ir darom i du skaicius
    i=i+1;
}

// priskiriam skaiciu masyve i kintama be masyvo kad lengviau dirbt butu
string sep1;
string sep2;

sep1 = num[1];
sep2 = num[2];





for(i=0; i< sep1.length(); i++){




if (sep1[i]=='0') cout<<"0000";
      else if (sep1[i]=='1') cout<<"0001";
      else if (sep1[i]=='2') cout<<"0010";
      else if (sep1[i]=='3') cout<<"0011"; // jei stringo characteris x atitinka y, tai ismetama z reiksme ant ekrano
      else if (sep1[i]=='4') cout<<"0100";
      else if (sep1[i]=='5') cout<<"0101";
      else if (sep1[i]=='6') cout<<"0110";
      else if (sep1[i]=='7') cout<<"0111";
      else if (sep1[i]=='8') cout<<"1000";
      else if (sep1[i]=='9') cout<<"1001";
      else if (sep1[i]=='A') cout<<"1010";
      else if (sep1[i]=='B') cout<<"1011";
      else if (sep1[i]=='C') cout<<"1100";
      else if (sep1[i]=='D') cout<<"1101";
      else if (sep1[i]=='E') cout<<"1110";
      else if (sep1[i]=='F') cout<<"1111";


}
cout<<"."; // pereinam prie skaiciavimo po kablelio

for(i=0; i< sep2.length(); i++){
if (sep2[i]=='0') cout<<"0000";
      else if (sep2[i]=='1') cout<<"0001";
      else if (sep2[i]=='2') cout<<"0010";
      else if (sep2[i]=='3') cout<<"0011";
      else if (sep2[i]=='4') cout<<"0100";
      else if (sep2[i]=='5') cout<<"0101";
      else if (sep2[i]=='6') cout<<"0110"; // jei stringo characteris x atitinka y, tai ismetama z reiksme ant ekrano
      else if (sep2[i]=='7') cout<<"0111";
      else if (sep2[i]=='8') cout<<"1000";
      else if (sep2[i]=='9') cout<<"1001";
      else if (sep2[i]=='A') cout<<"1010";
      else if (sep2[i]=='B') cout<<"1011";
      else if (sep2[i]=='C') cout<<"1100";
      else if (sep2[i]=='D') cout<<"1101";
      else if (sep2[i]=='E') cout<<"1110";
      else if (sep2[i]=='F') cout<<"1111";

}


}
else if ((n == 2)&&(ns==8)){

// atskiriam string nuo kablelio ir gaunam du string
stringstream ss(sk);
string num[10];
int i=1;
while( getline( ss, num[i], '.' ) ) {
    i=i+1;
}


//verciam abu string i int
stringstream(num[1]) >> dal[1];
stringstream(num[2]) >> dal[2];


//kad butu lengviau dirbti priskiriam kintamiem be masyvo
sk1=dal[1];
sk2=dal[2];

// skaiciuojam sveiko ilgi
 int skaitmenu1 = 0;
    if (dal[1] < 0) skaitmenu1 = 1;
    while (dal[1]) {
        dal[1] /= 10;
        skaitmenu1++;
    }



int p1;
int p2[1000];
int p2t;

// padarom masyve butu visi sk nuliai arba koks kitas sk
for(i=0; i<40; i++){
p2[i] = 696788765;
}


for(i=skaitmenu1; i>0; i--){

    if (i==skaitmenu1){
    temp = skaitmenu1-1;
      p1=sk1 / lround(pow(10, skaitmenu1-1));


      p2[i]=p1;

    }
     else  {
            p2t=(sk1 / lround(pow(10, temp)));// gaunam atskirus skaitmenis


            p2[i]=p2t % 10;

     }
      temp=temp-1;
}


    // skaiciuojam po kablelio ilgi
 int skaitmenu2 = 0;
    if (dal[2] < 0) skaitmenu2 = 1;
    while (dal[2]) {
        dal[2] /= 10;
        skaitmenu2++;
    }

int p1k;
int p2k[1000];
int p2tk;
int tempk;


// padarom masyve butu visi sk nuliai arba koks kitas sk
for(i=0; i<40; i++){
p2k[i] = 696788765;
}

for(i=skaitmenu2; i>0; i--){

    if (i==skaitmenu2){
    tempk = skaitmenu2-1;
      p1k=sk2 / lround(pow(10, skaitmenu2-1));


       p2k[i]=p1k;
    }
     else  {
            p2tk=(sk2 / lround(pow(10, tempk)));  // darom ta pati ir po kablelio


            p2k[i]=p2tk % 10;

     }
      tempk=tempk-1;

}


int laips=0;
int sum=0;
z=skaitmenu1;
for (i=skaitmenu1-1; i>-1; i--){
    laips=p2[z]*lround(pow(2,i));   // kiekviena skaitmeni keliam laipsniu ir po kiekvieno ciklo mazinam laipsni
    sum=sum+laips;
    z=z-1;
}

double laips2=0;
double sum2=0;
z=skaitmenu2;
for (i=1; i<skaitmenu2+1; i++){
    laips2=p2k[z]*(1/pow(2,i)); // kiekviena skaitmeni po kablelio keliam laipsniu ir po kiekvieno ciklo didinam laipsni, nes kad gauti minus laipsni didesni ji reik dalint is vieno
    sum2=sum2+laips2;
    z=z-1;
}

//cout<<setprecision(15)<<sum+sum2;

double sumv;
sumv=sum+sum2;

string answ;
cout<<"Int/Double konvertavimas i stringa nera tikslus, todel jei pageidaujate tikslaus vertimo iveskite skaiciu"<<endl;
cout<<"kuri matote zvaigzdziu dezeje, jei norite ,kad butu automatiskai konvertuojamas netikslus skaicius , iveskite raide n "<<endl;
cout<<"**********************************"<<endl;
cout<<"*"<<setprecision(15)<< sumv <<"               *"<<endl;
cout<<"**********************************"<<endl;
cin>>answ;

if (answ[0]=='n'){


stringstream skai;
   skai << sumv;
   string str3 = skai.str();



stringstream ss3(str3);
string num2[10];
i=1;
while( getline( ss3, num2[i], '.' ) ) {
    i=i+1;
}


//verciam abu string i int
stringstream(num2[1]) >> dal[1];
stringstream(num2[2]) >> dal[2];


}

else {

 // atskiriam string nuo kablelio ir gaunam du string
stringstream ss3(answ);
string num2[10];
i=1;
while( getline( ss3, num2[i], '.' ) ) {
    i=i+1;
}


//verciam abu string i int
stringstream(num2[1]) >> dal[1];
stringstream(num2[2]) >> dal[2]; //neveikia :(



// padarom kad liekanos masyve butu visi sk nuliai arba koks kitas sk
for(i=1; i<10; i++){
d[i] = 69;
}



p=9;// 9 nes turi but daugiau uz 8 kad veiktu pirmas while
i=1;
while(p>ns){

//pirma karta naudojas ivesta sk o poto jau pagal loopa
if (i==1){
d[i]= dal[1] % ns;
p= dal[1]/ns;
i=i+1;

}

else {
d[i]= p % ns;
p= p/ns;
i=i+1;
}
//paskutini sk irgi dameta
if (p<ns){
    d[i]=p;
}

}
//ziuri kiek skaitmenu yra
z=0;
for(i=1; i<10; i++){
 if (d[i] != 69){
    z=z+1;
 }
}

cout<<"Atsakymas :";

//Deda atvirksciai
for(i=z+1; i>1; i--){
 d[z]=d[i-1];


cout<<d[z];  // metam sveika atsakyma

}


cout<<","; //metam kableli

temp=dal[2];

// skaiciuojam ilgi
 int skaitmenu = 0;
    if (dal[2] < 0) skaitmenu = 1;
    while (dal[2]) {
        dal[2] /= 10;
        skaitmenu++;
    }

// ieskom ilgi
sk2=temp;
for(i=1; i<skaitmenu+1;i++){
sk2=sk2/10;

}


for(i=1; i<9;i++){

        ans=sk2*ns;
        //paima pirma skaitmeni
        g[i] = ans;
        while(g[i] >= 10){
        g[i] /= 10;
        }
        sk2=ans-g[i];


        cout<<g[i];// metam atsakyma po nulio
    }


}
}
else if ((n == 10)&&(ns==2)){
cout<<"Atsakymas :";


// atskiriam string nuo kablelio ir gaunam du string
stringstream ss(sk);
string num[10];
int i=1;
while( getline( ss, num[i], '.' ) ) {
    i=i+1;
}


//verciam abu string i int
stringstream(num[1]) >> dal[1];
stringstream(num[2]) >> dal[2];



// padarom kad liekanos masyve butu visi sk nuliai arba koks kitas sk
for(i=1; i<40; i++){
d[i] = 69;
}


p=2;// 2 nes turi but daugiau uz 1 kad veiktu pirmas while, dabar yra 2>2-1, nes jei butu 3>2 tai neimtu paskutines reiksmes
i=1;
while(p>ns-1){

//pirma karta naudojas ivesta sk o poto jau pagal loopa
if (i==1){
d[i]= dal[1] % ns;
p= dal[1]/ns;

i=i+1;

}

else {
d[i]= p % ns;
p= p/ns;
i=i+1;

}
//paskutini sk irgi dameta
if (p<ns){
    d[i]=p;

}

}

//ziuri kiek skaitmenu yra
z=0;
for(i=1; i<40; i++){
 if (d[i] != 69){
    z=z+1;
 }
}

//Deda atvirksciai
for(i=z+1; i>1; i--){
 d[z]=d[i-1];


cout<<d[z];  // metam sveika atsakyma

}


cout<<","; //metam kableli

temp=dal[2];

// skaiciuojam ilgi
 int skaitmenu = 0;
    if (dal[2] < 0) skaitmenu = 1;
    while (dal[2]) {
        dal[2] /= 10;
        skaitmenu++;
    }

// verciam xxxx i 0.xxxx
sk2=temp;
for(i=1; i<skaitmenu+1;i++){
sk2=sk2/10;

}




for(i=1; i<9;i++){

        ans=sk2*ns;
        //cout<<ans<<endl;
        //paima pirma skaitmeni
        g[i] = ans;
        while(g[i] >= 10){
        g[i] /= 10;
        }
        sk2=ans-g[i];


        cout<<g[i];// metam atsakyma po nulio
    }




}
else if ((n == 2)&&(ns==10)){
cout<<"Atsakymas :";

// atskiriam string nuo kablelio ir gaunam du string
stringstream ss(sk);
string num[10];
int i=1;
while( getline( ss, num[i], '.' ) ) {
    i=i+1;
}


//verciam abu string i int
stringstream(num[1]) >> dal[1];
stringstream(num[2]) >> dal[2];


//kad butu lengviau dirbti priskiriam kintamiem be masyvo
sk1=dal[1];
sk2=dal[2];

// skaiciuojam sveiko ilgi
 int skaitmenu1 = 0;
    if (dal[1] < 0) skaitmenu1 = 1;
    while (dal[1]) {
        dal[1] /= 10;
        skaitmenu1++;
    }



int p1;
int p2[1000];
int p2t;

// padarom masyve butu visi sk nuliai arba koks kitas sk
for(i=0; i<40; i++){
p2[i] = 696788765;
}


for(i=skaitmenu1; i>0; i--){

    if (i==skaitmenu1){
    temp = skaitmenu1-1;
      p1=sk1 / lround(pow(10, skaitmenu1-1));


      p2[i]=p1;

    }
     else  {
            p2t=(sk1 / lround(pow(10, temp)));// gaunam atskirus skaitmenis


            p2[i]=p2t % 10;

     }
      temp=temp-1;
}


    // skaiciuojam po kablelio ilgi
 int skaitmenu2 = 0;
    if (dal[2] < 0) skaitmenu2 = 1;
    while (dal[2]) {
        dal[2] /= 10;
        skaitmenu2++;
    }

int p1k;
int p2k[1000];
int p2tk;
int tempk;


// padarom masyve butu visi sk nuliai arba koks kitas sk
for(i=0; i<40; i++){
p2k[i] = 696788765;
}

for(i=skaitmenu2; i>0; i--){

    if (i==skaitmenu2){
    tempk = skaitmenu2-1;
      p1k=sk2 / lround(pow(10, skaitmenu2-1));


       p2k[i]=p1k;
    }
     else  {
            p2tk=(sk2 / lround(pow(10, tempk)));  // darom ta pati ir po kablelio


            p2k[i]=p2tk % 10;

     }
      tempk=tempk-1;

}


int laips=0;
int sum=0;
z=skaitmenu1;
for (i=skaitmenu1-1; i>-1; i--){
    laips=p2[z]*lround(pow(2,i));   // kiekviena skaitmeni keliam laipsniu ir po kiekvieno ciklo mazinam laipsni
    sum=sum+laips;
    z=z-1;
}

double laips2=0;
double sum2=0;
z=skaitmenu2;
for (i=1; i<skaitmenu2+1; i++){
    laips2=p2k[z]*(1/pow(2,i)); // kiekviena skaitmeni po kablelio keliam laipsniu ir po kiekvieno ciklo didinam laipsni, nes kad gauti minus laipsni didesni ji reik dalint is vieno
    sum2=sum2+laips2;
    z=z-1;
}
cout<<setprecision(15)<<sum+sum2;


}
else if ((n == 8)&&(ns==10)){
cout<<"Atsakymas :";

// atskiriam string nuo kablelio ir gaunam du string
stringstream ss(sk);
string num[10];
int i=1;
while( getline( ss, num[i], '.' ) ) {
    i=i+1;
}


//verciam abu string i int
stringstream(num[1]) >> dal[1];
stringstream(num[2]) >> dal[2];

//kad butu lengviau dirbti priskiriam kintamiem be masyvo
sk1=dal[1];
sk2=dal[2];

// skaiciuojam sveiko ilgi
 int skaitmenu1 = 0;
    if (dal[1] < 0) skaitmenu1 = 1;
    while (dal[1]) {
        dal[1] /= 10;
        skaitmenu1++;
    }



int p1;
int p2[1000];
int p2t;

// padarom masyve butu visi sk nuliai arba koks kitas sk
for(i=0; i<40; i++){
p2[i] = 696788765;
}


for(i=skaitmenu1; i>0; i--){

    if (i==skaitmenu1){
    temp = skaitmenu1-1;
      p1=sk1 / lround(pow(10, skaitmenu1-1));


      p2[i]=p1;

    }
     else  {
            p2t=(sk1 / lround(pow(10, temp)));// gaunam atskirus skaitmenis


            p2[i]=p2t % 10;

     }
      temp=temp-1;
}


    // skaiciuojam po kablelio ilgi
 int skaitmenu2 = 0;
    if (dal[2] < 0) skaitmenu2 = 1;
    while (dal[2]) {
        dal[2] /= 10;
        skaitmenu2++;
    }

int p1k;
int p2k[1000];
int p2tk;
int tempk;


// padarom masyve butu visi sk nuliai arba koks kitas sk
for(i=0; i<40; i++){
p2k[i] = 696788765;
}

for(i=skaitmenu2; i>0; i--){

    if (i==skaitmenu2){
    tempk = skaitmenu2-1;
      p1k=sk2 / lround(pow(10, skaitmenu2-1));


       p2k[i]=p1k;
    }
     else  {
            p2tk=(sk2 / lround(pow(10, tempk)));  // darom ta pati ir po kablelio


            p2k[i]=p2tk % 10;

     }
      tempk=tempk-1;

}


int laips=0;
int sum=0;
z=skaitmenu1;
for (i=skaitmenu1-1; i>-1; i--){
    laips=p2[z]*lround(pow(8,i));   // kiekviena skaitmeni keliam laipsniu ir po kiekvieno ciklo mazinam laipsni
    sum=sum+laips;
    z=z-1;
}

double laips2=0;
double sum2=0;
z=skaitmenu2;
for (i=1; i<skaitmenu2+1; i++){
    laips2=p2k[z]*(1/pow(8,i)); // kiekviena skaitmeni po kablelio keliam laipsniu ir po kiekvieno ciklo didinam laipsni, nes kad gauti minus laipsni didesni ji reik dalint is vieno
    sum2=sum2+laips2;
    z=z-1;
}
cout<<setprecision(15)<<sum+sum2;

}
else if ((n == 2)&&(ns==16)){
// atskiriam string nuo kablelio ir gaunam du string
stringstream ss(sk);
string num[10];
int i=1;
while( getline( ss, num[i], '.' ) ) {
    i=i+1;
}


//verciam abu string i int
stringstream(num[1]) >> dal[1];
stringstream(num[2]) >> dal[2];


//kad butu lengviau dirbti priskiriam kintamiem be masyvo
sk1=dal[1];
sk2=dal[2];

// skaiciuojam sveiko ilgi
 int skaitmenu1 = 0;
    if (dal[1] < 0) skaitmenu1 = 1;
    while (dal[1]) {
        dal[1] /= 10;
        skaitmenu1++;
    }



int p1;
int p2[1000];
int p2t;

// padarom masyve butu visi sk nuliai arba koks kitas sk
for(i=0; i<40; i++){
p2[i] = 696788765;
}


for(i=skaitmenu1; i>0; i--){

    if (i==skaitmenu1){
    temp = skaitmenu1-1;
      p1=sk1 / lround(pow(10, skaitmenu1-1));


      p2[i]=p1;

    }
     else  {
            p2t=(sk1 / lround(pow(10, temp)));// gaunam atskirus skaitmenis


            p2[i]=p2t % 10;

     }
      temp=temp-1;
}


    // skaiciuojam po kablelio ilgi
 int skaitmenu2 = 0;
    if (dal[2] < 0) skaitmenu2 = 1;
    while (dal[2]) {
        dal[2] /= 10;
        skaitmenu2++;
    }

int p1k;
int p2k[1000];
int p2tk;
int tempk;


// padarom masyve butu visi sk nuliai arba koks kitas sk
for(i=0; i<40; i++){
p2k[i] = 696788765;
}

for(i=skaitmenu2; i>0; i--){

    if (i==skaitmenu2){
    tempk = skaitmenu2-1;
      p1k=sk2 / lround(pow(10, skaitmenu2-1));


       p2k[i]=p1k;
    }
     else  {
            p2tk=(sk2 / lround(pow(10, tempk)));  // darom ta pati ir po kablelio


            p2k[i]=p2tk % 10;

     }
      tempk=tempk-1;

}


int laips=0;
int sum=0;
z=skaitmenu1;
for (i=skaitmenu1-1; i>-1; i--){
    laips=p2[z]*lround(pow(2,i));   // kiekviena skaitmeni keliam laipsniu ir po kiekvieno ciklo mazinam laipsni
    sum=sum+laips;
    z=z-1;
}

double laips2=0;
double sum2=0;
z=skaitmenu2;
for (i=1; i<skaitmenu2+1; i++){
    laips2=p2k[z]*(1/pow(2,i)); // kiekviena skaitmeni po kablelio keliam laipsniu ir po kiekvieno ciklo didinam laipsni, nes kad gauti minus laipsni didesni ji reik dalint is vieno
    sum2=sum2+laips2;
    z=z-1;
}




//******************************************************
double mk;
mk=sum+sum2;

string answ;
cout<<"Int/Double konvertavimas i stringa nera tikslus, todel jei pageidaujate tikslaus vertimo iveskite skaiciu"<<endl;
cout<<"kuri matote zvaigzdziu dezeje, jei norite ,kad butu automatiskai konvertuojamas netikslus skaicius , iveskite raide n "<<endl;
cout<<"**********************************"<<endl;
cout<<"*"<<setprecision(15)<< mk <<"                   *"<<endl;
cout<<"**********************************"<<endl;
cin>>answ;
if (answ[0]=='n'){

stringstream skai;
   skai << mk;
   string str = skai.str();


stringstream ss2(str);
num[10];
i=1;
while( getline( ss2, num[i], '.' ) ) {
    i=i+1;
}
}

else {

 // atskiriam string nuo kablelio ir gaunam du string
stringstream ss2(answ);
num[10];
i=1;
while( getline( ss2, num[i], '.' ) ) {
    i=i+1;
}

}

//verciam abu string i int
stringstream(num[1]) >> dal[1];
stringstream(num[2]) >> dal[2];


// padarom kad liekanos masyve butu visi sk nuliai arba koks kitas sk
for(i=1; i<10; i++){
d[i] = 69;
}


p=17;// 17 nes turi but daugiau uz 16 kad veiktu pirmas while, kai astuntaine 9, sesioliktaine - 17
i=1;
while(p>ns){

//pirma karta naudojas ivesta sk o poto jau pagal loopa
if (i==1){
d[i]= dal[1] % ns;
p= dal[1]/ns;
i=i+1;

}

else {
d[i]= p % ns;
p= p/ns;
i=i+1;
}
//paskutini sk irgi dameta
if (p<ns){
    d[i]=p;
}

}
//ziuri kiek skaitmenu yra
z=0;
for(i=1; i<10; i++){
 if (d[i] != 69){
    z=z+1;
 }
}


cout<<"Atsakymas :";

//Deda atvirksciai
for(i=z+1; i>1; i--){
 d[z]=d[i-1];
if (d[z]<9) cout<<d[z]; // metam sveika atsakyma

if (d[z]>9) // jei daugiau uz 9 tai priskiriam raide ir tik tada metam
    if (d[z]==10) {
    hx = "A";
    cout<<hx;}
else if (d[z]==11){
    hx = "B";
    cout<<hx;}
else if (d[z]==12){
    hx = "C";
    cout<<hx;}
else if (d[z]==13){
    hx = "D";
    cout<<hx;}
else if (d[z]==14){
    hx = "E";
    cout<<hx;}
else if (d[z]==15){
    hx = "F";
    cout<<hx;}



z--;
}


cout<<","; //metam kableli

temp=dal[2];

// skaiciuojam ilgi
 int skaitmenu = 0;
    if (dal[2] < 0) skaitmenu = 1;
    while (dal[2]) {
        dal[2] /= 10;
        skaitmenu++;
    }

// verciam xxxx i 0.xxxxx
sk2=temp;
for(i=1; i<skaitmenu+1;i++){
sk2=sk2/10;

}


for(i=1; i<9;i++){

        ans=sk2*ns;
        if (ans > 10){
        g[i] = ans;
        while(g[i] >= 100){ //gaunam du skaitmenis
        g[i] /= 100;
        }


        }
        //paima pirma skaitmeni
        else {
        g[i] = ans;
        while(g[i] >= 10){
        g[i] /= 10;
        }

        }
        sk2=ans-g[i];
if (g[i]<9) cout<<g[i];// metam atsakyma po nulio

if (g[i]>9)  // jei daugiau uz 9 tai priskiriam raide ir tik tada metam
 if (g[i]==10) {
    hx = "A";
    cout<<hx;}
else if (g[i]==11){
    hx = "B";
    cout<<hx;}
else if (g[i]==12){
    hx = "C";
    cout<<hx;}
else if (g[i]==13){
    hx = "D";
    cout<<hx;}
else if (g[i]==14){
    hx = "E";
    cout<<hx;}
else if (g[i]==15){
    hx = "F";
    cout<<hx;}


    }


}
else if ((n == 8)&&(ns==16)){


        // atskiriam string nuo kablelio ir gaunam du string
stringstream ss(sk);
string num[10];
int i=1;
while( getline( ss, num[i], '.' ) ) {
    i=i+1;
}


//verciam abu string i int
stringstream(num[1]) >> dal[1];
stringstream(num[2]) >> dal[2];


sk1=dal[1];
sk2=dal[2];

// skaiciuojam sveiko ilgi
 int skaitmenu1 = 0;
    if (dal[1] < 0) skaitmenu1 = 1;
    while (dal[1]) {
        dal[1] /= 10;
        skaitmenu1++;
    }



int p1;
int p2[1000];
int p2t;
// padarom masyve butu visi sk nuliai arba koks kitas sk
for(i=0; i<40; i++){
p2[i] = 696788765;
}


for(i=skaitmenu1; i>0; i--){

    if (i==skaitmenu1){
    temp = skaitmenu1-1;
      p1=sk1 / lround(pow(10, skaitmenu1-1));


      p2[i]=p1;

    }
     else  {
            p2t=(sk1 / lround(pow(10, temp)));


            p2[i]=p2t % 10;

     }
      temp=temp-1;
}

//cout<<".";

    // skaiciuojam po kablelio ilgi
 int skaitmenu2 = 0;
    if (dal[2] < 0) skaitmenu2 = 1;
    while (dal[2]) {
        dal[2] /= 10;
        skaitmenu2++;
    }

int p1k;
int p2k[1000];
int p2tk;
int tempk;


// padarom masyve butu visi sk nuliai arba koks kitas sk
for(i=0; i<40; i++){
p2k[i] = 696788765;
}

for(i=skaitmenu2; i>0; i--){

    if (i==skaitmenu2){
    tempk = skaitmenu2-1;
      p1k=sk2 / lround(pow(10, skaitmenu2-1));


       p2k[i]=p1k;
    }
     else  {
            p2tk=(sk2 / lround(pow(10, tempk)));


            p2k[i]=p2tk % 10;

     }
      tempk=tempk-1;

}


int laips=0;
int sum=0;
z=skaitmenu1;
for (i=skaitmenu1-1; i>-1; i--){
    laips=p2[z]*lround(pow(8,i));
    sum=sum+laips;
    z=z-1;
}

double laips2=0;
double sum2=0;
z=skaitmenu2;
for (i=1; i<skaitmenu2+1; i++){
    laips2=p2k[z]*(1/pow(8,i));
    sum2=sum2+laips2;
    z=z-1;
}
//cout<<setprecision(15)<<sum+sum2;

//*****************************************************************

double mk;
mk=sum+sum2;

string answ;
cout<<"Int/Double konvertavimas i stringa nera tikslus, todel jei pageidaujate tikslaus vertimo iveskite skaiciu"<<endl;
cout<<"kuri matote zvaigzdziu dezeje, jei norite ,kad butu automatiskai konvertuojamas netikslus skaicius , iveskite raide n "<<endl;
cout<<"**********************************"<<endl;
cout<<"*"<<setprecision(15)<< mk <<"               *"<<endl;
cout<<"**********************************"<<endl;
cin>>answ;
if (answ[0]=='n'){
//cout<<setprecision(15)<<mk<<" - integer"<<endl;

stringstream skai;
   skai << mk;
   string str = skai.str();

//cout<<setprecision(15)<<str<<" - int paverstas i string"<<endl;

stringstream ss2(str);
num[10];
i=1;
while( getline( ss2, num[i], '.' ) ) {
    i=i+1;
}
}

else {

 // atskiriam string nuo kablelio ir gaunam du string
stringstream ss2(answ);
num[10];
i=1;
while( getline( ss2, num[i], '.' ) ) {
    i=i+1;
}

}

//verciam abu string i int
stringstream(num[1]) >> dal[1];
stringstream(num[2]) >> dal[2]; //neveikia :(

cout<<"Atsakymas :";

// padarom kad liekanos masyve butu visi sk nuliai arba koks kitas sk
for(i=1; i<10; i++){
d[i] = 69;
}


p=17;// 9 nes turi but daugiau uz 8 kad veiktu pirmas while
i=1;
while(p>ns){

//pirma karta naudojas ivesta sk o poto jau pagal loopa
if (i==1){
d[i]= dal[1] % ns;
p= dal[1]/ns;
i=i+1;

}

else {
d[i]= p % ns;
p= p/ns;
i=i+1;
}
//paskutini sk irgi dameta
if (p<ns){
    d[i]=p;
}

}
//ziuri kiek skaitmenu yra
z=0;
for(i=1; i<10; i++){
 if (d[i] != 69){
    z=z+1;
 }
}

//char ddz[100];

//Deda atvirksciai
for(i=z+1; i>1; i--){
 d[z]=d[i-1];
if (d[z]<9) cout<<d[z]; // metam sveika atsakyma

if (d[z]>9)
    if (d[z]==10) {
    hx = "A";
    cout<<hx;}
else if (d[z]==11){
    hx = "B";
    cout<<hx;}
else if (d[z]==12){
    hx = "C";
    cout<<hx;}
else if (d[z]==13){
    hx = "D";
    cout<<hx;}
else if (d[z]==14){
    hx = "E";
    cout<<hx;}
else if (d[z]==15){
    hx = "F";
    cout<<hx;}



z--;
}


cout<<","; //metam kableli

temp=dal[2];

// skaiciuojam ilgi
 int skaitmenu = 0;
    if (dal[2] < 0) skaitmenu = 1;
    while (dal[2]) {
        dal[2] /= 10;
        skaitmenu++;
    }

// ieskom ilgi
sk2=temp;
for(i=1; i<skaitmenu+1;i++){
sk2=sk2/10;

}


//sk2=sk-dal[1]; // gaunam tik 0.xxxx


for(i=1; i<9;i++){

        ans=sk2*ns;
        if (ans > 10){
        g[i] = ans;
        while(g[i] >= 100){
        g[i] /= 100;
        }


        }
        //paima pirma skaitmeni
        else {
        g[i] = ans;
        while(g[i] >= 10){
        g[i] /= 10;
        }

        }
        sk2=ans-g[i];
if (g[i]<9) cout<<g[i];// metam atsakyma po nulio

if (g[i]>9)
 if (g[i]==10) {
    hx = "A";
    cout<<hx;}
else if (g[i]==11){
    hx = "B";
    cout<<hx;}
else if (g[i]==12){
    hx = "C";
    cout<<hx;}
else if (g[i]==13){
    hx = "D";
    cout<<hx;}
else if (g[i]==14){
    hx = "E";
    cout<<hx;}
else if (g[i]==15){
    hx = "F";
    cout<<hx;}


    }

}
else if ((n == 16)&&(ns==10)){
cout<<"Atsakymas :";

// atskiriam string nuo kablelio ir gaunam du string
stringstream ss(sk);
string num[10];
int i=1;
while( getline( ss, num[i], '.' ) ) {
    i=i+1;
}

//priskiriam stringus su masyvais stringam be masyvu
string str=num[1];
string str2=num[2];



//priskiriam nulius, kad nebutu nesamoniu
int laips=0;
int sum=0;
z=0;
for (h=num[1].length()-1; h>-1; h--){

    if (str[z]=='A') {laips=10*lround(pow(16,h));sum=sum+laips; }
      else if (str[z]=='B') {laips=11*lround(pow(16,h));sum=sum+laips;}
      else if (str[z]=='C') {laips=12*lround(pow(16,h));sum=sum+laips;}
      else if (str[z]=='D') {laips=13*lround(pow(16,h));sum=sum+laips;}
      else if (str[z]=='E') {laips=14*lround(pow(16,h));sum=sum+laips;}
      else if (str[z]=='F') {laips=15*lround(pow(16,h));sum=sum+laips;}
      else{                                                                 //darom ta pati dalyka su laipsniais kurie mazeja, tik ieskom ar yra raidziu ir paverciam juos i skaicius.
      if (str[z]=='1') {laips=1*lround(pow(16,h));sum=sum+laips; }          // visus skaiciavimus sudedam i sum
      else if (str[z]=='2') {laips=2*lround(pow(16,h));sum=sum+laips;}
      else if (str[z]=='3') {laips=3*lround(pow(16,h));sum=sum+laips;}
      else if (str[z]=='4') {laips=4*lround(pow(16,h));sum=sum+laips;}
      else if (str[z]=='5') {laips=5*lround(pow(16,h));sum=sum+laips;}
      else if (str[z]=='6') {laips=6*lround(pow(16,h));sum=sum+laips;}
      else if (str[z]=='7') {laips=7*lround(pow(16,h));sum=sum+laips;}
      else if (str[z]=='8') {laips=8*lround(pow(16,h));sum=sum+laips;}
      else if (str[z]=='9') {laips=9*lround(pow(16,h));sum=sum+laips;}
      }
      z=z+1; // z skirtam stringo charui keisti, o h laipsniui didint, mazint
}


double laips2=0;
double sum2=0;
z=0;
for (h=1; h<num[2].length()+1; h++){


    if (str2[z]=='A') {laips2=10*(1/pow(16,h));sum2=sum2+laips2; }
      else if (str2[z]=='B') {laips2=11*(1/pow(16,h));sum2=sum2+laips2;}
      else if (str2[z]=='C') {laips2=12*(1/pow(16,h));sum2=sum2+laips2;}
      else if (str2[z]=='D') {laips2=13*(1/pow(16,h));sum2=sum2+laips2;}
      else if (str2[z]=='E') {laips2=14*(1/pow(16,h));sum2=sum2+laips2;}
      else if (str2[z]=='F') {laips2=15*(1/pow(16,h));sum2=sum2+laips2;}
      else{
      if (str2[z]=='1') {laips2=1*(1/pow(16,h));sum2=sum2+laips2; }      //darom ta pati tik dabar darom 1/laipsniu kad gauti -laipsni, nes skaiciuojam po kablelio.
      else if (str2[z]=='2') {laips2=2*(1/pow(16,h));sum2=sum2+laips2;}
      else if (str2[z]=='3') {laips2=3*(1/pow(16,h));sum2=sum2+laips2;}
      else if (str2[z]=='4') {laips2=4*(1/pow(16,h));sum2=sum2+laips2;}
      else if (str2[z]=='5') {laips2=5*(1/pow(16,h));sum2=sum2+laips2;}
      else if (str2[z]=='6') {laips2=6*(1/pow(16,h));sum2=sum2+laips2;}
      else if (str2[z]=='7') {laips2=7*(1/pow(16,h));sum2=sum2+laips2;}
      else if (str2[z]=='8') {laips2=8*(1/pow(16,h));sum2=sum2+laips2;}
      else if (str2[z]=='9') {laips2=9*(1/pow(16,h));sum2=sum2+laips2;}
      }
      z=z+1; // z skirtam stringo charui keisti, o h laipsniui didint, mazint
}
cout<<setprecision(15)<<sum+sum2; //darom kad mestu atsakyma ir su kableliu, kitaip apvalins

}
else if ((n == 16)&&(ns==8)){
 cout<<"Atsakymas :";

 // atskiriam string nuo kablelio ir gaunam du string
stringstream ss(sk);
string num[10];
int i=1;
while( getline( ss, num[i], '.' ) ) {
    i=i+1;
}
//priskiriam stringus su masyvais stringam be masyvu
string str=num[1];
string str2=num[2];

//priskiriam nulius, kad nebutu nesamoniu
int laips=0;
int sum=0;
z=0;
for (h=num[1].length()-1; h>-1; h--){

    if (str[z]=='A') {laips=10*lround(pow(16,h));sum=sum+laips; }
      else if (str[z]=='B') {laips=11*lround(pow(16,h));sum=sum+laips;}
      else if (str[z]=='C') {laips=12*lround(pow(16,h));sum=sum+laips;}
      else if (str[z]=='D') {laips=13*lround(pow(16,h));sum=sum+laips;}
      else if (str[z]=='E') {laips=14*lround(pow(16,h));sum=sum+laips;}
      else if (str[z]=='F') {laips=15*lround(pow(16,h));sum=sum+laips;} //darom ta pati dalyka su laipsniais kurie mazeja, tik ieskom ar yra raidziu ir paverciam juos i skaicius.
      else{
      if (str[z]=='1') {laips=1*lround(pow(16,h));sum=sum+laips; }        // visus skaiciavimus sudedam i sum
      else if (str[z]=='2') {laips=2*lround(pow(16,h));sum=sum+laips;}
      else if (str[z]=='3') {laips=3*lround(pow(16,h));sum=sum+laips;}
      else if (str[z]=='4') {laips=4*lround(pow(16,h));sum=sum+laips;}
      else if (str[z]=='5') {laips=5*lround(pow(16,h));sum=sum+laips;}
      else if (str[z]=='6') {laips=6*lround(pow(16,h));sum=sum+laips;}
      else if (str[z]=='7') {laips=7*lround(pow(16,h));sum=sum+laips;}
      else if (str[z]=='8') {laips=8*lround(pow(16,h));sum=sum+laips;}
      else if (str[z]=='9') {laips=9*lround(pow(16,h));sum=sum+laips;}
      }
      z=z+1; // z skirtam stringo charui keisti, o h laipsniui didint, mazint
}

//priskiriam nulius, kad nebutu nesamoniu
double laips2=0;
double sum2=0;
z=0;
for (h=1; h<num[2].length()+1; h++){


    if (str2[z]=='A') {laips2=10*(1/pow(16,h));sum2=sum2+laips2; }       //darom ta pati tik dabar darom 1/laipsniu kad gauti -laipsni, nes skaiciuojam po kablelio.
      else if (str2[z]=='B') {laips2=11*(1/pow(16,h));sum2=sum2+laips2;}
      else if (str2[z]=='C') {laips2=12*(1/pow(16,h));sum2=sum2+laips2;}
      else if (str2[z]=='D') {laips2=13*(1/pow(16,h));sum2=sum2+laips2;}
      else if (str2[z]=='E') {laips2=14*(1/pow(16,h));sum2=sum2+laips2;}
      else if (str2[z]=='F') {laips2=15*(1/pow(16,h));sum2=sum2+laips2;}
      else{
      if (str2[z]=='1') {laips2=1*(1/pow(16,h));sum2=sum2+laips2; }
      else if (str2[z]=='2') {laips2=2*(1/pow(16,h));sum2=sum2+laips2;}
      else if (str2[z]=='3') {laips2=3*(1/pow(16,h));sum2=sum2+laips2;}
      else if (str2[z]=='4') {laips2=4*(1/pow(16,h));sum2=sum2+laips2;}
      else if (str2[z]=='5') {laips2=5*(1/pow(16,h));sum2=sum2+laips2;}
      else if (str2[z]=='6') {laips2=6*(1/pow(16,h));sum2=sum2+laips2;}
      else if (str2[z]=='7') {laips2=7*(1/pow(16,h));sum2=sum2+laips2;}
      else if (str2[z]=='8') {laips2=8*(1/pow(16,h));sum2=sum2+laips2;}
      else if (str2[z]=='9') {laips2=9*(1/pow(16,h));sum2=sum2+laips2;}
      }
      z=z+1; // z skirtam stringo charui keisti, o h laipsniui didint, mazint
}

cout<<setprecision(15)<<sum+sum2<<"  desimtaine"<<endl;

double sumv;
sumv=sum+sum2;

string answ;
cout<<"Int/Double konvertavimas i stringa nera tikslus, todel jei pageidaujate tikslaus vertimo iveskite skaiciu"<<endl;
cout<<"kuri matote zvaigzdziu dezeje, jei norite ,kad butu automatiskai konvertuojamas netikslus skaicius , iveskite raide n "<<endl;
cout<<"**********************************"<<endl;
cout<<"*"<<setprecision(15)<< sumv <<"                      *"<<endl;
cout<<"**********************************"<<endl;
cin>>answ;

if (answ[0]=='n'){


stringstream skai;
   skai << sumv;
   string str3 = skai.str();



stringstream ss3(str3);
string num2[10];
i=1;
while( getline( ss3, num2[i], '.' ) ) {
    i=i+1;
}

//verciam abu string i int
stringstream(num2[1]) >> dal[1];
stringstream(num2[2]) >> dal[2];


}

else {

 // atskiriam string nuo kablelio ir gaunam du string
stringstream ss3(answ);
string num2[10];
i=1;
while( getline( ss3, num2[i], '.' ) ) {
    i=i+1;
}




//verciam abu string i int
stringstream(num2[1]) >> dal[1];
stringstream(num2[2]) >> dal[2];

}

// padarom kad liekanos masyve butu visi sk nuliai arba koks kitas sk
for(i=1; i<10; i++){
d[i] = 69;
}



p=9;// 9 nes turi but daugiau uz 8 kad veiktu pirmas while
i=1;
while(p>ns){

//pirma karta naudojas ivesta sk o poto jau pagal loopa
if (i==1){
d[i]= dal[1] % ns;
p= dal[1]/ns;
i=i+1;

}

else {
d[i]= p % ns;
p= p/ns;
i=i+1;
}
//paskutini sk irgi dameta
if (p<ns){
    d[i]=p;
}

}
//ziuri kiek skaitmenu yra
z=0;
for(i=1; i<10; i++){
 if (d[i] != 69){
    z=z+1;
 }
}

//Deda atvirksciai
for(i=z+1; i>1; i--){
 d[z]=d[i-1];


cout<<d[z];  // metam sveika atsakyma

}


cout<<","; //metam kableli

temp=dal[2];

// skaiciuojam ilgi
 int skaitmenu = 0;
    if (dal[2] < 0) skaitmenu = 1;
    while (dal[2]) {
        dal[2] /= 10;
        skaitmenu++;
    }

// verciam xxxxx i 0.xxxxx
sk2=temp;
for(i=1; i<skaitmenu+1;i++){
sk2=sk2/10;

}





for(i=1; i<9;i++){

        ans=sk2*ns;
        //cout<<ans<<endl;
        //paima pirma skaitmeni
        g[i] = ans;
        while(g[i] >= 10){
        g[i] /= 10;
        }
        sk2=ans-g[i];


        cout<<g[i];// metam atsakyma po nulio
    }

    }
else if ((n == 2)&&(ns==2)){
cout<<"Atsakymas :";
cout<<sk;
}
else if ((n == 8)&&(ns==8)){
cout<<"Atsakymas :";
cout<<sk;
}
else if ((n == 10)&&(ns==10)){
cout<<"Atsakymas :";
cout<<sk;
}
else if ((n == 16)&&(ns==16)){
cout<<"Atsakymas :";
cout<<sk;
}

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

return 0 ;
}
