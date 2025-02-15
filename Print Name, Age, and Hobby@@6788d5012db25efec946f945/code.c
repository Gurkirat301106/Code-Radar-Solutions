#include <stdio.h>
#include <string.h>
int main()
{
    char name[50];
    int age;
    char hobby[50];
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    scanf("%d",&age);
    getchar();
    fgets(hobby, sizeof(hobby), stdin);
    hobby[strcspn(hobby, "\n")] = '\0';
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);
    return 0;
}