#include <stdio.h>
#include <cs50.h>

int main(void)
{
 //get answers from user
    int x= get_int("x: ");
    int y= get_int("y: ");
 
 //compare x and y
if (x>y)
{
    printf("x bigger than y\n");
}

else if (x<y)
{
    printf("x less than y\n");
}
else
{
    printf("x is equal to y\n");
}
}