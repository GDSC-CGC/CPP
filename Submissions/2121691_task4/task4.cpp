#include <stdio.h>  
#include <conio.h>  
void main()  
{  
    int num, i, sum = 0; 
    printf("Enter a positive number : ");  
    scanf("%d", &num); 
    i = 0;  
    while (i <= num) 
    {  
        sum = sum + i;  
        i++; 
    }  
  
    printf(" \n Sum of first %d natural number is : %d", num, sum);  
    getch();  
}  
