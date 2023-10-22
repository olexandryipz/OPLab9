#include <stdio.h>
#include <math.h>
#include <Windows.h>

int main() {
    int number, number10 = 0, number5 = 0, choice;

    do {
        printf("Введіть 10 чисел:\n");

        for (int i = 0; i < 10; i++) {
            printf("Число %d: ", i + 1);
            scanf_s("%d", &number);

            if (number > 10) {
                number10++;
            }
            else if (number > 5) {
                number5++;
            }
        }

        if (number10 > 4) {
            printf("Караул!\n");
        }
        else {
            printf("Більше 10: %d чисел, Більше 5: %d чисел\n", number10, number5);
        }

        printf("Для продовження роботи введіть 1, для завершення - 2: ");
        scanf_s("%d", &choice);
       
        if (choice != 1 && choice != 2) {
            printf("Ви ввели неправильне значення. Введіть 1 або 2.\n");
            return 1;
        }


    } while (choice != 2);

    return 0;
}
