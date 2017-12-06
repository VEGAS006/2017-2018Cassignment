/*This program is for calculate a positive integer's digits and if it is a perfect squares or not*/
#include<stdio.h>
int main(){
    int interger,i,j,digits,n;
	i=0;                        //'i' is a parameter to if the function run in the second for looping
	digits=0;
	j=1;
		scanf("%d",&interger);
		n=interger;       //use n to replace the interger,cause in the following code the intergr will change
			for(;;){
			 if(n>0){        //divided by 10 at a time,then we could how many times it has been divided to let n become smaller than 10
		     n=n/10;
			 digits++;    // "++" is for counting how many times n has been divided
		    }
			else{
			 break;
		    }
	        }
printf("The digits of the interger is %d\n",digits);
	
	
	for(j=1;j<=interger;j++){
		if(interger==j*j){      //to check if the munber have two same factors or not
printf("This positive integer is a perfect squares\n");
	    i=1;             //once if looping was done, than the i will become 1, and the next 'printf' below will not operate
		break;
	    }
	}
		if(i!=1){    // if the for looping was not be done , 'i' will not equal to 1
printf("This positive integer is not a perfect squares\n");
	    }

}