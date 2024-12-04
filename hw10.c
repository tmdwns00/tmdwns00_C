#include <stdio.h>
#include <math.h>

struct City {
	char name[50];
	char country[50];
	int population;
};

int main(void)
{
	struct City cities[3];
	int i;

	printf("Input three cities:\n");

	for (i = 0; i < 3; i++) {
		printf("Name> ");
		scanf_s("%s", cities[i].name, sizeof(cities[i].name));
		printf("Countries> ");
		scanf_s("%s", cities[i].country, sizeof(cities[i].country));
		printf("Population> ");
		scanf_s("%d", &cities[i].population);
	}

	printf("\nPrinting the three cities:\n");
	for (i = 0; i < 3; i++) {
		printf("%d, %s in %s with a population of %d people \n",
			i + 1, cities[i].name, cities[i].country, cities[i].population);
	}

	return 0;
}
