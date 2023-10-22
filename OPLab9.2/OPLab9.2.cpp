#include <stdio.h>
#include <math.h>
#include <Windows.h>

int main() {
    int number, firstNumber, secondNumber, result, choice;

    do {
        printf("Введіть трицифрове число: ");
        scanf_s("%d", &number);

        if (number < 100 || number > 999) {
            printf("Помилка, потрібно ввести трицифрове число.\n");
        }
        else {
            firstNumber = (number / 100) % 10;
            secondNumber = (number / 10) % 10;

            result = secondNumber * 100 + firstNumber * 10 + number % 10;

            printf("Число після перестановки перших двох цифр: %d\n", result);
        }

        printf("\nДля продовження роботи введіть 1, для завершення - 2: ");
        scanf_s("%d", &choice);

        if (choice != 1 && choice != 2) {
            printf("Ви ввели неправильне значення. Введіть 1 або 2.\n");
            return 1;
        }

    } while (choice == 1);

    return 0;
}