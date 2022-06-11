#include<stdio.h>
#include<string.h>

void main(){
    char comment[1000];
    int i=2,a=0;
    printf("enter the line");
    gets(comment);


    if(comment[0]=='/'){
        if(comment[1]=='/'){
            printf("the given line is a comment:");
        }
        else if(comment[1]=='*'){
           for(i=2;i<=1000;i++){
               if(comment[i]=='*' && comment[i+1]=='/'){
                 printf("the given lin is a comment");
                 a=1;
                 break;
               }
               else
               continue;
           }
           if(a==0)
           printf("the given line is not a comment:\n");
           else
           printf("the given line is not a comment:");
        } 
        else
        printf("the given line is not a comment:");
    }
    else
    printf("the given line is not a comment:");
}    
