#include <stdio.h>
#include <string.h>


int main() {
  char string[20];

  strcpy(string, "Hello");
  printf( "Before using memset |%s|\n", string );
  memset( string, '\0', sizeof(string) );
  printf( "After using memset |%s|\n", string );

  return 0;
}