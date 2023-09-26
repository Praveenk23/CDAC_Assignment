#include<stdio.h>
#include<stdlib.h>
#define PI 3.14
void menu(){
	printf("1. Circle\n");
	printf("2. Rectangle\n");
	printf("0. Exit\n");
}

void areaCircum(float * radius, float *cir, float *area){
	*cir = 2 * PI * (*radius);
	*area = PI * (*radius) * (*radius);
}

void areaPeri(float * length, float * breath, float *area, float *peri){
	*peri = 2 * ((*length) + (*breath));
	*area = (*length) * (*breath);
}
	
int main(){
	int option;
	float area, cir, peri, rad, len, bre;cd
	while(1){
		printf("Choose your option: \n");
		menu();
		scanf("%d",&option);
		if(option == 1){
			printf("Enter radius of circle: \n");
			scanf("%f", &rad);
			areaCircum(&rad, &cir, &area);
			printf("Area = %f\nCircumference = %f\n",area, cir);
			printf("-----------------------------------------\n");
		}
		else if(option == 2){
			printf("Enter length and breath of a rectangle: \n");
			scanf("%f%f", &len, &bre);
			areaPeri(&len, &bre, &area, &peri);
			printf("Area = %f\nPerimeter = %f\n",area, peri);
			printf("-----------------------------------------\n");
		}
		else if(option == 0){ exit(0);}
		else{
			printf("Invalid Input!!!\n");
			continue;
		}
	}
	
}	
