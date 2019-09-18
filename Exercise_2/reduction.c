#include "reduction.h"
#include <stdio.h>


double calculateReduction(double price, double percentage) {
	return price * ((100.0 - percentage) / 100.0);
}



void reduction() {
	double initialPrice, reductionPercentage, finalPrice;

	printf("Please enter the price : ");
	scanf_s("%lf", &initialPrice);

	printf("Please enter the reduction (in percentage) : ");
	scanf_s("%lf", &reductionPercentage);

	finalPrice = calculateReduction(initialPrice, reductionPercentage);

	printf("Final price is %.2lf\n", finalPrice);

}