#include<stdio.h>
#include<math.h>
#include<conio.h>

/* Global Variables */
#define PI 3.14159

/*
 * Function 	: main
 * Attributes 	: none
 * Description  : Calls every method and run them
 * Method Type	: void 
 */
void main() {
	/* Variables */
	int userChoice;
	
	/* While Loop to Continue to take input after getting area of one shape. */
	while(true) {
		
		/* Printing instruction */
		printf("\nChoose Your Code : \n  1 - Square\n  2 - Circle\n  3 - Rectangle\n  4 - Cube\n  5 - Cone\n  6 - Sphere\n  7 - Cylinder\n  8 - Exit\n");
		
		/* Taking User Input */
		printf("Enter Your Choice : ");
		scanf("%d", &userChoice);
		
		/* Validation */
		if (userChoice < 1 || userChoice > 8) {
			printf("Invlaid Input!\n");
		} else {
			/* Switch to call methods according userChoice */
			switch(userChoice) {
				case 1:
//					squareArea();
					break;
				case 2:
//					circleArea();
					break;
				case 3:
//					rectangleArea();
					break;
				case 4:
//					cubeArea();
					break;
				case 5:
//					coneArea();
					break;
				case 6:
//					sphereArea();
					break;
				case 7:
//					cylinderArea();
					break;
				default:
					return;
			}
		}
	}
}
