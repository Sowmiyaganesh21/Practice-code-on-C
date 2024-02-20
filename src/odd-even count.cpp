#include<stdio.h>

int main()
{
    int i, even = 0, odd = 0;
   
    
    for (i = 1; i <=75; i++)
    {
        if (i% 2 == 0)
            even++;
        else
            odd++;
    }
    
    printf("%d %d",even,odd); 
    return 0;
}

