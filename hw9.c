#include <stdio.h>

void convCase(char* str);


int main(void)
{
	char input[100];
	printf("Input>");
	fgets(input, sizeof(input), stdin);

	for (int i = 0; input[i] != '\0'; i++) {
		if (input[i] == '\n') {
			input[i] = '\0';
			break;
		}
	}

	convCase(input);
	printf("Output>%s", input);

	return 0;
}

void convCase(char* str) {
	int diff = 'a' - 'A';

	for(int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] = str[i] - diff;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + diff;
		}
	}
}