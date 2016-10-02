/*
 * =====================================================================================
 *
 *       Filename:  equations.c
 *
 *    Description:  This C source file includes definitions for the following functions:
 *    		    double calculate_newtons_2nd_law (double mass, double acceleration)
 *       	    double calculate_volume_cylinder (double radius, double height)
 *       	    char perform_character_encoding (char plaintext_character, int shift)
 *       	    double calculate_parallel_resistance (int r1, int r2, int r3)
 *      	    double calculate_resistive_divider (int r1, int r2, double vin)
 *         	    double calculate_distance_between_2pts (double x1, double x2, double y1, double y2)
 *       	    double calculate_general_equation (int a, double x, double z)
 *
 *        Version:  1.0
 *        Created:  9/9/2016 2:57:14 PM
 *       Revision:  none
 *       Compiler:  msft c
 *
 *         Author:  Edgar Perez
 *   Organization:  Washington State University
 *
 * =====================================================================================
 */

#include 	"equations.h"

/* Function 1: Newton's Second Law */
double calculate_newtons_2nd_law(double mass, double acceleration){
	double force = mass * acceleration;
	return force;
}

/* Function 2: Volume of a Cylinder */
double calculate_volume_cylinder(double radius, double height){
	double volume = PI * (pow(radius,POWER)) * height;
	return volume;
}

/* Function 3: Character Encoding */
char perform_character_encoding(char plaintext_character, int shift){
	char encode = (plaintext_character - 'A') + 'a' - shift;
	return encode;
}

/* Function 4: Parallel Resistance */
double calculate_parallel_resistance(int resistorOne, int resistorTwo, int resistorThree){
	double resistance = ONE / ((ONE / (double)resistorOne) + (ONE / (double)resistorTwo) + (ONE / (double)resistorThree));
	return resistance;
}

/* Function 5: Resistive Divider */
double calculate_resistive_divider(int resistorOne, int resistorTwo, double V_in){
	double division = (double)(resistorTwo / (double)(resistorOne + resistorTwo)) * V_in;
	return division;
}

/* Function 6: Distance Formula */
double calculate_distance_between_2pts(double x1, double x2, double y1, double y2){
	double distance = sqrt( pow( (x1 - x2), POWER ) + pow( (y1 - y2), POWER ));
	return distance;
}

/* Function 7: General Equation */
double calculate_general_equation (int a, double x, double z){
	double y = (double)(-x * ((double)3/(double)4) - z + (double)a) / (a % POWER);
	return y;
}

/* ===================================================================================== */

void division_joy(void){
	printf("=====================================================================================\n\n");
}
