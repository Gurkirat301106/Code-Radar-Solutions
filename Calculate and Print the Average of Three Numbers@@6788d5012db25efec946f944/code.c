#include <stdio.h>
int main()
{
    int n1, n2, n3;
    scanf("%d %d %d",&n1, &n2, &n3);
    float avg = (n1 + n2 + n3)/3.0;
    printf("Average: %.2f\n",avg);
    return 0;
}