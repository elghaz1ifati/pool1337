#include <unistd.h>

void ft_print_comb(void) {
    int i = '0';
    int j, k;

    while (i <= '7') {
        j = i + 1; // Initialize j to the next digit after i
        while (j <= '8') {
            k = j + 1; // Initialize k to the next digit after j
            while (k <= '9') {
                write(1, &i, 1); // Print i
                write(1, &j, 1); // Print j
                write(1, &k, 1); // Print k
                if (!(i == '7' && j == '8' && k == '9')) {
                    write(1, ", ", 2); // Print comma and space
                }
                k++; // Increment k
            }
            j++; // Increment j
        }
        i++; // Increment i
    }
}

int main() {
    ft_print_comb();
    return 0;
}