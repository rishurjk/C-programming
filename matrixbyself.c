#include<stdio.h>
int main(){
	int numbers[9];
	printf("Enter nine integers:\n");
	
	for(int i = 0; i < 9; i++){
		scanf("%d", &numbers[i]);
	}
	
	for(int i = 0; i < 9; i++){
		printf("%d", numbers[i]);
		
		if (i % 3 != 2){
			printf(", ");
		}
		else {
			printf("\n");
		}
	}
}
