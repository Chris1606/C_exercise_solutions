#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    int gt = 1;
    int i = 2;
    if (n == 0 || n == 1) {
        gt = 1;
    } else {
        while (i <= n) {
            gt *= i;
            i++;
        }
    }

    printf("Gia tri cua %d! = %d\n", n, gt);

    return 0;
}
