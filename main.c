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
typedef struct numberPair
{
	int firstNumber;
	int secondNumber;
}numberPair;
numberPair readANumberPair();
int main() {
	int option;
	do {
		printOptions();
		option = readANumber();
		numberPair pair;
		switch(option) {
			case 1:
				pair = readANumberPair();
				writeANumber(add(pair.firstNumber, pair.secondNumber));
			break;
			case 2:
				pair = readANumberPair();
				writeANumber(sub(pair.firstNumber, pair.secondNumber));
			break;
			case 3:
				pair = readANumberPair();
				writeANumber(mult(pair.firstNumber, pair.secondNumber));
			break;
			case 4:
				pair = readANumberPair();
				writeANumber(div(pair.firstNumber, pair.secondNumber));
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

numberPair readANumberPair() {
	askForFirstNumber();
	int firstNumber = readANumber();
	askForSecondNumber();
	int secondNumber = readANumber();
	numberPair pair;
	pair.firstNumber = firstNumber;
	pair.secondNumber = secondNumber;
	return pair;
}
