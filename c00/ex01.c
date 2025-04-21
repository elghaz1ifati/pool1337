#include <unistd.h>
#include <stdio.h>

void ft_print_alphabet(void){
    write(1,"abcdefghijklmnopqrstuvwxyz\n",27);

    char c = 'a'; // Start from 'a'
    while (c <= 'z') { // Continue until 'z'
        write(1, &c, 1); // Write the current character to standard output
        c++; // Move to the next character
    }

}

// int main(){
//     ft_print_alphabet();
//     return 0;
// }