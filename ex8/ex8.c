#include<stdio.h>

int main(int argc, char *argv[]){
	int i =0;

	if(argc ==1){
		printf("You only have one argument. You suck.\n");
	
	}else if (argc >1 && argc <4){
		for(i =0;i<argc;i++){
			printf("Here's your arguments:\n");
		}
		printf("\n");
	} else {
		printf("You have too many argument. You suck.\n");
	}
	
	return 0;

}
