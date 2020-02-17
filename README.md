# parameterCalculator

An C language, console based program which provides different options to the user to calculate its parameter. It have different methods for all different shapes and switch statement is used to check user input. While loop is used to run this function continuously. But it breaks the loop when user enters 4 in the console.

Checkout the live demo here: [Parameter Calculator](https://repl.it/@harshPPatel/Parameter-Calculator)

### includes :
- stdio.h
- conio.h
- math.h
- stdbool.h

### Global Variables :
- **PI** : 3.14159

### Included Methods : 
- squareParameter
- circleParameter
- rectengleParameter

### Included Shapes : 
- Square
- Circle
- Rectangle

More will be added soon!!

## Methods
- ### Square Parameter Method
	- **Name** : squareParameter
	- **Type** : void
	- **Attributes** : none
	- **Variables** : 2 Varialbles
		- **side**
			- **Type** : int
			- **Description** : stores user input of side value	
		- **parameter**
			- **Type** : float
			- **Description** : stores value of parameter
	- **Description** : Takes input of square side and calculates parameter of square

- ### Rectangle Parameter Method
	- **Name** : rectangleParameter
	- **Type** : void
	- **Attributes** : none
	- **Variables** : 3 Varialbles
		- **sideOne**
			- **Type** : int
			- **Description** : stores user input of side One value	
		- **sideTwo**
			- **Type** : int
			- **Description** : stores user input of side Two value	
		- **parameter**
			- **Type** : float
			- **Description** : stores value of parameter
	- **Description** : Takes input of rectangle sides and calculates parameter of rectangle

- ### Circle Parameter Method
	- **Name** : circleArea
	- **Type** : void
	- **Attributes** : none
	- **Variables** : 2 Varialbles
		- **radius**
			- **Type** : int
			- **Description** : stores user input of radius value	
		- **parameter**
			- **Type** : float
			- **Description** : stores value of parameter
	- **Description** : Takes input of circle radius and calculates parameter of rectangle
