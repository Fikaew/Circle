#include<stdio.h>
#include<math.h>
#define pi  22/7.f
#define two 2.f
struct Circle
{
	float radius;
	float area;
	float perimeter;
};
float calArea(Circle radius);
float calPerimeter(Circle radius);
int main()
{
	int n;
	printf("Insert Quantity of Radius : ");
	scanf_s("%d", &n);
	Circle wongklom[100];
	for (int i = 0; i < n; i++)
	{
		printf("Insert Radius #%d : ", i+1);
		scanf_s("%f", &wongklom[i].radius);
		if (wongklom[i].radius < 0 || wongklom[i].radius > sqrt(3.4 * pow(10, 38)))
		{
			printf("\nError");
			break;
		}
		printf("Area : %.4f\n", calArea(wongklom[i]));
		printf("Perimeter : %.4f\n", calPerimeter(wongklom[i]));

	}

	return 0;
}

float calArea(Circle wongklom)
{	
	wongklom.area = pi * wongklom.radius * wongklom.radius;
	return wongklom.area;
}

float calPerimeter(Circle wongklom)
{
	wongklom.perimeter = two * pi * wongklom.radius;
	return wongklom.perimeter;
}
