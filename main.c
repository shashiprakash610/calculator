#include<stdio.h>
#include"add.c"
#include"sub.c"
#include"mult.c"
#include"div.c"
#include"input.c"
#include"output.c"
void printOptions();
void askForFirstNumber();
void askForSecondNumber();
int main() {
	int option;
	do {
		printOptions()
		option = readANumber()
		switch(option) {
			case 1:
				askForFirstNumber();
				int firstNumber = input();
				askForSecondNumber();
				int secondNumber = input();
				output(add(firstNumber, secondNumber));
			break;
			case 2:
			break;
			case 3:
			break;
			case 4:
			break;
			case 5:
			break;
			default:
				printf("%s\n", "You have choosen a wrong option");
			break;
		}

	} while (option != 5);
}

void printOptions() {
	printf("%s\n", "What you wanna perform");
	printf("%s\n", "1. Add");
	printf("%s\n", "2. Sub");
	printf("%s\n", "3. Mult");
	printf("%s\n", "4. Div");
	printf("%s\n", "5. Exit");
}

void askForFirstNumber() {
	printf("%s\n", "Enter first Number");
}

void askForSecondNumber() {
	printf("%s\n", "Enter second Number");
}