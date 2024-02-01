// Viezba02.c : This file contains the 'main' function. Program execution begins and ends there.
// Promenljive
#include <stdio.h>
int main()
{
	char celi8 = 123; // -128 do 127
	short int celi16 = 12345; // -32768 do 32767
	int celi32 = 1234567890; // -2147483648 do 2147483647
	long int lceli32 = 1234567890; // -9223372036854775808 do 9223372036854775807
	long long int celi64 = 1234567890123456789; // -9223372036854775808 do 9223372036854775807
	unsigned char uc8 = 255; // 0 do 255
	printf("uc8 = %d\n", uc8);
	celi8 = celi16;
	printf("celi8 = %d\n", celi8);
}
// CTrl +F7 - kompajliranje -> OBJ
// Ctrl + B - kompajliranje i linkovanje ->EXE
// Ctrl + F5 - pokretanje bez debagera
// F5 - pokretanje sa debagerom

