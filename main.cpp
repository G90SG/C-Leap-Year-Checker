// Calling standard library
#include <iostream>

int main() {
// Declaring the 'year' variable as an integer
  int year;
// Asking the user for the year they would like to check
  printf ("Enter a year after 1752 to find out if it is a leap year: \n");
// Checking input and allocating it to 'year'
  scanf ("%d",& year);
// Creating IF statement to divide by 400, 100, 4 to determine whether it is or is not a leap year
  if (year%400 == 0)
    printf ("%d is a leap year", year);
  else if (year%100 == 0)
    printf ("%d is not a leap year", year);
  else if (year%4 == 0)
    printf ("%d is a leap year", year);
  else
    printf ("%d is not a leap year", year);

return 0;
}
