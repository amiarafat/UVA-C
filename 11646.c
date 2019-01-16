#include<stdio.h>
#include<math.h>
int main()
{
    double a, b, c,r,th;
    int t = 1;
 while (scanf("%lf : %lf", &a, &b) == 2)
 {
    th = atan(b / a);
    r = a / 2 * a / 2 + b / 2 * b / 2;
    c = 400 / (2 * a + 4 * th * sqrt(r));
    printf("Case %d: %.10f %.10f\n", t++, a * c, b * c);
 }
 return 0;
}
