#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LIMIT 20

int main() {
  int counter1[26] = {0};  
  int counter2[26] = {0};
  char s1[LIMIT];
  char s2[LIMIT];
  printf("First word: ");
  scanf("%[^\n]%*c", s1);
  printf("Second word: ");
  scanf("%[^\n]%*c", s2);

  for (int i = 0; i < strlen(s1); i++) {
    if (isalpha(s1[i])) { 
      char lowercaseChar = tolower(s1[i]); 
      counter1[lowercaseChar - 'a']++; 
    }
  }
  for (int i = 0; i < strlen(s2); i++) {
    if (isalpha(s2[i])) {
      char lowercaseChar = tolower(s2[i]);
      counter2[lowercaseChar - 'a']++;
    }
  }
  
  int flag = 0;
  for (int i = 0; i < 26; i++) { 
    if (counter1[i] != counter2[i]) {
      flag++;
      break; 
    }
  }
  
  if (flag == 0) {
    printf("Anagram!\n");
  } else {
    printf("Not Anagram!\n");
  }
  
  return 0;
}
