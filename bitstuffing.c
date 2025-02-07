#include<stdio.h>
#include<string.h>
#define max 100
int main(){

    char stack[max];
    int top=-1;
    int i,count;
    i=count=0;
    char s[max];
    char res[20];
    char flag[20] = "01111110";
    char header[20] = "0101";
    char footer[20] = "1010";
    printf("Enter your bit string:");
    scanf("%s",s);
    int len=strlen(s);
    for(i=0;i<len;i++){
        char ch=s[i];
        stack[++top]=ch;
        if(ch=='1'){
            count++;
            if(count==5){
                stack[++top]='0';
                count=0;
                }
        }
         else{
            count=0;
            }
    }
      stack[++top] = '/0';
    sprintf(res,"%s%s%s%s%s",flag,header,stack,footer,flag);
    printf("After Bit Stuffing: %s",res);
    return 0;
}
