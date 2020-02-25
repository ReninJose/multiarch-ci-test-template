#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void reverse_string(char string[50]);
void pattern(char reversed_str[50]);

int main(){
    char str[50];
    printf("ENTER THE STRING: ");
    scanf("%s",str);

    reverse_string(str);
    return 0;
}

void reverse_string(char string[50]){
    char *temp_char;
    int reverse;
    reverse = strlen(string);
    temp_char = (char*)malloc(strlen(string));

    for(int i=0; i<strlen(string); i++){
        temp_char[reverse-1] = string[i];
        reverse --;
    }
    printf("%s\n",temp_char);
    pattern(temp_char);
}

void pattern(char reversed_str[50]){
    int middle=0, front=0, back=strlen(reversed_str);
    middle = strlen(reversed_str)/2;
    while(back - front > 1){
        reversed_str[front] = '*';
        reversed_str[back-1] = '*';
        front++;
        back--;
        printf("%s\n",reversed_str);
    }
}

