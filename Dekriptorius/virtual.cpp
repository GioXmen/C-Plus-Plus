#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <math.h>
#include <stdio.h>

using namespace std;



int main()
{
    unsigned char reg[16];
    char mem[256], tp[772];
    int sk[256];
    int flag=0;
    int chr,chr2;
    int rpc=0, counter=0;
    char num[5];

     ifstream fr ("q1_encr.txt", ios::binary);
     //ofstream fd("ran.bin", ios::binary);


    FILE* fp = fopen( "decryptor.bin", "rb" );
    if( fp == NULL ) {
            printf( "Negaliu atidaryti failo \n");
            exit(1);
    }
    int i;

    for( i = 0; i < sizeof(mem); i++ ) {
            fread( mem+i, 1,1, fp );
            sk[i]=(int)mem[i];




             if( feof( fp ) ) {break;}



      }
    fclose( fp );





int h=0;
int jo=0;

while(flag!=2){


switch ( mem[rpc] ) {

case 0x04:
  reg[0]=mem[rpc+1];
  rpc=rpc+2;

  break;

case 0x05:


snprintf(num,5,"%02x",sk[rpc+1]);

chr=num[1]-'0';


  reg[chr]= reg[chr] << 1;


  rpc=rpc+2;

  break;

case 0x07:

rpc=rpc+sk[rpc+1];
counter=counter+1;

  break;

case 0x10:




if(jo<718){fr>>tp[h]; jo++; }

if(jo==718){flag=1; }



    if(flag!=1){
        reg[sk[rpc+1]]=(int)tp[h];
        h++;

    }
rpc=rpc+2;

 break;

case 0x11:
snprintf(num,5,"%02x",sk[rpc+1]);

chr=num[1]-'0';

cout<<reg[chr];
//fd<<reg[chr];

rpc=rpc+2;

  break;


case 0x0A:


if( flag == 1 ) { rpc=rpc+sk[rpc+1]; } else { rpc=rpc+2;}

  break;


case 0x0B:

flag=2;
   break;


case 0x0D:

snprintf(num,5,"%02x",sk[rpc+1]);

chr=num[1]-'0';
chr2=num[0]-'0';

reg[chr]=reg[chr]-reg[chr2];


rpc=rpc+2;

   break;



case 0x0E:


snprintf(num,5,"%02x",sk[rpc+1]);

chr=num[1]-'0';
chr2=num[0]-'0';

  reg[chr]= reg[chr] ^ reg[chr2];
rpc=rpc+2;

   break;

case 0x0F:
snprintf(num,5,"%02x",sk[rpc+1]);

chr=num[1]-'0';
chr2=num[0]-'0';

reg[chr]= reg[chr]| reg[chr2];
rpc=rpc+2;

   break;



default:
  cout<<"Neradau komandos";
  break;
}
}





    return 0;
}
