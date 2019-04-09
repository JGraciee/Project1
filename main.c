//ENG1003 Project 1
#include <stdio.h>
int main() {
    int i, x, k; // k = key 
    char str[100]; // declares a string of 99 characters + null 
    
    
    printf("\n Enter a string: ");
    scanf("%s", str);
    
    printf("\n Enter an integer for key: ");
    scanf("%d", &k);
    
    
    printf("\nPlease choose from the following options:\n");
    printf("1 = Encrypt string using character rotation.\n");
    printf("2 = Decrypt string.\n");
    scanf("%d", &x);
    
    //using switch case statements --> need to make them into functions 
   switch(x) // refers to option selected above 
   {
   case 1:
      for(i = 0; (i < 100 && str[i] != '\0'); i++) // Encryption is working using rotation 
        str[i] = str[i] + k; //the key for encryption is 3 that is added to ASCII value

      printf("\nEncrypted string: %s\n", str);
      break;

   case 2:
      for(i = 0; (i < 100 && str[i] != '\0'); i++) // not really sure about this decryption thing :/ 
        str[i] = str[i] - k; //the key for encryption is 3 that is subtracted to ASCII value

      printf("\nDecrypted string: %s\n", str);
      break;

   default:
      printf("\nError\n");
}
    
    return 0;
    
}
    
    
    
    
   
