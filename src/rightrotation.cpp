#include <stdio.h>

int Reflection(char word1[10], char word2[10])
 {
    int len1 = 0, len2 = 0, i = 0, j = 0;
    while (word1[len1] != '\0') 
	{
        len1++;
    }
    while (word2[len2] != '\0')
	 {
        len2++;
    }
    if (len1 != len2)
	 {
        return -1;
    }
    while (word1[i] != '\0')
	 {
        if (word1[i] == word2[j])
		 {
            j++;
            if (j == len2)
			 {
                word1[i + 1] = '\0';
                break;
            }
        }
		 else
		  {
            return -1; 
        }
        i++;
    }
    if (j == len2)
	 {
        return 1;
    } 
	else 
	{
        return -1;
    }
}
int main()
 {
    char word1[10] = "plesam";
    char word2[10] = "sample";

    int result = Reflection(word1, word2);
     if (result == 1) {
        printf("-1");
    }
	 else if (result == -1) {
        printf("1");
    }
 }

