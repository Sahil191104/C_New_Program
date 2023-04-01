#include<stdio.h>

float areaofrectangle() {
	float l, h, area;
	
	printf("Please enter the lenght and height of rectangle: ");
	scanf("%f %f", &l, &h);
	
	area = l * h;
	
	return area;
}
int main() {
	float res, res1;
	
	res = areaofrectangle();
	printf("Area of rectangle: %.2f\n", res);
	
	res1 = areaofrectangle();
	printf("Area of rectangle: %.2f\n", res1);
	
	return 0;
}
