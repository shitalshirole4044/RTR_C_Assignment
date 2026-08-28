#include <stdio.h>

int main(int argc, char *argv[], char *envp[])
{
    void Function_Country();

    Function_Country();
    return(0);
}

void Function_Country(void)
{
    void Function_OfAMC(void);

    Function_OfAMC();

    printf("\n\n");

    printf("I live In India.");

    printf("\n\n");
}

void Function_OfAMC(void)
{
    void Function_Surname(void);

    Function_Surname();

    printf("\n\n");

    printf("Of ASTROMEDICOMP");
}

void Function_Surname(void)
{
    void Function_MiddleName(void);

    Function_MiddleName();

    printf("\n\n");

    printf("Gokhale");
}

void Function_MiddleName(void)
{
    void Function_FirstName(void);

    Function_FirstName();

    printf("\n\n");

    printf("Vijay");
}

void Function_FirstName(void)
{
    void Function_Is(void);

    Function_Is();

    printf("\n\n");

    printf("Pradnya");
}

void Function_Is(void)
{
    void Function_Name(void);

    Function_Name();

    printf("\n\n");

    printf("Is");
}

void Function_Name(void)
{
    void Function_My(void);

    Function_My();

    printf("\n\n");

    printf("Name");
}

void Function_My(void)
{
    printf("\n\n");
    printf("My");
}
