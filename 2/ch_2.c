#include <stdio.h>
#include <string.h>

// Checks arguments, recall that arg[0] is the program name
// arg[1] is the first argument and arg[2] is the second argument.
char asd[] = {0X21, 0X48, 0X34, 0X63, 0X4B, 0X74, 0X68, 0X33, 0X50, 0X31, 0X34, 0X6E, 0X33, 0X74, 0X21};
void drop_key();
int main(int argc, char *argv[]){
  if ( argc < 3)
    printf("Sorry Charlie :(\n");
  if (argc == 3){
    printf("Getting Closer: \n");
    // If strcmp() returns 0 the comparison is true, strings are equal
    if (strcmp(argv[2],"Hello") == 0){
      printf("Congrats\n");
      drop_key();
    }
  }
  if (argc > 3) {
    printf("Looks like you're learning about arguments...\n");
    printf("But which ones do I want?\n");
  }

  return 0;
}

void drop_key(){
  // %c prints the ascii character of the value
  // %X will print the hex value
  for (int i = 0; i < 15; i++)
    printf("%x", asd[i]);
  printf("\n");
}
