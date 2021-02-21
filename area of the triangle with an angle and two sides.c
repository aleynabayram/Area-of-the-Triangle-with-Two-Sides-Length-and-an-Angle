/*The code calculates the area of the triangle with the two sides length and the angle between the two sides*/
#include<stdio.h>
#include<math.h>
#define PI 3.14159265

int main(){
	
	float first_side_length;
	float second_side_length;
	float degree;
	float radian;
	float area;
	
	printf("Please enter the angle between the two sides of the triangle(degree):");
	scanf("%f",&degree);
	printf("Please enter the first side length of the triangle:");
	scanf("%f",&first_side_length);
	printf("Please enter the second side length of the triangle:");
	scanf("%f",&second_side_length);
	
	radian= PI * degree/180;
	area= (first_side_length*second_side_length*sin(radian))/2;
	
	if(degree>=180){
		printf("You entered the angle value incorrectly because an angle value can not bigger than 180.");
	}
	
	if(degree<=0){
		printf("You entered the angle values incorrectly because an angle value can not be negative or zero .");
	}
	
	if(degree<180 && degree>0) {
		printf("The area of this triangle is %.3f",area);
	}
	
	return 0;
}

