#include <stdio.h>
#include <stdlib.h>

unsigned  NumberOne = 055;                            /*number of hexa*/
unsigned  NumberTwo = 20u ;                           /*number of unsigned*/
unsigned  Result;

int main()
{
    Result = NumberOne + NumberTwo ; printf ("Result =%i \n" ,Result);
    Result = NumberOne - NumberTwo ; printf ("Result =%i \n" ,Result);
    Result = NumberOne * NumberTwo ; printf ("Result =%i \n" ,Result);
    Result = NumberOne / NumberTwo ; printf ("Result =%i \n ",Result);
    Result = NumberTwo + NumberTwo ; printf ("Result =%i \n ",Result);
    Result = NumberTwo - NumberTwo ; printf ("Result =%i \n ",Result);
    NumberOne++ ; printf ("NumberOne =%i \n ", NumberOne );
    ++NumberOne ; printf ("NumberOne =%i \n ", NumberOne );

    return 0;
}
