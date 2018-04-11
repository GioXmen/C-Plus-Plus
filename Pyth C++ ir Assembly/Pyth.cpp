// Pyth.cpp : Defines the entry point for the console application.
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

int main(int argc, char** argv) {

	__declspec(align(4)) float s1[4];
	__declspec(align(4)) float s2[4];
	__declspec(align(4)) float s3[4];
	__declspec(align(4)) float s4[4];
	
	int sk = 1000;

	std::ofstream fr("ats.txt");
	std::ofstream fs("test.txt");

	for (int i = 1; i <= sk; i++) {
		s1[0] = i;
		s1[1] = i;
		s1[2] = i;
		s1[3] = i;

		for (int j = i + 1; j <= sk; j+=4) {
			s2[0] = j;
			s2[1] = j+1;
			s2[2] = j+2;
			s2[3] = j+3;

			__asm {

				movups xmm0, s1
				movups xmm1, s2

				movaps xmm2, xmm0 
				movaps xmm3, xmm1

				mulps xmm2, xmm2
				mulps xmm3, xmm3

				addps xmm4, xmm2
				addps xmm4, xmm3

				sqrtps xmm5, xmm4

				roundps xmm5, xmm5, 0
				movups s4, xmm5

				//addps xmm6, xmm2
				//roundps xmm6, xmm6, 0

				mulps xmm5, xmm5

				subps xmm5, xmm4

				//roundps pirmas, antras , kiek po kablelio palikti


     
			    movups s3, xmm5
				//movups s4, xmm6


			}
			

			fs << std::endl;
			fs << s1[0] << " " << s1[1] << " " << s1[2] << " " << s1[3]<<"   xmm0 - first 4 values" << std::endl;
			fs << "-------------------------------------------------" << std::endl;
			fs << s2[0] << " " << s2[1] << " " << s2[2] << " " << s2[3] << "   xmm1 - second 4 values" << std::endl;

			fs << s4[0] << " " << s4[1] << " " << s4[2] << " " << s4[3] << "   integer of previous square"<<std::endl;

			fs << s3[0]<<" " << s3[1]<<" " << s3[2]<<" " << s3[3] << "   difference or comparison of xmm5 and xmm4 "<<std::endl;
			
			
			
			if (s3[0] == 0) { fr << s1[0] << " " << s2[0] << " " << s4[0] << std::endl; }
			else if (s3[1] == 0) { fr << s1[1] << " " << s2[1] << " " << s4[1] << std::endl; }
			else if (s3[2] == 0) { fr << s1[2] << " " << s2[2] << " " << s4[2] << std::endl; }
			else if (s3[3] == 0) { fr << s1[3] << " " << s2[3] << " " << s4[3] << std::endl; }

			/*
			for (int k = 0; k < 4; k++)
			{
				if (s3[k]==0)
					printf("%.0f %.0f %.0f \n", s1[k], s2[k], s4[k]);
			}
			*/
			
			if (s3[0] == 0) { std::cout << s1[0] << " " << s2[0] << " " << s4[0] << std::endl; }
			else if (s3[1] == 0) { std::cout << s1[1] << " " << s2[1] << " " << s4[1] << std::endl; }
			else if (s3[2] == 0) { std::cout << s1[2] << " " << s2[2] << " " << s4[2] << std::endl; }
			else if (s3[3] == 0) { std::cout << s1[3] << " " << s2[3] << " " << s4[3] << std::endl; }
			


		}
	}

	system("pause");
}
