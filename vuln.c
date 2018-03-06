#include<stdio.h>

void secretFunction(){
  printf("Surprise!\n");
  printf("Pawned!\n");
}

void echo(){
  char buffer[20];

  printf("Enter some text:\n");
  scanf("%s", buffer);
  printf("You entered: %s\n", buffer);
}

int main(){
  echo();
}
