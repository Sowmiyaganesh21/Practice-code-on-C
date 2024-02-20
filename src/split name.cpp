#include<stdio.h>
#include<string.h>
int main()
{
	char para[]="you know all the thing";
	char *tok= strtok(para," ");
	while(tok!='\0'){
	printf("%s\n",tok);
	tok=strtok('\0'," ");
	}
}







/*char sentence[] = "This is a sentence";
char *token = strtok(sentence, " ");
while (token != NULL) {
    printf("%s\n", token);
    token = strtok(NULL, " ");
}*/


