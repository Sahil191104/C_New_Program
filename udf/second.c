#include<stdio.h>

float areaofcircel(float r) {
	float area;
	
	area = 3.14 * r * r;
	
	printf("Area of circle: %f\n", area);
	
}
int main() {

	areaofcircel(5);
	
	areaofcircel(20);
	
	return 0;
}
