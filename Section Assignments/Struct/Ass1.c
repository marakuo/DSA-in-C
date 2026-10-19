#include <math.h>
#include <stdio.h>
/*
 * Define a structure named Student containing
 * the student ID, name, age, and grade.
 * Read the information from the user and display it.
 */
typedef struct {
    char name[50];
    int ID;
    int age;
    char grade;

}Student;
void dataDisplay(Student student) {
    printf("=== Student Data Display ===\n");
    printf("Name: %s\n", student.name);
    printf("ID: %d\n", student.ID);
    printf("age: %d\n", student.age);
    printf("grade: %c\n", student.grade);
};

int main(void) {
    Student student;
    printf("Hello, enter your name: \n");
    scanf("%49s", student.name);
    printf("Enter your ID and age: \n");
    scanf("%d%d", &student.ID, &student.age);
    printf("Enter your grade: \n");
    scanf(" %c", &student.grade);
    dataDisplay(student);


/*
    * === Student Data Display ===
    Name: malak
    ID: 12321
    age: 20
    grade: A
    
 */
    return 0;
}

