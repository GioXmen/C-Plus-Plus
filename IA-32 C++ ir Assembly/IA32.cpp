// IA32.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
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

int main(int argc, char** argv ) 
{ 
	int iOut = 0;  // kintamasis, kuriame turi buti saugomas rezultatas -
	char* pcInp;  // pointeris i pateikta eilute is skaiciu
	

	if( argc < 2 ) { 
		printf("Missing parameter: number\n"); 
		return(0);
	} 

	pcInp = argv[1];        //skaiciu eilute pateikiama per argumentu sarasa

	
	      __asm { 
			  push eax //idedamas registras tarpiniams skaiciavimams
			  push ebx //idedamas registras tarpiniams skaiciavimams
			  push ecx //idedamas registras , saugantis pointeri i eilute
			  push edx //idedamas registras, saugantis skaiciaus int reiksme


			  xor eax, eax //nunulinamas eax registras
			  xor edx, edx //nunulinamas edx registras

			  mov ecx, pcInp  //perkeliam stringa i ecx


			sloop:	  
			      xor eax, eax //nunulinamas eax registras
				  mov al, byte ptr[ecx]
		
				cmp eax, '0'   // jei maziau uz 0 tai baigs darba
				jl baigta
				cmp eax, '9'   //jei daugiau uz 9 tai baigs darba
				jg baigta


				sub eax, '0' // verciam char i int/skaiciu (tas pats kad ir atimt 48)
				imul edx, 10   //dauginam rezultata is 10
				add edx, eax  //pridedam gauta reiksme prie rezultato     // sprendimas : verciam 659 - tai po pirmo loopo gaunam 6 ( nes eax yra nulis is pradziu) , po antro gaunam65, nes 6 padauginam is 10 ir poto prie 60 pridedam 5, po trecio ciklo taip pat gaunam 659, o ketvirtam cikla uzsidaro.

				inc ecx   //imam sekancia reiksme  
				jmp sloop

				baigta:

			  mov iOut, edx

			  //isvalomi keturi registrai
			  pop edx 
			  pop ecx 
			  pop ebx 
			  pop eax 
		  }
		  
		  printf("The number was processed as %d\n", iOut );

}


