#include <unistd.h>

void ft_put_str(char *str){
    while(*str != '\0')
 {
    write( 1 ,str , 1);
    str++;
 }
}
int main (){
    char word[] = "I love C";
    char *str = word;
    ft_put_str(str);
}
