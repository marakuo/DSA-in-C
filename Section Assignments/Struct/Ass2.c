#include <iso646.h>
#include <math.h>
#include <stdio.h>


/*
 * Define a structure named Employee containing
 * employee ID, name, basic salary, bonus, and deduction.
 * Read the employee's information and calculate the net salary using:
 * Net Salary = Basic Salary + Bonus - Deduction
 * Display the employee's information and net salary.
 */
typedef struct {
    char name[50];
    float salary;
    float bonus;
    float deduction;
}Employee;
void display(Employee emp, float net) {
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2f\n", emp.salary);
    printf("Bonus: %.2f\n", emp.bonus);
    printf("Deduction: %.2f\n", emp.deduction);
    printf("the net salary is %.2f", net);
}



int main(void) {
    Employee emp;
    printf("Employee name: \n");
    scanf("%49s", emp.name);
    printf("Employee salary: \n");
    scanf("%f", &emp.salary);
    printf("Employee bonus: \n");
    scanf("%f", &emp.bonus);
    printf("Employee deduction: \n");
    scanf("%f", &emp.deduction);
    float total = emp.salary + emp.bonus - emp.deduction;
    display(emp, total);





/*
    Name: malak
    Salary: 20000.00
    Bonus: 1000.00
    Deduction: 209.00
    the net salary is 20791.00
    Process finished with exit code 0
    
 */
    return 0;
}

