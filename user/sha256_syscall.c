#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(void)
{
    // Display purpose of the program
    printf("SHA-256 Hash Computation Using System Call\n");
    printf("==========================================\n");

    // Measure cycle count before computation
    int before = clockcycles() / 10000;
    printf("Cycle count before computation: %d\n", before);

    // Perform the system call to compute the SHA-256 hash
    shaVal();

    // Measure cycle count after computation
    int after = clockcycles() / 10000;
    printf("Cycle count after computation: %d\n", after);

    // Calculate and display the total time taken in milliseconds
    printf("Total time taken: %d milliseconds\n", after - before);
    printf("\n");

    return 0;
}

