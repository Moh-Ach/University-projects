#include <stdio.h>
#include <math.h>

int main() 
{
double a, b, c, dilta, root1, root2;
printf("enter the moamelat a, b, c .\n");

/*read the coefficients of the quadratic equation*/
printf("a:");
scanf("%lf", &a);
printf("b: ");
scanf("%lf",  &b);
printf("c: ");
scanf("%lf", &c);
dilta = b * b - 4 * a * c;
if (dilta > 0)
{
    /*the equation has 2 solutions*/
    root1 =(-b + sqrt(dilta)) / (2 * a);
    root2 = (-b - sqrt(dilta)) / (2 * a);
    printf("the first solution = .%2lf\n", root1);
    printf("the second solution = .%2lf\n", root2);
}
else if (dilta == 0)
{
    /*the equation has 1 solution*/
    root1 = root2 = -b / (2 * a);
    printf("they have one solution = %2lf\n", root1);
}
else
{
    /*no solution*/
    printf("the equation has no solution");
}
return 0;
}