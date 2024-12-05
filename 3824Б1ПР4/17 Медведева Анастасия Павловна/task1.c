// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN

#include <stdio.h>
#include <limits.h>

int sum_of_two_numbers(int a, int b) {
   
    if (a > 0 && b > INT_MAX - a) {
        return INT_MAX; 
    }
    if (a < 0 && b < INT_MIN - a) {
        return INT_MIN;
    }
    return a + b;
}

int main() {
    int num1, num2;
    printf("Введите первое целое число: ");
    scanf("%d", &num1);
    
    printf("Введите второе целое число: ");
    scanf("%d", &num2);
    
    int result = sum_of_two_numbers(num1, num2);
    printf("Сумма %d и %d равна %d\n", num1, num2, result);
    
    return 0;
}
