#include<stdio.h>

float interest(float p, float r,float t)
{
	return((p*r*t)/100);
}

main()
{
	float p,r,t,si;
	printf("Enter the P, R, T :\n");
	scanf("%f%f%f",&p,&r,&t);
	si=interest(p,r,t);
	printf("The Simple Interest is %f",si);
}
