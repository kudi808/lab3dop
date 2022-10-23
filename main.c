#include <stdio.h>
#include "math.h"
#include <windows.h>

int main() {
    double x;

   int n;

    printf("enter the higher degree:");
    scanf("%d",&n);
    printf("enter x:");
    scanf("%lf",&x);
    int a[100];
    int b[100];
    printf("enter the coefs:");
    if (n % 2==0)
    {
        for (int i = n / 2; i > 0; i = i - 1)
        {
            scanf("%d %d", &a[i], &b[i]);
            printf("asfaasa");
        }
        double s = 0.0;
        for (int i = n/2;i>0;i=i-1)
        {
            s-= a[i] * (2*i)*pow(x,2*i-1)/ sqrt(1-pow(x,4*i));

            s+= b[i] * (2*i-1)*pow(x,2*i-2)/ sqrt(1-pow(x,2*(2*i-1)));

        }
        printf("%lf",s);
    }
    else {
        for (int i = n / 2; i > 0; i = i - 1)
        {
            scanf("%d %d", &a[i+1], &b[i]);

        }
        scanf("%d", &a[1]);


     double m =0.0;
    for (int i = n/2;i>0;i--)
    {
        m-= a[i+1] * (2*i+1)*pow(x,2*i)/ sqrt(1-pow(x,2*(2*i+1)));

        m+= b[i] * (2*i)*pow(x,2*i-1)/ sqrt(1-pow(x,2*2*i));


    }
        m-= a[1] * (1)*pow(x,0)/ sqrt(1-pow(x,2));
    printf("%lf",m);

}


return 0;
}
