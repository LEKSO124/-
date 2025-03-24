#include <stdio.h>

int main() {
 
//задача 4
    int n;
    printf("Введите n: ");
    scanf("%d", &n);
    int is_power = (n > 0) && ((n & (n - 1)) == 0);
    printf("%d\n", is_power);
    



return 0;
}
