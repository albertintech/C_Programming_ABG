/* This is a sample program that lists three kids and their school supply needs, as well as costs to buy the supplies. */

#include <stdio.h>

int main()
{
	// Set up the vaiables and define a few
	
	char firstInitial, middleInitial;
	int number_of_pencils;
	int number_of_notebooks;
	float pencils = 0.23;
	float notebooks = 2.89;
	float lunchbox = 4.99;
	
	// first kiddo
	firstInitial = 'J';
	middleInitial = 'R';
	number_of_pencils = 7;
	number_of_notebooks = 4;
	
	printf("%c%c needs %d pencils, %d notebooks, and 1 lunchbox\n", firstInitial, middleInitial, number_of_pencils, number_of_notebooks);
	printf("The total cost is $%.2f\n\n", number_of_pencils * pencils + number_of_notebooks * notebooks + lunchbox);
	
	// second kiddo
	firstInitial = 'A';
	middleInitial = 'E';
	number_of_pencils = 10;
	number_of_notebooks = 3;
	
	printf("%c%c needs %d pencils, %d notebooks, and 1 lunchbox\n", firstInitial, middleInitial, number_of_pencils, number_of_notebooks);
	printf("The total cost is $%.2f\n\n", number_of_pencils * pencils + number_of_notebooks * notebooks + lunchbox);
	
	// third kiddo
	firstInitial = 'N';
	middleInitial = 'R';
	number_of_pencils = 9;
	number_of_notebooks = 2;
	
	printf("%c%c needs %d pencils, %d notebooks, and 1 lunchbox\n", firstInitial, middleInitial, number_of_pencils, number_of_notebooks);
	printf("The total cost is $%.2f\n\n", number_of_pencils * pencils + number_of_notebooks * notebooks + lunchbox);
	
	return 0;
}