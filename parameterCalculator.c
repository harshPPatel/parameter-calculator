#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdbool.h>

/* Global Variables */
#define PI 3.14159

/*
 * Function 	: squareParameter
 * Attributes 	: none
 * Variables	: side		=>	Type : int		=> Store value of side from user
 *				  parameter	=>	Type : float	=> Store value of parameter
 * Description  : take input and calculate parameter of square
 * Method Type	: void 
 */
void squareParameter() {
	/* Variable */
	int side;
	float parameter;
	
	printf("Enter Side : ");
	scanf("%d", &side);
	
	if (side <= 0) {
		printf("Invalid Input!\n");
		squareParameter();
	} else {
		parameter = side * 4;
		printf("Parameter of your square is : %.02f. \n", parameter);
	}
}

/*
 * Function 	: circleParameter
 * Attributes 	: none
 * Variables	: radius	=>	Type : int		=> Store value of radius from user
 *				  parameter	=>	Type : float	=> Store value of parameter
 * Description  : take input and calculate parameter of circle
 * Method Type	: void 
 */
void circleParameter() {
	/* Variable */
	int radius;
	float parameter;
	
	printf("Enter Radius : ");
	scanf("%d", &radius);
	
	if (radius <= 0) {
		printf("Invalid Input!\n");
		circleParameter();
	} else {
		parameter = 2 * PI * radius;
		printf("Parameter of your circle is : %.02f. \n", parameter);
	}
}


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
					squareParameter();
					break;
				case 2:
					circleParameter();
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
