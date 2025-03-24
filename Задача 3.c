#include <stdio.h>

int main() {
  /*задача 3*/

    int n;
    printf("Введите число: ");
    scanf("%d", &n);
    char *result[] = {"четное", "нечетное"};
    printf("%s\n", result[n % 2]);


return 0;
}
