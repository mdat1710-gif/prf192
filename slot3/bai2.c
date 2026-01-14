#include <stdio.h>
int main()
{
	char kt = 'a';
	printf ("%-20s |%-20s |%-20s |%-20s |%-20s |%-20s\n", "ten bien", "gia tri", "dec", "hex", "oct", "size");
	printf ("%-20s |%-20c |%-20d |%-20x |%-20o |%-20d", "kt", kt, kt, kt, kt, sizeof(kt));
	}