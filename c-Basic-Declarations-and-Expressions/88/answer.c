#include <stdio.h>

int main( void )
{
unsigned char char1 , char2 , char3 , char4 , char5 , char6 , char7 , char8 ;

// Print table header
printf("|---------------------------------------------------------------------------------------------------------|\n" );
printf("|extended ASCII table - excluding control characters                                                      |\n" );
printf("|   Ch Dec  Hex  |  Ch Dec  Hex   | Ch Dec  Hex | Ch Dec  Hex  | Ch Dec  Hex  | Ch Dec  Hex | Ch Dec  Hex |\n" );
printf("|----------------|----------------|-------------|--------------|--------------|-------------|-------------|\n" );

  // Loop through characters
for(int i = 0 ; i< 32; i++) {
    // Calculate characters for different ranges
    char1 = i;
    char2 = i+32;
    char3 = i+64;
    char4 = i+96;
    char5 = i+128; // extended ASCII characters
    char6 = i+160;
    char7 = i+192;
    char8 = i+224;

    // Print characters and their decimal and hexadecimal representations
    printf( "|  %c %3d %#x " , char2 , char2 , char2 );
    printf( "|  %c %3d %#x " , char3 , char3 , char3 );

    // Special case for DEL character
    if( char4 == 127 )
        printf("|%s %3d %#x |" , "DEL" , char4 , char4  );
    else
        printf("|  %c %3d %#x |" , char4 , char4 , char4  );

    // Print extended ASCII characters for current system.
    printf("  %c %3d %#x |  %c %3d %#x |  %c %3d %#x |  %c %3d %#x |\n" ,
    char5 , char5 , char5 ,
    char6 , char6 , char6 ,
    char7 , char7 , char7 ,
    char8 , char8 , char8  );

    }

return 0; 
}
