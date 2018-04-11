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
    int al,bl,cl,maxi;
   string a;
   string b;
   string c;

   cin>>a>>b>>c;

   al=a.length();
   bl=b.length();
   cl=c.length();

maxi=al;
   if ((al!=bl)&&(al!=cl)&&(cl!=bl)){
    if (maxi<bl){cout<<b;}else if(maxi<cl){cout<<c;}else{cout<<a;}

   }else{
if ((al==bl)&&(al==cl)&&(cl==bl)){
if ((a==b)&&(a==c)&&(c==b)){cout<<a; goto E;}
   for (int i=0;i<=al;){
    if ((a[i]-'0'>b[i]-'0')&&(a[i]-'0'>c[i]-'0')){cout<<a;i=al; goto E;}
    else if ((b[i]-'0'>c[i]-'0')&&(b[i]-'0'>a[i]-'0')){cout<<b;i=al;goto E;}
    else if ((c[i]-'0'>b[i]-'0')&&(c[i]-'0'>a[i]-'0')){cout<<c;i=al;goto E;}



    else if ((a==b)&&(a[i]-'0'>c[i]-'0')){cout<<a;i=al;goto E;}
    else if ((a==c)&&(a[i]-'0'>b[i]-'0')){cout<<a;i=al;goto E;}
    else if ((c==b)&&(c[i]-'0'>a[i]-'0')){cout<<c;i=al;goto E;}

    else if (a[i]-'0'==b[i]-'0'==c[i]-'0'){i=i+1;}


   }

   }

   if (al==bl){
        if (a==b){cout<<a; goto E;}
   for (int i=0;i<=al;){
    if (a[i]-'0'>b[i]-'0'){cout<<a;i=al;}
    else if (a[i]-'0'<b[i]-'0'){cout<<b;i=al;}
    else if (a[i]-'0'==b[i]-'0'){i=i+1;}


   }

   }
   if (al==cl){
        if (a==c){cout<<a; goto E;}
for (int i=0;i<=al;){
    if (a[i]-'0'>c[i]-'0'){cout<<a;i=al;}
    else if (a[i]-'0'<c[i]-'0'){cout<<c;i=al;}
    else if (a[i]-'0'==c[i]-'0'){i=i+1;}

   }
   }
if (cl==bl){
         if (c==b){cout<<b; goto E;}
for (int i=0;i<=bl;){
    if (c[i]-'0'>b[i]-'0'){cout<<c;i=bl;}
    else if (c[i]-'0'<b[i]-'0'){cout<<b;i=bl;}
    else if (c[i]-'0'==b[i]-'0'){i=i+1;}

   }



   }
   }
   E:
    return 0;
}
