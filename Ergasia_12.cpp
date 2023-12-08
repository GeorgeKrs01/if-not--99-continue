#include <stdio.h>
#include <stdlib.h>

int main(void){
	int x;
	int min = 99;
	int max = -99;
	int length = 0;
	float sum = 0;
	float average;
	
	do{
		printf("Enter an integer between +99 and -99: ");
		scanf("%d", &x);
		
		if(x >= -98 && x <= 99){
			printf("You entered: %d \n", x);
		
			//update of the length
			length++;
			
			
		} else if(x == -99){
			printf("Exit \n");
			break;
		}else {
			printf("Your input is not correct. \n");
		}
		
		if(x < min){
			min = x;
		}
		
		if(x > max){
			max = x;
		}
		
		sum = sum + x;
		
		average = sum / length;
		
		
	}while(x != -99);
	
	printf("Minimum entered value: %d\n", min);
	
	printf("Maximum entered value: %d\n", max);
	
	printf("Length of entered values: %d\n", length);
	
	printf("Sum of all the values: %.0f\n", sum);
	
	printf("Average of all the values: %.2f\n", average);
}
