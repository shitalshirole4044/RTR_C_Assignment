#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define NAME_LENGTH 100
#define MARITAL_STATUS 10
struct Employee
{
    char name[NAME_LENGTH];
    int age;
    char sex;
    float salary;
    char marital_status;
};
int main(void)
{
    void MyGetString(char[], int);
    struct Employee *pEmployeeRecord = NULL;
    int num_employees, i;
    printf("\n\n");
    printf("Enter Number Of Employees Whose Details You Want To Record : ");
    scanf("%d", &num_employees);
    while (getchar() != '\n'); // flush newline left by scanf("%d")
    printf("\n\n");
    pEmployeeRecord = (struct Employee *)malloc(sizeof(struct Employee) * num_employees);
    if (pEmployeeRecord == NULL)
    {
        printf("FAILED TO ALLOCATED MEMORY FOR %d EMPLOYEES !!! EXITTING NOW ... \n\n", num_employees);
        exit(0);
    }
    else
        printf("SUCCESSFULLY ALLOCATED MEMORY FOR %d EMPLOYEES !!!\n\n", num_employees);
    for (i = 0; i < num_employees; i++)
    {
        printf("\n\n\n\n");
        printf("********** DATA ENTRY FOR EMPLOYEE NUMBER %d **********\n", (i + 1));
        printf("\n\n");
        printf("Enter Employee Name : ");
        MyGetString(pEmployeeRecord[i].name, NAME_LENGTH);
        printf("\n\n\n");
        printf("Enter Employee's Age (in years) : ");
        scanf("%d", &pEmployeeRecord[i].age);
        while (getchar() != '\n'); // flush newline left by scanf("%d")
        printf("\n\n");
        printf("Enter Employee's Sex (M/m For Male, F/f For Female) : ");
        pEmployeeRecord[i].sex = getchar();
        while (getchar() != '\n'); // consume the Enter keystroke
        pEmployeeRecord[i].sex = toupper(pEmployeeRecord[i].sex);
        printf("\n\n\n");
        printf("Enter Employee's Salary (in Indian Rupees) : ");
        scanf("%f", &pEmployeeRecord[i].salary);
        while (getchar() != '\n'); // flush newline left by scanf("%f")
        printf("\n\n");
        printf("Is The Employee Married? (Y/y For Yes, N/n For No) : ");
        pEmployeeRecord[i].marital_status = getchar();
        while (getchar() != '\n'); // consume the Enter keystroke, ready for next loop's MyGetString
        pEmployeeRecord[i].marital_status = toupper(pEmployeeRecord[i].marital_status);
    }
    printf("\n\n\n\n");
    printf("********** DISPLAYING EMPLOYEE RECORDS **********\n\n");
    for (i = 0; i < num_employees; i++)
    {
        printf("************ EMPLOYEE NUMBER %d **********\n\n", (i + 1));
        printf("Name           : %s\n", pEmployeeRecord[i].name);
        printf("Age            : %d years\n", pEmployeeRecord[i].age);
        if (pEmployeeRecord[i].sex == 'M')
            printf("Sex            : Male\n");
        else if(pEmployeeRecord[i].sex == 'F')
            printf("Sex            : Female\n");
        else
            printf("Sex            : Invalid Data Entered\n");
        printf("Salary         : Rs. %f\n", pEmployeeRecord[i].salary);
        if (pEmployeeRecord[i].marital_status == 'Y')
            printf("Marital Status : Married\n");
        else if (pEmployeeRecord[i].marital_status == 'N')
            printf("Marital Status : Unmarried\n");
        else
            printf("Marital Status : Invalid Data Entered\n");
        printf("\n\n");
    }
    if (pEmployeeRecord)
    {
        free(pEmployeeRecord);
        pEmployeeRecord = NULL;
        printf("MEMORY ALLOCATED TO %d EMPLOYEES HAS BEEN SUCCESSFULLY FREED !!! \n\n", num_employees);
    }
    return(0);
}
void MyGetString(char str[], int str_size)
{
    int i;
    char ch = '\0';
    i = 0;
    do
    {
        ch = getchar();
        str[i] = ch;
        i++;
    } while ((ch != '\n') && (i < str_size)); // '\n' on macOS/Unix, NOT '\r' — see explanation above
    if (i == str_size)
        str[i - 1] = '\0';
    else
        str[i - 1] = '\0'; // overwrite the captured '\n' with the terminator, not str[i]
}