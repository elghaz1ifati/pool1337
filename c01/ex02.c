#include <unistd.h>
// #include <stdio.h>

void ft_swap(int *a, int *b){
    int swap = *a;
    *a = *b ;
    *b = swap ;
}

// int main(){
//     int n1 = 10;
//     int *p1 = &n1;
//     int n2 = 20;
//     int *p2 = &n2;
//     ft_swap(p1,p2);
//     printf("n1 value  = %d\n",n1);
//     printf("n2 value = %d",n2);
// }
