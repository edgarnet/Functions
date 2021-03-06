/*
 ======================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  This is the driver file for the program.
 *
 *        Version:  1.0
 *        Created:  9/9/2016 3:54:22 PM
 *       Revision:  none
 *       Compiler:  msft c
 *
 *         Author:  Edgar Perez 
 *   Organization:  Washington State University
 *
 * =====================================================================================
 */

#include	"equations.h"

int main(void){

	/* Part 1: Newton's Second Law */
	double mass = 0.0, acceleration = 0.0;
	printf("Please enter the mass and acceleration <both floating-point values> for use in Newton's Second Law: ");
	scanf("%lf %lf", &mass, &acceleration);
	printf("Newton's Second Law: force = mass * acceleration = %lf * %lf = %0.2lf\n\n", mass, acceleration,
			calculate_newtons_2nd_law(mass, acceleration));

	division_joy();

	/* Part 2: Volume of a Cylinder */
	double radius = 0.0, height = 0.0;
	printf("Please enter the radius and height of a cylinder <both floating-point values> for use in a volume of cylinder equation: ");
	scanf("%lf %lf", &radius, &height);
	printf("Volume of a cylinder: volume_cylinder = PI * radius^2 * height = %lf * %lf * %lf = %0.2lf\n\n", PI, pow(radius,POWER), height, 
			calculate_volume_cylinder(radius, height));

	division_joy();	

	/* Part 3: Character Encoding */
	char plaintext_character = ' ';
	int shift = 0;
	printf("Please enter a character for use in character encoding: ");
	scanf(" %c", &plaintext_character);
	printf("Please enter the shift <as an integer value> to complete the character encoding: ");
	scanf("%d", &shift);
	printf("Encoded character: ('%c' - 'A') + 'a' - %d = %c\n\n", plaintext_character, shift,
			perform_character_encoding(plaintext_character, shift));

	division_joy();

	/* Part 4: Parallel Resistance */
	int r1 = 0, r2 = 0, r3 = 0;
	printf("Please enter three resistors <all as integer values> to compute the equivalent parallel resistance: ");
	scanf("%d %d %d", &r1, &r2, &r3);
	printf("Equivalent parallel resistance: 1 / (1 / (Resistor One + 1) / (Resistor Two + 1) / Resistor Three) = 1 / (1 / (%d + 1) / (%d + 1) / %d) = %0.2lf\n\n", r1, r2, r3, 
			calculate_parallel_resistance(r1, r2, r3));

	division_joy();

	/* Part 5: Resistive Divider */
	int resistorOne = 0, resistorTwo = 0;
	double V_in = 0.0;
	printf("Please enter two new resistor values <both as integer values> and voltage input <as a floating-point value> to find the voltage output: ");
	scanf("%d %d %lf", &resistorOne, &resistorTwo, &V_in);
	printf("Voltage Output: voltage_output = Resistor Two / (Resistor One + Resistor Two) * voltage_intput = %d / (%d + %d) * %lf = %0.2lf\n\n", resistorTwo, resistorOne, resistorTwo, V_in,
		       	calculate_resistive_divider(resistorOne, resistorTwo, V_in));

	division_joy();

	/* Part 6: Distance Formula */
	double x1 = 0.0, x2 = 0.0, y1 = 0.0, y2 = 0.0;
	printf("Please enter two coordinates (x1, y1) and (x2, y2) <all as floating-point values> to calculate their distance: ");
	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	printf("Distance: distance_apart = sqrt( (x1 - x2)^2 + (y1 - y2)^2 ) = sqrt( (%lf - %lf)^2 + (%lf - %lf)^2 ) = %0.2lf\n\n", x1, x2, y1, y2,
			calculate_distance_between_2pts(x1, x2, y1, y2));
	
	division_joy();

	/* Part 7: General Equation */
	double x = 0.0, z = 0.0;
	int a = 0;
	printf("Please enter a couple of numbers for 'x' and 'z' <both as floating-point values> to calculate the value of 'y': ");
	scanf("%lf %lf", &x, &z);
	printf("Now enter a constant 'a' <as an integer value> to find the value of 'y': ");
	scanf("%d", &a);
	printf("The value of 'y': y = (-x * (3/4) - z + a / (a %% 2) = (-%lf * (3/4) - %lf + %d) / (%d %% 2) = %0.2lf\n", x, z, a, a,
			calculate_general_equation(a, x, z));

	return 0;
}
