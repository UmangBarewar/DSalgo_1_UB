#include<stdio.h>
void  chars(char letter[],char x, int n){
    int lower=0,higher=n-1,mid;
    int flag=0;
    while(lower<=higher){
         mid=(lower+higher)/2;
        if(x>letter[mid])
            lower=mid+1;
        else if(x<letter[mid])
            higher=mid-1;
        else if (x==letter[mid]){
            printf("element found %d\n",mid);
            flag=1;
            break;
        }
    }
    if(flag==1){
       printf("elemnt is  %c\n ",letter[mid+1]);
    }
    else{
    printf("ceiling value is %c\n",letter[lower]);
    printf("floor value value is %c\n",letter[higher]);}
}
int main(){
    char letters[5]={'A','E','I','P','W'};
    chars(letters,'E',5);

}