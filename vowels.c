/* Amanda Cuevas - Takes a user-inputted string and removes all the vowels from it. It then prints the new vowel-free string afterward. */
#include <stdio.h>
#include <string.h>
int main() 
{
	char chump[100];
	char trump[100];
	printf("Please enter a string smaller than 100 characters.\n");
	fgets(chump,sizeof(chump),stdin);
	int count=0;
	int index = 0;
	int i = strlen(chump);
	for(index=0;index<i;index++) {
	if(chump[index]=='a') {
		continue;
	}
	if(chump[index]=='A') {
		continue;
	}
	if(chump[index]=='e') {
		continue;
	}
	if(chump[index]=='E') {
		continue;
	}
	if(chump[index]=='i') {
		continue;
	}
	if(chump[index]=='I') {
		continue;
	}
	if(chump[index]=='o') {
		continue;
	}
	if(chump[index]=='O') {
		continue;
	}
	if(chump[index]=='u') {
		continue;
	}
	if(chump[index]=='U') {
		continue;
	}	
		
		trump[count]=chump[index];
		count++;
		continue;
	}
	printf("%s\n", trump);

return 0;
}
