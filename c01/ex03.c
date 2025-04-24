#include <unistd.h>
// #include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod){
    *div = a/b ;
    *mod = a%b ;
}

// int main (){
//     int a = 5;
//     int b = 5;
//     int d ;
//     int m ;
//     ft_div_mod(a,b,&d,&m);
//     printf("Division : %d \n" ,d);
//     printf("Modulo : %d" ,m);
// }
