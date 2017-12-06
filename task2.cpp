/*This program is for calculating 2^n + 3^n */
#include <stdio.h>
int main(){
	int power,counter1,counter2,power1,power2,sum;//set values for calculating
		printf ("Please enter a positive integer as the power:"); 
		scanf("%d", &power); 
			counter1=1;//set for calculating 2^n
			counter2=1;//set for calculating 3^n
			power1=1;//set for calculating 2^n
			power2=1;//set for calculating 3^n
		while(counter1 <=power){//calculate 2^n
			power1=power1*2;
		    counter1++;
		}
		while(counter2 <=power){//calculate 3^n
			power2=power2*3;
		    counter2++;
		}
	sum=power1+power2;
	printf("2^n + 3^n=%d\n",sum);
	return 0;
}

