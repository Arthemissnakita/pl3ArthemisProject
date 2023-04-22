#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "projecth.h"

int main() {
	
	char r1, r2, r3, r4;
	float hdl, ldl, tgyd, mmol, mg;
	int loggedIn = 0;
	
	do {
		
		int option;
		
		line();
    	printf("\n Press '1' to Register");
    	printf("\n Press '2' to Login\n");
    	line();
   		scanf("%d",&option);
   		

    	getchar();   
		        

    	if(option == 1) {
    		
            system("CLS");
            
            if (registration()) {
            	
            	loggedIn = 1;
            	
			}
            
        }

    	else if(option == 2) {
    		
            system("CLS");
            	
            if (login()) {
            	
            	loggedIn = 1;
            	
			}
            	
        }
        	
        do {
			
        	if (loggedIn)  {
        	
				line();
				printf("\n CHOLESTEROL RATIO CALCULATOR\n");
				line();
		
				// Converter
				printf("\n Would you like to use the mmol/L to mg/dL converter? (Y/N): "); 
				scanf(" %c", &r1); 
				line();
		
				if (r1 == 'Y') { 
			
					printf("\n Millimoles per liter to Milligrams per deciliter Converter\n"); 
					line();
	
					do {
		
						printf("\n Enter value in mmol/L: ");
						scanf("%f", &mmol);

						printf("\n %.1f mg/dL \n", mmoltomg(mmol));
		
						printf("\n Do you want to use the converter again (Y/N): ");
						scanf(" %c", &r2); 
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
				
				system("CLS");
			
				line();
				printf("\n RESULTS\n");
				line();
		
				printf("\n Total Cholesterol: %.1f mg/dL\n", tot_chol(hdl, ldl, tgyd));
		
				printf("\n Cholesterol / HDL Ratio: %.1f\n", ratio(tot_chol(hdl, ldl, tgyd), hdl));
		
				printf("\n LDL / HDL Ratio: %.1f\n", ratio(ldl, hdl));
		
				printf("\n Triglyceride / HDL Ratio: %.1f\n", ratio(tgyd, hdl));
		
				line();
		
				ldlhdl(hdl, ldl);
		
				line();
		
				tgydhdl(hdl, tgyd);
		
				line();
			
				printf("\n Do you want to use the calculator again (Y/N): ");
				scanf(" %c", &r3); 
			
				line();
				
				if (r3 == 'Y') {
					
					printf("\n Would you like to logout? (Y/N): ");
					scanf(" %c", &r4);
					
					system("CLS");
						
				}
			
			}
		
			else {
			
			printf("\n Login failed. Please try again.\n");
			r3 = 'Y'; 
			
			}
			
		} while  (r3 == 'Y' && r4 == 'N');
		
	} while	(r3 == 'Y' && r4 == 'Y');
	
	return 0;
}
		