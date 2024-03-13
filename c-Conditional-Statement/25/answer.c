#include <stdio.h>  // Include the standard input/output header file.

//The answer is from the website:
//https://www.w3resource.com/c-programming-exercises/conditional-statement/c-conditional-statement-exercises-25.php

void main ()
{
      int choice,r,l,w,b,h;  // Declare variables to store user input and dimensions.
      float area;  // Declare a variable to store the calculated area.

      // Display the options to the user.
      printf("Input 1 for area of circle\n");
      printf("Input 2 for area of rectangle\n");
      printf("Input 3 for area of triangle\n");
      printf("Input your choice : ");
      scanf("%d",&choice);  // Read and store the user's choice.

      switch(choice)  // Start a switch statement based on the user's choice.
      {
           case 1:
                 printf("Input radius of the circle : ");  // Prompt user for circle's radius.
                 scanf("%d",&r);  // Read and store the radius.
                 area=3.14*r*r;  // Calculate the area of the circle.
                 break;
            case 2:
                  printf("Input length and width of the rectangle : ");  // Prompt user for rectangle's dimensions.
                  scanf("%d%d",&l,&w);  // Read and store length and width.
                  area=l*w;  // Calculate the area of the rectangle.
                  break;
            case 3:
                  printf("Input the base and height of the triangle :");  // Prompt user for triangle's base and height.
                  scanf("%d%d",&b,&h);  // Read and store base and height.
                  area=.5*b*h;  // Calculate the area of the triangle.
                  break;
          }

          printf("The area is : %f\n",area);  // Display the calculated area.
}

