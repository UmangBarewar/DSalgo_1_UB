#include <stdio.h>
int stack[100], choice, n, top, x, i;
void push()
{
    if (top >= n - 1)
    {
        printf("\nStack Overflow");
    }
    else
    {
        printf("Enter a value to be pushed");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\nStack underflow/empty");
    }
    else
    {
        printf("\nThe popped element is %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in stack");
        for(i=top;i>=0;i--)
        {
        printf("\n%d",stack[i]);
        }
        printf("\n Press next choice");
    }
    else
    {
        printf("Stack is empty");
    }

}
int main()
{
    top = -1;
    printf("Enter the size of thr stack [MAX=100]:");
    scanf("%d", &n);
    // printf("Enter the elements in the array");
    // for(i=0;i<n;i++)
    //     {
    //     scanf("\n%d",&stack[i]);
    //     }
    printf("\nStack operations using Array");
    printf("1_Push\n2_Pop\n3_Display\n4_Exit");
    do
    {
     printf("\nEnter the choice");
        scanf("%d", &choice);
       
        switch (choice)
        {
            case 1:
            
                push();
                break;
            
           
            case 2:
                pop();
                break;
           
            case 3:
           
                display();
                break;
           
            default:
           
                printf("\nEnter valid choice");
                break;
           
        }
    } while (choice != 4);
    return 0;
}


#include <stdio.h>
int stack[100], choice, n, top, x, i;
void push()
{
    if (top >= n - 1)
    {
        printf("\nStack Overflow");
    }
    else
    {
        printf("Enter a value to be pushed");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\nStack underflow/empty");
    }
    else
    {
        printf("\nThe popped element is %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in stack");
        for(i=top;i>=0;i--)
        {
        printf("\n%d",stack[i]);
        }
        printf("\n Press next choice");
    }
    else
    {
        printf("Stack is empty");
    }

}
int main()
{
    top = -1;
    printf("Enter the size of thr stack [MAX=100]:");
    scanf("%d", &n);
    // printf("Enter the elements in the array");
    // for(i=0;i<n;i++)
    //     {
    //     scanf("\n%d",&stack[i]);
    //     }
    printf("\nStack operations using Array");
    printf("1_Push\n2_Pop\n3_Display\n4_Exit");
    do
    {
     printf("\nEnter the choice");
        scanf("%d", &choice);
       
        switch (choice)
        {
            case 1:
            
                push();
                break;
            
           
            case 2:
                pop();
                break;
           
            case 3:
           
                display();
                break;
           
            default:
           
                printf("\nEnter valid choice");
                break;
           
        }
    } while (choice != 4);
    return 0;
}