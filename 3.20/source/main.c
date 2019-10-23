#include<stdio.h>
#include<stdlib.h>

int main(void) {
	float hours, salary, sum;


	while (1)
	{
		printf("Enter # of hours worked(-1 to end):");
		scanf_s("%f", &hours);
		if (hours == -1)break;
		printf("Enter hourly rate of the worker ($00.00):");
		scanf_s("%f", &salary);
		if (hours > 40) {
			sum = 40 * salary + (hours - 40) * 1.5 * salary;
		}
		else {
			sum = salary * hours;
		}
		printf("The interest charge is $%.2lf\n", sum);
	}

	/*int x, y;

	scanf_s("%d%d",&x,&y);

	for (int i = 0; i < x; i++){
		for (int j = 0; j < y; j++){
			if(j==0||j==y-1||i==0||i==x-1)printf("*");
			else printf(" ");
		}
		printf("\n");
	}*/







	//system("pause");
	return 0;

}