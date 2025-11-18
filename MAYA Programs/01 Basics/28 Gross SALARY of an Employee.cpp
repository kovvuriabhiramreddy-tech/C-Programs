#include <stdio.h>

int main() {
    float salary, HRA, DA, PF, grossSalary;
    scanf("%f %f %f", &salary, &HRA, &DA);
    PF = 0.12 * salary;
    grossSalary = salary + HRA + DA + PF;
    printf("%.2f
%.2f", PF, grossSalary);
    return 0;
}
/*
Gross Salary of an Employee

Program Description
Given Basic Salary, HRA and DA of an employee, calculate the PF on Basic Salary and finally print the PF and Gross Salary of an employee.
Note: PF = 12% of the Basic Salary and Gross Salary = Basic Salary + HRA + DA + PF

Input Format
Three different lines of input contains float values Salary, HRA, and DA

Output Format
Print PF and Gross Salary of an employee

Constraints
20000<=salary<=1000000 1000<=HRA,DA<=100000 HRA&DA are equal

Input-1
23000.00
9500.00
9500.00

Output-1
2760.00
44760.00

Input-2
30000.00
10000.00
10000.00

Output-2
3600.00
53600.00
*/
