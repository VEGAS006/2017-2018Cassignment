/*This program is for generating a inverted pyramid*/
#include<stdio.h>
int main(){
int i,j;
	for(i=1;i<=6;i++){
		for(j=11;j>=i*2-1;j--){      //set loop to make a inverted pyramid,this loop reduce 2 unit at a time 
		
			if(j%2==1){       //set a 'if' function to make the position in odd  '*'
			printf("*");
			}
			else{
			printf("#");        //set a 'if' function to make the position in odd  '#'
			}
			
			
		}
			printf("\n");      //to have a return at the end of a row
	}




}