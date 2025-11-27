/* Program: Print all substrings of a string
   Made simple like a 1st year student */
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int n, i, j, k;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;

    /* remove trailing newline if present */
    n = strlen(str);
    if (n > 0 && str[n-1] == '\n') {
        str[n-1] = '\0';
        n--;
    }

    printf("All substrings:\n");
    /* start index i from 0 to n-1 */
    for (i = 0; i < n; i++) {
        /* length of substring: j (1 to n-i) */
        for (j = 1; j <= n - i; j++) {
            /* print substring starting at i of length j */
            for (k = 0; k < j; k++) {
                putchar(str[i + k]);
            }
            putchar('\n');
        }
    }

    return 0;
}
