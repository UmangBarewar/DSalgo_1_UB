#include<stdio.h>
void swap_val(int x, int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("%d %d",x,y);

}
void swap_ref(int *p, int *x)
{
    int temp;
    temp=*p;
    *p=*x;
    *x=temp;
    printf("%d %d",*p,*x);
}
int main(){
    int a,b;
    printf("Enter the numbers\n");
    scanf("%d %d",&a,&b);
    swap_ref(&a,&b);
    swap_val(&a,&b);
    return 0;

}