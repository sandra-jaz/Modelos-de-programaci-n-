/*
 * ESTRUCTURA DE DATOS Y ALGORITMOS I
 * FACULTAD DE INGENIERÍA, UNAM, 2021-2
 * A S S I G N M E N T   02
 * DETERMINE IF A YEAR IS A LEAP YEAR.
 *
 * Instructions:
 * Write an algorithm to calculate whether a given year
 * will be a leap year or not. 
 * Modify the function 'is_leap_year' such that it returns '1'
 * if the argument 'year' is a leap year, and '0', otherwise.
 * MODIFY ONLY THE SECTION MARKED WITH THE 'TODO' COMMENT
 * DON'T MODIFY THE MAIN FUNCTION AND DON'T CHANGE THE FUNCTION NAMES.
 * DON'T ADD ANY 'printf' FUNCTION.
 */

#include <stdio.h>
#include <stdlib.h>

int is_leap_year(int year)
{
    /*
     * TODO:
     * Write the code to determine whether 'year' is a leap year or not.
     * Return '1' if it is leap year and '0' otherwise.
     */
	if(year%4==0 && year%100!=0 || year%400==0)
		return 1;
	else 
		return 0;
}

int main(int argc, char** argv)
{
    if(argc < 2)
    {
        printf("Too few parameters.\n");
        return 0;
    }
    if(is_leap_year(atoi(argv[1])))
	printf("True\n");
    else
	printf("False\n");
    return 0;
}
