#include <stdio.h>
int main()
{
    char name[50];
    int age;
    char hobby[50];
    fgets(name,sizeof(name),stdin);
    scanf("%d",&age);
    getchar();
    fgets(hobby,sizeof(hobby),stdin);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",hobby);
    return 0;
}