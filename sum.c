/* Amanda Cuevas - This program allows the user to input a length and then it will create an array featuring the cumulative sums of them based on numbers inputted by the user */
#include <stdio.h>
#include <math.h>
int main()
	   {
		   int length;
		   int array[length];
	 printf("Please enter a numeral representing the amount of numbers you would like to input.\n");
	 scanf("%d",&length);

	 int n = 0;
	 int sum;
	 int x;
	 int awry[length];
	 int i;
	 int count;
	 		printf("Please enter %d numbers.\n",length);
	 	for(n=0;n!=length;n++) {
			scanf("%d", &array[n]);
				  }

			printf("This is the array you typed in:\n");
			for(n=0;n!=length;n++) {
				printf("%d\n", array[n]);
						}


			printf("Now here is the array of cumulative sums:\n");
			
			for(count=0;count<length;count++) {
				awry[count] = awry[count - 1] + array[count];
				if(awry[count]!=0) {
					printf("%d\n", awry[count]);
			}
							   }
return 0;
	   }
			

