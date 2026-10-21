#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//MZKIT_lab8 changed

//============================================================================

//void get_triangle_type(double AB, double BC, double AC) {
//	if (AB == BC && BC == AC) {
//		printf("Equilateral");
//	}
//	else if (pow(AC, 2) == (pow(AB, 2) + pow(BC, 2)) ||
//		pow(AB, 2) == (pow(AC, 2) + pow(BC, 2)) ||
//		pow(BC, 2) == (pow(AB, 2) + pow(AC, 2)))
//	{
//		printf("Rectangular");
//	}
//	else if (AB == BC || AB == AC || BC == AC) {
//		printf("Isosceles");
//	}
//	else {
//		printf("Versatile");
//	}
//}
//
//void distance(double aX, double aY, double bX, double bY, double cX, double  cY) {
//	double AB = sqrt(pow((bX - aX), 2) + pow((bY - aY), 2));
//	double BC = sqrt(pow((cX - bX), 2) + pow((cY - bY), 2));
//	double AC = sqrt(pow((cX - aX), 2) + pow((cY - aY), 2));
//	if (AB + BC > AC &&
//		AB + AC > BC &&
//		BC + AC > AB) {
//		get_triangle_type(AB, BC, AC);
//	}
//	else {
//		printf("Not a triangle");
//	}
//}
//
//void start_program() {
//	double aX, aY, bX, bY, cX, cY;
//
//	printf("=== Triangle Type Detector ===\n\n");
//
//	printf("Enter coordinates of vertex A:\n");
//	printf("  X: ");
//	scanf("%lf", &aX);
//	printf("  Y: ");
//	scanf("%lf", &aY);
//
//	printf("\nEnter coordinates of vertex B:\n");
//	printf("  X: ");
//	scanf("%lf", &bX);
//	printf("  Y: ");
//	scanf("%lf", &bY);
//
//	printf("\nEnter coordinates of vertex C:\n");
//	printf("  X: ");
//	scanf("%lf", &cX);
//	printf("  Y: ");
//	scanf("%lf", &cY);
//
//	printf("\nTriangle type: ");
//	distance(aX, aY, bX, bY, cX, cY);
//}

//============================================================================

//============================================================================

//void fill_random_array(int * mas_Number, int length_Mas, int max, int min) {
//	for (int i = 0; i < length_Mas; i++) {
//		mas_Number[i] = rand() % (max - min + 1) + min;
//	}
//}
//
//void show_array(int * mas_Number, int length_Mas) {
//	printf("\nGenerated array:\n");
//	for (int i = 0; i < length_Mas; i++) {
//		printf("%d ", mas_Number[i]);
//	}
//}
//
//int input_number_search() {
//	int user = 0;
//	printf("\n\nEnter a number to search: ");
//	scanf("%d", &user);
//	return user;
//}
//
//void number_found(int * mas_Number, int length_Mas) {
//
//	int user = input_number_search();
//	
//	int found = 0;
//
//	for (int i = 0; i < length_Mas; i++) {
//		if (mas_Number[i] == user) {
//			printf("Number %d is found at position %d", user, i + 1);
//			found = 1;
//			break;
//		}
//	}
//
//	if (found == 0) {
//		printf("Number %d is not found", user);
//	}
//}
//
//void new_Min_Max(int *min, int *max) {
//	printf("Enter the minimum value: ");
//	scanf("%d", min);
//
//	printf("Enter the maximum value: ");
//	scanf("%d", max);
//
//	if (*min > *max) {
//		int temp = *min;
//		*min = *max;
//		*max = temp;
//	}
//}
//
//void menu(int *choice) {
//	printf("===Array Generator===\n");
//	printf("1 - Change the range\n");
//	printf("0 - Use the default range [-20; 20]\n");
//	printf("Your choice: ");
//	scanf("%d", choice);
//}
//
//void start_program() {
//	int mas_Number[20];
//	int length_Mas = 20, min = -20, max = 20;
//	int choice;
//	srand(time(NULL));
//
//	menu(&choice);
//
//	if (choice == 1) {
//		new_Min_Max(&min, &max);
//	}
//	else if (choice != 0) {
//		printf("Invalid choice. Using default range.\n");
//	}
//
//	fill_random_array(mas_Number, length_Mas, max, min);
//
//	show_array(mas_Number, length_Mas);
//
//	number_found(mas_Number, length_Mas);
//}

//============================================================================

//============================================================================

//void fill_random_array(int mas_Number[][10], int length_Mas, int max, int min) {
//	for (int i = 0; i < length_Mas; i++) {
//		for (int j = 0; j < length_Mas; j++) {
//			mas_Number[i][j] = rand() % (max - min + 1) + min;
//		}
//	}
//}
//
//void show_array(int mas_Number[][10], int length_Mas) {
//	for (int i = 0; i < length_Mas; i++) {
//		for (int j = 0; j < length_Mas; j++) {
//			printf("[%d]\t", mas_Number[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int input_row_number(int length_Mas) {
//	int userP;
//
//	do {
//		printf("\nEnter row index to sort 1-%d: ", length_Mas);
//		scanf("%d", &userP);
//		if (userP < 1 || userP > length_Mas) {
//			printf("Invalid input!");
//		}
//	} while (userP < 1 || userP > length_Mas);
//	return userP - 1;
//}
//
//void sort_array(int mas_Number[][10], int length_Mas, int *perm_count) {
//	int userP = input_row_number(length_Mas);
//
//	for (int i = 0; i < length_Mas - 1; i++) {
//		for (int j = 0; j < length_Mas - 1 - i; j++) {
//			if (mas_Number[userP][j] < mas_Number[userP][j + 1]) {
//				int temp = mas_Number[userP][j];
//				mas_Number[userP][j] = mas_Number[userP][j + 1];
//				mas_Number[userP][j + 1] = temp;
//				(*perm_count)++;
//			}
//		}
//	}
//}
//
//void menu(int *choice) {
//	printf("=== Array Generator ===\n");
//	printf("1 - Change the range\n");
//	printf("0 - Use the default range [-20; 20]\n");
//	printf("Your choice: ");
//	scanf("%d", choice);
//}
//
//void new_min_max(int *min, int *max) {
//	printf("Enter the minimum value: ");
//	scanf("%d", min);
//	printf("Enter the maximum value: ");
//	scanf("%d", max);
//
//	if (*min > *max) {
//		int temp = *min;
//		*min = *max;
//		*max = temp;
//	}
//}
//
//void start_program() {
//	int mas_Number[10][10];
//	int length_Mas = 10, min = -20, max = 20;
//	int choice, perm_count = 0;
//	srand(time(NULL));
//
//	menu(&choice);
//
//	if (choice == 1) {
//		new_min_max(&min, &max);
//	}
//	else if (choice != 0) {
//		printf("Invalid choice. Using default range.\n");
//	}
//
//	fill_random_array(mas_Number, length_Mas, max, min);
//	show_array(mas_Number, length_Mas);
//
//	sort_array(mas_Number, length_Mas, &perm_count);
//	show_array(mas_Number, length_Mas);
//	printf("\nNumber of permutations: %d\n", perm_count);
//}


//============================================================================

int main() {
	start_program();
	return 0;
}