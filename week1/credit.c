#include <stdio.h>

int digit_num(unsigned long long int x)
{
    int counter;
    while(x != 0)
    {
        x /=10;
        counter++;        
    }
    return(counter);
}

int check_sum(unsigned long long int y)
{
    int result1 = 0;
    int result = 0;
    
    while(y > 0)
    {
        result1 = 0;
        result1 = y%10;
        result += result1;
        y /=10;
        result1 == 0;
        result1 = ((y % 10)*(2));
         if(result1 > 9)
        {
            result1 = ((result1 % 10) + (result1 / 10));
        }
        result += result1;
        y /=10;
    }
    return(result);
}

int check_visa(unsigned long long int z)
{
    int result1 = 0;
    while(z > 0)
    {
        result1 = z%10;
         z /=10;
    }
    return(result1);
}

int main(void)
{
    unsigned long long int creditnum;
    int digitnum;
    int checksum = 0;
    
    printf("Number: ");
    scanf("%llu", &creditnum);
    
    digitnum = digit_num(creditnum);
    checksum = check_sum(creditnum);
    
    if(checksum%10 != 0)
    {
        printf("INVALID\n");
        return(0);
    }
    
    if(digitnum == 15)
    printf("AMEX\n");
    else if(digitnum == 13)
    printf("VISA\n");
    else if(digitnum == 16)
    {
        if(check_visa(creditnum) == 4)
        printf("VISA\n");
        else
        printf("MASTERCARD\n");
    }
    else
    printf("INVALID\n");
    return(0);
}