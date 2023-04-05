#include <stdio.h>
#include "projecth.h"

// To Add:
// 1) User registration with file storage and retrieval of information.
// 2) Diet and/or Exercise plan.
// 3) Design improvements if possible.

int main(int argc, char*argv[]) {
	
	char r1, r2, r3;
	float hdl, ldl, tgyd, mmol, mg;

	do {
		
		line();
		printf("\n CHOLESTEROL RATIO CALCULATOR\n");
		line();
		
		
		// Converter
		printf("\n Would you like to use the mmol/L to mg/dL converter? (Y/N): "); 
		scanf(" %c", &r1); 
		line();
		
		if (r1 == 'Y') { 
			
			printf("\n Millimoles per liter to Milligrams per deciliter Converter\n"); /
			line();
	
			do {
		
				printf("\n Enter value in mmol/L: ");
				scanf("%f", &mmol);

				printf("\n %.1f mg/dL \n", mmoltomg(mmol));
		
				printf("\n Do you want to use the converter again (Y/N): ");
				scanf(" %c", &r2); // (2)
				line();
			
			} while (r2 == 'Y');
			
		} 
		
		// Ratio Calculator
		printf("\n Enter your HDL level: ");
		scanf("%f", &hdl);
		
		printf("\n Enter your LDL level: ");
		scanf("%f", &ldl);
		
		printf("\n Enter your triglyceride level: ");
		scanf("%f", &tgyd);
		
		line();
		printf("\n RESULTS\n");
		line();
		
		printf("\n Total Cholesterol: %.1f\n", tot_chol(hdl, ldl, tgyd));
		
		printf("\n Cholesterol / HDL Ratio: %.1f\n", ratio(tot_chol(hdl, ldl, tgyd), hdl));
		
		printf("\n LDL / HDL Ratio: %.1f\n", ratio(ldl, hdl));
		
		printf("\n Triglyceride / HDL Ratio: %.1f\n", ratio(tgyd, hdl));
		
		line();
	
		printf("\n Do you want to use the calculator again (Y/N): ");
		scanf(" %c", &r3); // (3)
	
	} while	(r3 == 'Y');
}