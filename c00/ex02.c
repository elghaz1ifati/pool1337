#include <unistd.h>
#include <stdio.h>

void ft_print_reverse_alphabet(void){
    write(1,"zyxwvutsrqponmlkjihgfedcba\n",27);

    char c = 'z'; // Start from 'z'
    while (c >= 'a') { // Continue until 'a'
        write(1, &c, 1); // Write the current character to standard output
        c--; // Move to the next character by reverse
    }
}


// int main(){
//     ft_print_reverse_alphabet();
//     return 0;
// }