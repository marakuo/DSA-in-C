#include <iso646.h>
#include <math.h>
#include <stdio.h>

/*
 * Define a structure named Student containing:
 * Student ID (integer), Name (string), Three subject marks (float)
 * Write a C program that:
 * • Reads the student's information.
 * • Uses a function named calculateAverage() to calculate the average of the three marks.
 * • Uses a function named displayStudent() to display the student's information and average.
 */
typedef struct{
    int ID;
    char name[50];
    float sub1, sub2, sub3;
}Student;
void calculateAverage(float *s1, float *s2, float *s3) {
    float avg = (*s1 + *s2 + *s3) / 3;
    printf("The average is: %.2f\n", avg);
}
void displayStudent(Student student) {
    printf("Student name: %49s\n", student.name);
    printf("Student ID: %d\n", student.ID);
    printf("Student sub1: %.2f\n", student.sub1);
    printf("Student sub2: %.2f\n", student.sub2);
    printf("Student sub3: %.2f\n", student.sub3);
    calculateAverage(&student.sub1,&student.sub2,&student.sub3 );

}

int main(void) {
    Student student;
    printf("Enter name : \n");
    scanf("%49s", &student.name);
    printf("Enter ID: \n");
    scanf("%d", &student.ID);
    printf("Enter sub1 Mark: \n");
    scanf("%f", &student.sub1);
    printf("Enter sub2 Mark: \n");
    scanf("%f", &student.sub2);
    printf("Enter sub3 Mark: \n");
    scanf("%f", &student.sub3);
    displayStudent(student);




    return 0;
}

