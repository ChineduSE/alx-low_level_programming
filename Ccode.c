#include <stdio.h>

int main()
{
	char name[50]; //var to store users name
	int cohort; //var to store the user cohort
	float score; //var to get score

	printf("Enter your name: ");
	fgets(name, 50, stdin);

	printf("Which cohort are you?: ");
	scanf("%d", &cohort);


	//Conditions to check and print result based on scores
	
	if (cohort > 0 && cohort < 13)
	{

		  printf("Enter your score: ");
		  scanf("%f", &score);


	if (score > 0 && cohort < 181)
	{

		if(score < 80)
		{
			printf("You failed\n");
		}


		else if (score >= 80 && score < 130 )
		{
			printf("Congratulations %s, You can continue with cohort %d \n", name, cohort);
		}


		else if (score >= 130 && score < 180 )
		{
			int prev = cohort - 1;

			if (prev != 0){

			printf("promoted, you have been promoted to cohort %d \n", prev);
			}
			else
				printf("You are an high flier %s. Keep it up.\n", name);
		}

		else
	
       			printf("Error Baba!! You have ineced the scoring system \n");
	}
		else
			printf("Invalid Score!!\n");
	}
	else 
		printf("Invalid Cohort. Please restart and enter your cohort again!\n");

}
