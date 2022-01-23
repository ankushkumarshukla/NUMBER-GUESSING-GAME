#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int number, guess, nguesses;
	srand(time(0));
	number= rand()%100+1;
	do{
		printf ("enter guess number between 1 to 100\n");
		scanf ("%d",&guess);
		if (guess>number){
			printf (" enter lower number\n");	
		}
		else if(guess<number){
			printf("enter highest number\n");
		}
		else{
			printf ("you guessed it in %d attempts\n", nguesses);
		}
		nguesses++;
	}while(guess!=number);
	return 0;
}

