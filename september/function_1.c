#include<stdio.h>
#include<math.h>

float Cir_diameter(float radius);
float Cir_circumference(float radius);
float Cir_area(float radius);

int main()
{
    float radius,dia,circ,area;

    printf("enter radius of circle: ");
    scanf("%f",&radius);

    dia = Cir_diameter(radius);
    circ = Cir_circumference(radius);
    area = Cir_area(radius);

    printf("diameter of the circle is %.2f\n", dia);
    printf("circumference of the circle is %.2f\n", circ);
    printf("area of the circle is %.2f\n", area);

    return 0;
}


float Cir_diameter(float radius)
{
    return (2 * radius);
}


float Cir_circumference(float radius)
{
    return (2 * M_PI * radius);
}


float Cir_area(float radius)
{
    return (M_PI * radius * radius);
}
