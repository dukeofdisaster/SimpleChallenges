#include <stdio.h>
#include <string.h>

int main (){


  const char password[] = "EasyPeazyLemonSqueezy!";
  char pass[24];
  char ch;
  int done = 0, i;
  
  printf("===| Challenge 1 - Find The Secret Flag! |===\n");
  printf("Careful: trying to break me could have you stuck for a while :)\n\n");
  printf("Careful: invalid input could break the functionality\n");
  while (done == 0) {
    int WrongChars = 0;

    printf("\nEnter the password<Hint: it's 22 characters>: ");

    for (i = 0; i < 22; i++){
      ch = getchar();
      pass[i] = ch;
      if (pass[i] != password[i]){
        WrongChars++;
      }
    }
    pass[i] = '\0';
    if (WrongChars == 0 ){
      printf("\nFINALLY.... That was too easy\n");
      printf("\nh4cK3r&fr34k3r");
      done = 1;
    }
    else{
      printf("WRONG!!!!!!!!!!!\n");
    }
  }

  return 0;
}
