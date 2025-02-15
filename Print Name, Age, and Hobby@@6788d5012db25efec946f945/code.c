#include <stdio.h>
#include <string.h>
int main()
{
    char name[50];
    int age;
    char hobby[50];
    printf("Enter your name: ");
    fgets(name,sizeof(name),stdin);
    name[strcspn(name, "\n")] = '\0';
    printf("Enter your age: ");
    scanf("%d",&age);
    getchar();
    printf("Enter your hobby: ");
    fgets(hobby, sizeof(hobby),stdin);
    hobby[strcspn(hobby, "\n")] = '\0';
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",hobby);
    return 0;
}