#include <stdio.h>

int array[5] = {0};
int top = -1;

void push()
{
    int a, temp;
    if (top == 4)
    {
        printf("Stack overflow Push not allowed");
    }
    else
    {
        printf("Enter the element : ");
        scanf("%d", &a);
        temp = top + 1;
        array[temp] = a;
        top++;
        printf("Element %d pushed at %d position",a,top);
    }
}
void pop()
{
    int a,temp;
    if (top == -1)
    {
        printf("Stack underflow Pop not allowed");
    }
    else
    {
        temp = top;
        a=array[temp];
        array[temp] = 0;
        top--;
        printf("Element %d popped from %d position",a,temp);
    }
}
void display()
{
    for (int i = 4; i >= 0; i--)
    {
        printf("%d \n", array[i]);
    }
}
int main()
{
    int k;
    while (1)
    {
        printf("\n\nWhat Operation do you want to Perform :Press \n1 for push \n2 for pop \n3 for display \n4 to end the program \n: ");
        scanf("%d", &k);
        if (k == 1)
        {
            push();
            continue;
        }
        else if (k == 2)
        {
            pop();
            continue;
        }
        else if (k == 3)
        {
            display();
            continue;
        }
        else if (k == 4)
        {
            printf("Program ended\n");
            break;
        }
        else
        {
            printf("Wrong Input Enter between 1-4 !!!\n");
            continue;
        }
    }
    return 0;
}