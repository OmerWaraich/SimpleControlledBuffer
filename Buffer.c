#include <stdio.h>
#define STRLEN 5
int readLine(char c[], int maxlen)
{
	char ch;
	int i;
	int charsRemaning;
	charsRemaning = 1;

	while(charsRemaning){
		ch = getchar();
		if((ch == '\n')||(ch == EOF))
		{
			charsRemaning = 0;
		}
		else if( i < maxlen -1)
		{
			c[i] = ch;
			i++;
		} 
	}
	c[i] = '\0';
	return i;
}
int main()
{
	char firstname[STRLEN];
	char lastname[STRLEN];
	int flen;
	int llen;
	printf("Enter first name :");
	flen = readLine(firstname, STRLEN);
	printf("Enter last name :");
	llen = readLine(lastname, STRLEN);

	printf("Bonjur, %s , %s\n", firstname, lastname );
	printf("firstname length : %d lastname length :%d\n", flen, llen ); 
	// controller buffer with lenght of 5 letters/digits only, remember 5th digit is '\n'

}