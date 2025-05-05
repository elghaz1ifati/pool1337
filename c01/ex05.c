#include <unistd.h>

void ft_put_str(char *str){
    while(*str != '\0')
 {
    write( 1 ,str , 1);
    str++;
 }
}
int main (){
    char sentence[] = "I love C";
    char *str = sentence;
    ft_put_str(str);
}
