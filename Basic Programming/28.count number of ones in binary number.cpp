#include <iostream>
using namespace std;

int main()
{
      int T,n;
      cin>>T;
      while(T--){
      	int c=0;
      cin>>n;
        while(n)
        {
            n = n & (n-1);
            c++;
        }
        cout<<c<<endl;
      }
}


#include <stdio.h>
#include <limits.h>

int CountOnesFromInteger(unsigned int);

int main()
{
    unsigned int inputValue;
    short unsigned int onesOfValue;
    printf("Please Enter value (between 0 to 4,294,967,295) : ");
    scanf("%u",&inputValue);
    onesOfValue = CountOnesFromInteger(inputValue);

    printf("\nThe Number has \"%d\" 1's and \"%zu\" 0's",onesOfValue,sizeof(int)*CHAR_BIT-onesOfValue);
    return 0;
}








/**
 * C program to count total number of zeros and ones in a binary number using bitwise operator
 */
 
#include <stdio.h>
#define INT_SIZE sizeof(int) * 8 //Total number of bits in integer
 
int main()
{
    int num, temp, zeros, ones, i;
 
    //Reads a number from user
    printf("Enter any number: ");
    scanf("%d", &num);
 
    temp = num;
    zeros = 0;
    ones = 0;
 
    for(i=0; i<INT_SIZE; i++)
    {
        //If LSB is set then increment ones otherwise increment zeros
        if(temp & 1)
            ones++;
        else
            zeros++;
 
        //Right shift bits of temp to one position
        temp >>= 1;
    }
 
    printf("Total number of zeros bits is %d (in %d byte integer representation)\n", zeros, sizeof(int));
    printf("Total number of ones bits is %d (in %d byte integer representation)", ones, sizeof(int));
 
    return 0;
} 