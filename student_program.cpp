#include <stdio.h>

int main() {
    int number ; 
    scanf( "%d", &number ) ; 

    for( int i = 1 ; i <= number ; i++ ) { 
        printf( "[%d] Hello World\n", i ) ; 
    }
    return 0 ;
}//end functio
