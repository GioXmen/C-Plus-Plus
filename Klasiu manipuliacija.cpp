#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <math.h>


using namespace std;


class Stac2 {
protected:
	double Ax, Ay, Bx, By, Cx, Cy, Dx, Dy;

public:

~Stac2()
	{
		//cout << "suveike destruktorius" << endl;
	}

	Stac2()
	{

	}

	Stac2(double a1[], double b1[])
	{
        Ax = a1[0]; Ay = b1[0];
		Bx = a1[1]; By = b1[1];
		Cx = a1[2]; Cy = b1[2];
		Dx = a1[3]; Dy = b1[3];
	}


     void spausdinti()
    {
        cout<<"X"<<"  "<<"Y"<<endl;
        cout<<Ax<<"  "<< Ay<<endl;
        cout<<Bx<<"  "<< By<<endl;
        cout<<Cx<<"  "<< Cy<<endl;
        cout<<Dx<<"  "<< Dy<<endl;
    }
};


class Stac: public Stac2
{

public:
    Stac(): Stac2(){}
	Stac(double a1[], double b1[]): Stac2(a1, b1){ } //naudojam bazines klases konstruktoriu

	void Duomenys()
	{

cout<<"**************************************************************************"<<endl;
cout<<"         B --------------- C                                            "<<endl;
cout<<"         |                 |                                            "<<endl;
cout<<"         |                 |                                            "<<endl;
cout<<"         A --------------- D                                            "<<endl;
cout<<"**************************************************************************"<<endl;
		cout << "Iveskite krastines A koordinates x ir y" << endl;
		cin >> Ax >> Ay;
		cout << "Iveskite krastines B koordinates x ir y" << endl;
		cin >> Bx >> By;
		cout << "Iveskite krastines C koordinates x ir y" << endl;
		cin >> Cx >> Cy;
		cout << "Iveskite krastines D koordinates x ir y" << endl;
		cin >> Dx >> Dy;

	}

	void Duomenys2()
	{
	    ifstream fr("ivedimas.txt"); //ivedimas is txt failo
	    fr>>Ax>>Ay>>Bx>>By>>Cx>>Cy>>Dx>>Dy;

	}

	void Sprendimas(double &a, double &b, bool &tiko)
	{
		a = abs(sqrt(((Cx - Bx)*(Cx - Bx))+((Cy - By)*(Cy - By))));
		b = abs(sqrt(((Bx - Ax)*(Bx - Ax))+((By - Ay)*(By - Ay))));

if ((a==(abs(sqrt(((Ax - Dx)*(Ax - Dx))+((Ay - Dy)*(Ay - Dy))))))&&(b == (abs(sqrt(((Cx - Dx)*(Cx - Dx))+((Cy - Dy) * (Cy - Dy)))))) &&
        (a != b)) {tiko = true;}
		else {
        cout << "Koordinates nesudaro staciakampio" << endl;
        tiko = false;
		}
	}

	double Plotas(){
	    double S;
	   S=(abs(sqrt(((Cx - Bx)*(Cx - Bx))+((Cy - By)*(Cy - By)))))*(abs(sqrt(((Bx - Ax)*(Bx - Ax))+((By - Ay)*(By - Ay))))) ;

	  return S;

	}

Stac operator+ ( Stac p2) const{

Stac temp;
temp.Ax = Ax + p2.Ax ;
temp.Ay = Ay + p2.Ay ;
temp.Bx = Bx + p2.Bx ;
temp.By = By + p2.By ;
temp.Cx = Cx + p2.Cx ;
temp.Cy = Cy + p2.Cy ;
temp.Dx = Dx + p2.Dx ;
temp.Dy = Dy + p2.Dy ;
return temp;
                  }

bool operator< ( Stac ) const;

Stac operator++( ){
           ++Ax;
           ++Ay;

           Stac temp;
           temp.Ax = Ax ;
            temp.Ay = Ay ;

           return temp;
                  }


};

bool Stac::operator< ( Stac k2 ) const{

int temp1=(Ax+Ay+Bx+By+Cx+Cy+Dx+Dy)/8;
int temp2=(k2.Ax+k2.Ay+k2.Bx+k2.By+k2.Cx+k2.Cy+k2.Dx+k2.Dy)/8;

if( temp1 < temp2 ) {return true;}
else { return false;}
                  }

int main()
{
	int kiek,nusk, o=0;
	Stac s2,s3,s4;
    double a, b, S, tS=0, Sn;
    bool tiko;

cout<<"**************************************************************************"<<endl;
cout<<"*        Ernesto Lobacevskio laboratorinis                               *"<<endl;
cout<<"**************************************************************************"<<endl;
cout<<endl;



s3.Duomenys2(); //txt vedimas
s2.Duomenys(); //console vedimas

double A[4] = {-4, 13, 47, 30};
double B[4] = {7, 36, 16, -13};

Stac s1(A, B); //su argumentais


double sum;
sum=s1.Plotas()+s2.Plotas()+s3.Plotas();
cout<<sum<<endl;

s1.spausdinti();

cout<<endl;
cout<<"Sudeties operatorius"<<endl;
cout<<endl;

s4=s1+s2;

s4.spausdinti();

cout<<endl;
cout<<"Lyginamasis operatorius"<<endl;
cout<<endl;

if( s1 < s4 ) {cout<<"s1 koordinaciu vidurkis mazesnis uz s4"<<endl;}
else {cout<<"s1 koordinaciu vidurkis didesne uz (arba lygi) s4"<<endl;}

cout<<endl;
cout<<"PliusPlius operatorius(Sudedam tik A koordinates)"<<endl;
cout<<endl;

++s4;

s4.spausdinti();
	return 0;
}
