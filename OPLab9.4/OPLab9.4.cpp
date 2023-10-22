#include <stdio.h>
#include <math.h>
#include <Windows.h>

int main() {
    int time, choice;

    do {
        printf("Введіть тривалість таймера (у секундах): ");
        scanf_s("%d", &time);

        Sleep(time * 1000);

        printf("\a");

        printf("Час вийшов.\n");

        printf("Для продовження роботи введіть 1, для завершення - 2: ");
        scanf_s("%d", &choice);

        if (choice != 1 && choice != 2) {
            printf("Ви ввели неправильне значення. Введіть 1 або 2.\n");
            return 1;
        }

    } while (choice != 2);

    return 0;
}
