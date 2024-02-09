#include<stdio.h>
#include<string.h>
#include<conio.h>

struct User {
    // declare members of structure User
    char name[50];
    char role[20];
    int age;
};

int main() {
    // declare variables of type User
    struct User user_1, user_2;

    // initialising member of user_1
    strcpy (user_1.name, "NIKHIL");
    strcpy (user_1.role, "DATA SCIENTIST");
    user_1.age = 20;

    // initialising member of user_1
    strcpy (user_2.name, "NIKHIL2");
    strcpy (user_2.role, "DATA ANALYST");
    user_2.age = 20;

    // print the details of the User user_1;
    printf("Details of User 1 :\n");
    printf("\tName : %s\n", user_1.name);
    printf("\tAge : %d\n", user_1.age);
    printf("\tRole : %s\n", user_1.role);

    // print the details of the User user_2;
    printf("Details of User 2 :\n");
    printf("\tName : %s\n", user_2.name);
    printf("\tAge : %d\n", user_2.age);
    printf("\tRole : %s\n", user_2.role);
    getch();

    return 0;
}
