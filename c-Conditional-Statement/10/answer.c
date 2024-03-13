#include <stdio.h>   // Include the standard input/output header file.

void main()
{
    int p, c, m, t, mp;   // Declare variables to store marks and totals.

    printf("Eligibility Criteria :\n");   // Display eligibility criteria.
    printf("Marks in Maths >=65\n");
    printf("and Marks in Phy >=55\n");
    printf("and Marks in Chem>=50\n");
    printf("and Total in all three subject >=190\n");
    printf("or Total in Maths and Physics >=140\n");
    printf("-------------------------------------\n");

    printf("Input the marks obtained in Physics :");   // Prompt user for input.
    scanf("%d", &p);   // Read and store marks in 'p'.
    printf("Input the marks obtained in Chemistry :");
    scanf("%d", &c);   // Read and store marks in 'c'.
    printf("Input the marks obtained in Mathematics :");
    scanf("%d", &m);   // Read and store marks in 'm'.

    printf("Total marks of Maths, Physics and Chemistry : %d\n", m + p + c);   // Calculate and display total marks.
    printf("Total marks of Maths and Physics : %d\n", m + p);   // Calculate and display total marks.

    if (m >= 65)   // Check if marks in Maths are greater than or equal to 65.
        if (p >= 55)   // Check if marks in Physics are greater than or equal to 55.
            if (c >= 50)   // Check if marks in Chemistry are greater than or equal to 50.
                if ((m + p + c) >= 190 || (m + p) >= 140)   // Check if total marks criteria are met.
                    printf("The candidate is eligible for admission.\n");   // Print eligibility message.
                else
                    printf("The candidate is not eligible.\n");   // Print ineligibility message.
            else
                printf("The candidate is not eligible.\n");   // Print ineligibility message.
        else
            printf("The candidate is not eligible.\n");   // Print ineligibility message.
    else
        printf("The candidate is not eligible.\n");   // Print ineligibility message.
}

