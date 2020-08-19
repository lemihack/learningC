#include<stdio.h>

int main(){
	FILE *fptr;
	int number = 5845;
	fptr = fopen("generated.txt","w");
	fprintf(fptr,"The number is %d",number);
	fclose(fptr);

	return 0;
}
