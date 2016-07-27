/* Amanda Cuevas - Identifies whether a string has all unique characters, or whether there is only one of each character in the string. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char string[100];
		printf("Please enter a string under 100 characters long.\n");
		fgets(string,sizeof(string),stdin);
		/* ^ allows for user to input string */
	int index;
	int i = strlen(string);
	int index2;
	int eccentric=1;
	for(index=0;index<i;index++) {
		for(index2=index+1;index2<i;index2++) {
			if (string[index2]==string[index]) {
				eccentric = 0;
				break;
			}
		}
	}
if(eccentric==0) {
	printf("This string is not unique.\n");
	} 

	if(eccentric==1) {
		printf("This string is unique.\n");
	}


return 0;
}

