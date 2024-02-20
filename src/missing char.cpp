#include <stdio.h>
#include <string.h>

char findmissing(char *str1, char *str2)
 {
  int len1 = strlen(str1);
  int len2 = strlen(str2);

  for (int i = 0; i < len1; i++)
   {
    int found = 0;
    for (int j = 0; j < len2; j++)
	 {
      if (str1[i] == str2[j])
	   {
        found = 1;
        break;
      }
    }
    if (!found) {
      return str1[i];
    }
  }
  return '\0'; 
}
int main() {
  char str1[] = "abcdefjgerj";
  char str2[] = "abcdefihger";

  char missingchar = findmissing(str1, str2);

  if (missingchar != '\0')
   {
    printf(" %c", missingchar);
  } 

  return 0;
}
