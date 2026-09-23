#include <stdio.h>

int main() {

    float salaries[50];
    float total = 0;
    float average;
    float highest;
    float lowest;
    float search;
    int found = 0;
    float temp;

    for (int i = 0; i < 50; i++) {
        printf("Enter salary for employee %d: ", i + 1);
        scanf("%f", &salaries [i]);
    }

    highest = salaries[0];
    lowest = salaries[0];

    for (int i = 0; i < 50; i++) {

        total = total + salaries[i];

        if (salaries[i] > highest) {
            highest = salaries[i];
        }

        if (salaries[i] < lowest) {
            lowest = salaries[i];
        }
    }
    average = total / 50;

    for (int i = 0; i < 50; i++) {
        printf("Employee %d: %.2f\n", i + 1, salaries[i]);
    }

    printf("Total salary : %.2f\n", total);
    printf("Average salary: %.2f\n", average);
    printf("Highest salary: %.2f\n", highest);
    printf("Lowest salary: %.2f\n", lowest);

    printf("\nEnter salary to search for: ");
    scanf("%f", &search);

    for (int i = 0; i < 50; i++) {

        if (salaries[i] == search) {
            found = 1;
            printf("Salary found at %d\n", i);
            break;
        }
    }
    if (!found) {
        printf("Salary not found.\n");
    }

    for (int i = 0; i < 50 - 1; i++) {

        for (int j = 0; j < 50 - i - 1; j++) {
          if (salaries[j] > salaries[j + 1]) {
                temp = salaries[j];
                salaries[j] = salaries[j + 1];
                salaries[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 50; i++) {
        printf("%.2f\n", salaries[i]);
    }

    return 0;
}