//Tower of Hanoi
/*
Author:Varsha D
Created Date:4.07.2024 12:20PM
Modified:4.07.2024 12:39PM
*/
/*
Author:Varsha D
Created Date:4.07.2024 12:28AM
Modified:
*/
#include <stdio.h>

// Function prototype
void TOH(int n, char source, char destination, char auxiliary);

int main() {
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    // Function call to solve Tower of Hanoi
    TOH(n, 'S', 'D', 'T');

    return 0;
}

// Recursive function to solve Tower of Hanoi
void TOH(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        printf("Move disc 1 from %c to %c\n", source, destination);
        return;
    }

    TOH(n-1, source, auxiliary, destination);
    printf("Move disc %d from %c to %c\n", n, source, destination);
    TOH(n-1, auxiliary, destination, source);
}
