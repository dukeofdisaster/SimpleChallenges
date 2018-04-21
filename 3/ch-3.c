#include <stdio.h>
#include <string.h>
#include <unistd.h>

// Function Prototypes
unsigned long hash(unsigned char *str);

int main(int argc, char *argv[]){
  if (argc == 7){
    printf("That's a lot of arguments\n");
    if (strcmp(argv[6], "gimme") == 0){
       printf("Well what have we here..\n");
       printf("%lu", hash("WinnerWinnerChickenDinner"));
      }
  }
  if (argc < 7 || argc > 7){
    printf("CONGRATS!!!!!\nNOT.....");
  }

  return 0;
}

// Defiinition
unsigned long hash(unsigned char *str){
  unsigned long hash = 1337;
  int c;

  while (c = *str++)
    hash = ((hash << 5) + hash) +c;

  return hash;
}
