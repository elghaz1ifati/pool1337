#include <unistd.h>
#include <stdio.h> 

void ft_putchar(char c){
    write(1,&c,1);
}

int main(){
    ft_putchar('F');
    printf("\n");
    // char inseret by user
    // char letter;
    // printf("Give me a Char : ");
    // scanf("%c",&letter);
    // ft_putchar(letter);
    return 0;
}