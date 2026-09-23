#include <stdio.h>

int main(){

    char studentName[50];
    int test1;
    int test2;
    int assignment;
    int total;

    printf("Enter student name: ");
    scanf("%s", &studentName);

    printf("Enter test 1 mark: ");
    scanf("%d", &test1);
    printf("Enter test 2 mark: ");
    scanf("%d", &test2);
    printf("Enter assignment mark: ");
    scanf("%d", &assignment);

    total = test1 + test2 + assignment;

    printf("Student Name: %s\n", studentName);
    printf("Total: %d\n", total);

    if (total >= 75){
        printf("Result: Distinction\n");
    }
    else if (total >= 60){
        printf("Result: Credit\n");
    }
    else if (total >= 50){
        printf("Result: Pass\n");
    }
    else{
        printf("Result: Fail\n");
    }

    return 0;
}