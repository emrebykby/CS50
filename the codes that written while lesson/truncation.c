#include <cs50.h>
#include <stdio.h>

int main (void)
{
    //get numbers from user
   int x = get_int("x: ");
   int y = get_int("y: ");

   // result of divided is z
   float z = (float) x / (float) y ;

   printf("%f\n", z);

}