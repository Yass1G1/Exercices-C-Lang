#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Guessing game in C, the goal is to find the number chosen by the computer, which is a number between 1 and 100, good luck !!


int main()
{
	int mysteryNum = 0;
	const int MAX = 100, MIN = 1;
	int inputNum = 0;
	int compteur = 0;

	srand(time(NULL));
	mysteryNum = (rand() % (MAX - MIN + 1)) + MIN;

	printf("Entrez un nombre entre %d et %d : ", MIN, MAX);
	scanf_s("%d", &inputNum);

	while (inputNum != mysteryNum)
	{
		if (inputNum > mysteryNum)
		{
			printf("Descend un peu...\n");
			compteur++;
			printf("\nTentative numero %d : ", compteur);
			scanf_s("%d", &inputNum);
		}
		else if (inputNum < mysteryNum)
		{
			printf("Monte un peu...\n");
			compteur++;
			printf("\nTentative numero %d : ", compteur);
			scanf_s("%d", &inputNum);
		}

	}
	printf("Bien joue le couz t'a trouver, le nombre etait %d \n", inputNum);

	static int choice = 2;

	printf("\nTu veux rejouer ?\n\t1. Oui\n\t2. Non\nTon choix ? : ");
	scanf_s("%d", &choice);

	switch (choice)
	{
	case 1:
		printf("\nEt zeee partiiii !\n\n");
		main();
		break;
	case 2:
		printf("\nAzy alors, a une prochaine le couz !\n\n");
		break;
	default:
		printf("Peux aps t'aider bg \n");
		break;
	}

	return 0;

};

