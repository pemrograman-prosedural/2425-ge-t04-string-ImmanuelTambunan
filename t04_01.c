// 12S24034 - Immanuel Alexander Tambunan
// 12S24046 - Indah Elsadai Nainggolan
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
 
      char str[61]; 
      scanf("%60s", str); 
      
      int length = strlen(str);
      for (int i = 0; i < length; i += 3) {
          char segment[4]; 
          strncpy(segment, str + i, 3);
          segment[3] = '\0'; 
          
          int ascii_value = atoi(segment); 
          printf("%c", ascii_value); 
      }
      
      printf("\n"); 
      return 0;
  }
