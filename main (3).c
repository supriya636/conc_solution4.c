
#include <stdio.h>

int main()
{
    int i, n;
    float m, v, c;

    printf("Enter number of samples: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("Enter mass and volume for sample %d: ", i);
        scanf("%f %f", &m, &v);

        c = m / v;

        printf("Concentration = %f\n", c);
    }

    return 0;
}