#include <stdio.h>
#include <math.h>
 int is_lowercase(char);
 int termvar = 1;

 int is_lowercase(char any_character){
  if (any_character & 0x20){
      printf("The char is lower case!");
      return 0;
  }
      printf("It is upper case!");
      return 0;
  }
int main(void){
int avar = 0;
 unsigned short bvar = 10;
 unsigned short cvar = 7;
 unsigned short dvar = 9;
 int evar = cvar * dvar;
 char my_char = 'a';
 char string[] = "The fuck decoded by binary found at pointer. \n";
 char *strptr = string;
 int *ptr = & avar;
 int *ptr2 = & evar;
 int *ptrL = & *ptr;
 int *ptrL2 = & *ptr2;
  printf("::::::Welcome to the lesson summary::::::\n\n\n");



    avar = 28 + printf("The meaning of life ");
      printf("is %d. \n", avar);
      printf("This is a character - %c. \n", my_char);
      printf("Sum of address at std pointer: %d. \n", *ptr);
      printf("Pointer locations on RAM? = %p. \n\n", ptr);
      printf("The multi of cvar and dvar = %d \n", *ptr2);
      printf("This is the duck of a sentence in binary at pointer: %p \n", string);
    *ptr = 5;
      printf("This is what's there now that I wrote over the binary on avar: %d \n", avar);

      printf("Since pointers are just like any other variable only in RAM address, these" "\n"
             "are locations of the pointers in ram just like any other variable: %p and %p." "\n", ptrL, ptrL2);
     evar = evar + cvar;
     if (evar == 70){
      printf("\n::::::::::::::::::::::::::" "\n"
             "EVAR HAS CHANGED! WARNING!" "\n"
             "::::::::::::::::::::::::::" "\n\n");
}
    printf("Evar is currently %d \n", evar);

   while (evar < 100){
       printf("Fuck, we need to add 2 more to evar for it to be closer to 100! Evar + 2 = %d" "\n", evar);
       evar = evar + 2;
}
   if (evar == 100){
       printf("SUCCESS! Evar = 100 :D" "\n");
}
  *strptr = 'F';
   strptr++;
   *strptr = 'u';
   strptr++;
   *strptr = 'u';
   strptr++;
   *strptr = 'u';
   strptr++;
   *strptr = 'u';
   strptr++;
   *strptr = 'u';

     printf("::::::::::::::::::::" "\n"
            "Enter a letter here:");
     scanf("%c", &my_char);
     printf("::::::::::::::::::::" "\n");

     is_lowercase(my_char);




      printf("\n%s\nApplication will now ", string);
    return 0;
}
