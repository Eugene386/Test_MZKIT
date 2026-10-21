#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


double recursive_helper(int N, int k) {
	double product = (pow(k, 2) / pow(N, 2)) * cos(pow(N, 2) / pow(k, 2));
	if (k == N) {
		return product;
	}
	else
	{
		return product * recursive_helper(N, k + 1);
	}
}

double calculate_product(int N) {
	return recursive_helper(N, 1);
}

double calculate_iterative(int N) {
	double product = 1.0;

	for (int k = 1; k <= N; k++) {
		double current_element = (pow(k, 2) / pow(N, 2)) * cos(pow(N, 2) / pow(k, 2));
		product *= current_element;
	}

	return product;
}

int main() {
	int N;

	printf("=== Lab Work: Calculating the Product ===\n");
	printf("Enter a positive integer N: ");

	if (scanf("%d", &N) != 1 || N <= 0) {
		printf("\nError Please enter a valid integer greater than 0.\n");
		return 1;
	}

	double result_iterative = calculate_iterative(N);

	double result_recursive = calculate_product(N);

	printf("\n=== Calculation Results ===\n");
	printf("Value of N: %d\n", N);
	printf("Result (iterative method): %.6f\n", result_iterative);
	printf("Result (recursive method): %.6f\n", result_recursive);
	printf("============================\n");

	return 0;
}