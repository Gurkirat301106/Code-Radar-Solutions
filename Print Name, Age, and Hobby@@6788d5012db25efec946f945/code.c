#include <stdio.h>
int main()
{
    char name[50];
    int age;
    char hobby[50];
    printf("Enter your name: ");
    fgets(name,sizeof(name),stdin);
    printf("Enter your age:");
    scanf("%d",&age);
    getchar();
    printf("Enter your favorite hobby: ");
    fgets(hobby,sizeof(hobby),stdin);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",hobby);
    return 0;
}