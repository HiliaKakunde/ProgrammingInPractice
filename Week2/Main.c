#include <stdio.h>

int main() {
    
    double revenue;
    double expenses;
    double balance;
    int departments;
    double payroll;
    double procurement;
    double assets;

    printf("MUNICIPAL BUDGET CALCULATOR\n");
    printf("---------------------------\n");

    printf("Enter total revenue: ");
    scanf("%lf", &revenue);

    printf("Enter total expenses: ");
    scanf("%lf", &expenses);

    printf("Enter number of departments: ");
    scanf("%d", &departments);

    printf("Enter monthly payroll: ");
    scanf("%lf", &payroll);

    printf("Enter total procurement cost: ");
    scanf("%lf", &procurement);

    printf("Enter total asset value: ");
    scanf("%lf", &assets);

    balance = revenue - expenses;

    printf("\n==========================\n");
    printf(" MUNICIPAL FINANCIAL SUMMARY \n");
    printf("============================\n");
    printf("Departments : %d\n", departments);
    printf("Total Asset Value : N$%.2lf\n", assets);
    printf("------------------------------\n");
    printf("Total Revenue : N$%.2lf\n", revenue);
    printf("Total Expenses : N$%.2lf\n", expenses);
    printf("Balance : N$%.2lf\n", balance);
    printf("-------------------------------\n");
    printf("Payroll : N$%.2lf\n", payroll);
    printf("Procurement: N$%.2lf\n", procurement);
    printf("====================================\n");

    return 0;
}

// Week 2 submission
