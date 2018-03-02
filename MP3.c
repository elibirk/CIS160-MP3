/* ========================================================
Leah Perry								  CIS 160 Fall 2014
MP3							 			Submitted: 10/07/14
Loops Within Loops						Revised on: -------


Data Dictionary
Variable				Used to
--------				-------
int R					store user input of upper limit
int count				incriment up to R
int modulo				calculate R % count
int RSum				keep track of how the sum of the Rs entered
int LoopCount			keep track of how many times the program has looped
int AvgSum				keep track of the Average value of the Rs entered
int YesNoVar			determine whether or not the user wants to try new values
int RCount				count up to R when modulo == 5, to print asterisks

Functions Called		What They Do
----------------		------------
printf					prints output
puts					prints output w/ no variables and w/ an automatic newline
scanf_s					scans user input

C:\User\Owner\My Documents\Visual Studio 2013\Projects\MP3
==========================================================*/

//precompiler directives
#include <stdio.h>
#include <math.h>

//function prototypes go here

//main function
int main (void) 
{
	/* ========================================================
	Leah Perry								  CIS 160 Fall 2014
	MP3							 			Submitted: 10/07/14
	Loops Within Loops						Revised on: -------


	Data Dictionary
	Variable				Used to
	--------				-------
	int R					store user input of upper limit
	int count				incriment up to R
	int modulo				calculate R % count
	int RSum				keep track of how the sum of the Rs entered
	int LoopCount			keep track of how many times the program has looped
	int AvgSum				keep track of the Average value of the Rs entered
	int YesNoVar			determine whether or not the user wants to try new values
	int RCount				count up to R when modulo == 5, to print asterisks

	Functions Called		What They Do
	----------------		------------
	printf					prints output
	puts					prints output w/ no variables and w/ an automatic newline
	scanf_s					scans user input

	==========================================================*/
	//insert code here

	int R = 600;
	int count;
	int modulo;
	int RSum = 0;
	int LoopCount = 1;
	int AvgSum = 0;
	int YesNoVar = 1;
	int RCount = 1;


	while (YesNoVar == 1){

		int R = 600;

		while (R < 100 || R > 300) {
			printf("Enter a number between 100 and 300. ");
			scanf_s("%d", &R, 50);
		} //end prompt while

		count = 1; //to avoid division by zero
		modulo = R % count;
		RSum = RSum + R;
		AvgSum = RSum / LoopCount;

		
		while (count <= R) {
			switch (modulo) {
			case 0: //even odd
				if (R % 2 == 0){
					printf("Number is even.\n");
				} //end even/odd then
				else {
					printf("Number is odd.\n");
				}; //end even/odd else
				break;
			case 1: //sqrt
				printf("%f\n", sqrt(R));
				break;
			case 2: //print count
				printf("%d\n", count);
				break;
			case '3': //print RSum
				printf("%d\n", RSum);
				break;
			case 4: //print AvgSum
				printf("%d\n", AvgSum);
				break;
			case 5: // asterisks 20 or less
				if (R < 20){
					while (RCount <= R){
						printf("*");
						RCount++;
					}//end RCount Loop
					puts("");
				}//end case 5 then
				else {
					printf("********************");
				} //end case 5 else
				puts("");
				break;
			case 6: //modulo 6
				printf("Modulo 6 was selected.\n");
				break;
			default: //end condition, close program
				printf("End condition has been met.\n");
				scanf_s("%d", &R, 50); //to keep the window open
				return 0;
				break;
			} //end switch case
			count = count++; //incriment count
			modulo = R % count; //see if modulo needs updating? didn't change anything
		} //end count measure if
		printf("Would you like to try other numbers? Enter '1' for yes. \nAnything else will be considered a no.\n");
		scanf_s("%d", &YesNoVar, 1);
		LoopCount = LoopCount++;

	}//end whole funciton YesNo while
	scanf_s("%d", &R, 50); //to keep the window open
return 0;
} //end main function

//insert function definitions here
