#include <stdio.h>

int main(){
	int start;

	printf("Please count");
	printf("1 to 100");
	scanf("%d", &start);

	do{
		printf("T minus %d\n",start);
		start--;
	}
	while(start <1 || start>100);

	printf("Zero!\n Blast off!\n");
	return 0;


}
