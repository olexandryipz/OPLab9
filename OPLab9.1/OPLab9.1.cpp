#include <stdio.h>
#include <math.h>
#include <Windows.h>

int main() {
    int number, choice, sum = 0;

    do {
        printf("Введіть парні числа (щоб підрахувати суму введених парних чисел, введіть 0): \n");

        while (1) {
            scanf_s("%d", &number);

            if (number == 0) {
                break;
            }

            if (number % 2 == 0) {
                sum += number;
            }
        }

        printf("Сума парних чисел: %d\n", sum);

        printf("Для продовження роботи введіть 1, для завершення - 2: ");
        scanf_s("%d", &choice);

        if (choice != 1 && choice != 2) {
            printf("Ви ввели неправильне значення. Введіть 1 або 2.\n");
            return 1;
        }

        sum = 0;
    } while (choice == 1);

    return 0;
}