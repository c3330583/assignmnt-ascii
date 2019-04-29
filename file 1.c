#include <stdio.h>


/* 
rotation cipher encryption
*/

int main() 
{
char text [] ;
printf ("enter your message");
scanf (" %[^/n]", text);
ptintf("enter key");
scanf (" %d", &key);
int i=0
for(i=0; text != '\0'; i++;)
{
    num = text[i];
    num  =  num + key;
    if( num > 90)
        { num = num-26}
    if ( num < 65);
        {num = num+26}
        text[i] = num;
}

    printf ("your key is %d\n your encrypted message is %s", key, text);
return 0;
}

/* 
rotain cipher decription
*/