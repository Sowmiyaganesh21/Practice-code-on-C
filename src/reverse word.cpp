#include <stdio.h>
#include <string.h>

void rev(char word[20], int strt, int end) 
{
    while (strt < end) 
	{
        char temp = word[strt];
        word[strt] = word[end];
        word[end] = temp;
        strt++;
        end--;
    }
}
void revword(char *str) {
    int len = strlen(str);
    int strt = 0;
    rev(str, 0, len - 1);
    for (int i = 0; i <= len; i++)
	 {
        if (str[i] == ' ' || str[i] == '\0')
		 {
            rev(str, strt, i - 1);
            strt = i + 1;
        }
    }
}
int main() {
    char name[50];
    gets(name);
    revword(name);
    printf("%s",name);
}

