#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void write_file(char *file_path, char* str) {
	FILE* f;
	f = fopen(file_path, "a");

	if (f == NULL) {
		printf("Error opening file");
		return;
	}
	
	fprintf(f, "%s\n", str);
	fclose(f);
	return;
}

void read_file(char* file_path) {
	FILE* f;
	f = fopen(file_path, "r");

	if (f == NULL) {
		printf("Error opening file");
		return;
	}

	char data[10][100];
	int count = 0;
	int player = 1;

	while (fgets(data[count], sizeof(data[count]), f) != NULL) {
		count++;
		if (count == 10) {
			printf("Games: %s", data[9]);
			if (atoi(data[9]) > 50) {
				printf("\n");
				printf("========================================\n");
				printf("           FOOTBALL PLAYER #%d\n", player++);
				printf("========================================\n");
				printf("Surname:       %s", data[0]);
				printf("First name:    %s", data[1]);
				printf("Patronymic:    %s", data[2]);
				printf("Date of birth: %s.%s.%s", data[5], data[4], data[3]);
				printf("Phone:         %s", data[6]);
				printf("Team:          %s", data[7]);
				printf("Goals:         %s", data[8]);
				printf("Games played:  %s", data[9]);
				printf("========================================\n");
			}
			count = 0;
		}
	}

	fclose(f);
	return;
}

void menu() {
	printf("\n1. Add football player\n");
	printf("2. Show football players with more than 50 games\n");
	printf("0. Exit\n");
	printf("Your choice: ");
}

void program_start() {
	char file_path[] = "C:\\Users\\Mouse\\Desktop\\Test.txt";

	char input[100], buffer[100];
	int input_int, choice;

	do {
		menu();
		scanf("%d", &choice);
		if (choice == 1) {
			printf("Enter surname: ");
			scanf("%99s", input);
			write_file(file_path, input);

			printf("Enter first name: ");
			scanf("%99s", input);
			write_file(file_path, input);

			printf("Enter patronymic: ");
			scanf("%99s", input);
			write_file(file_path, input);

			printf("Enter birth year: ");
			scanf("%d", &input_int);
			sprintf(buffer, "%d", input_int);
			write_file(file_path, buffer);

			printf("Enter birth month: ");
			scanf("%d", &input_int);
			sprintf(buffer, "%d", input_int);
			write_file(file_path, buffer);

			printf("Enter birth day: ");
			scanf("%d", &input_int);
			sprintf(buffer, "%d", input_int);
			write_file(file_path, buffer);

			printf("Enter phone number: ");
			scanf("%99s", input);
			write_file(file_path, input);

			printf("Enter team name: ");
			scanf("%99s", input);
			write_file(file_path, input);

			printf("Enter number of goals: ");
			scanf("%d", &input_int);
			sprintf(buffer, "%d", input_int);
			write_file(file_path, buffer);

			printf("Enter number of games played: ");
			scanf("%d", &input_int);
			sprintf(buffer, "%d", input_int);
			write_file(file_path, buffer);
		}
		else if (choice == 2) {
			read_file(file_path);
		}
	} while (choice != 0);
}

int main() {
	program_start();
	return 0;
}