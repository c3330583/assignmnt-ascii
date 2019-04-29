#include <stdio.h>


/* 
rotation cipher encryption
*/

int main()

{
    int pk=0;
printf ("enter 1 to encrypt roataion cipher with key\n enter 2 to decrypt roatation cyper with key\n");
scanf ("%d", &pk);
if (pk==1)
{

	unsigned char text[1000]; 
	int i, key; 
	char num;
	
	
	printf("enter message to encript :\n");
	scanf(" %[^\n]s", text); 
	printf("enter key:\n");
	scanf(" %d", &key);
    printf("\n");
	for(i=0; text[i] != '\0'; ++i) { 
		num = text[i]; 
		if(num >= 65 && num <= 90) { 
			num = num + key; 
			if(num < 65) { 
			num = num + 26;
			}
			if(num > 90) { 
				num = num - 26; 
			}
			
			text[i] = num; 
		}
	} 
	
	printf("your encrypted message is:\n%s\nthe key is \n%d", text, key); 
	
	return 0;
}

else if (pk==2)
{

	unsigned char text[1000]; 
	int i, key; 
	char num;
	
	
	printf("enter message to decript:\n");
	scanf(" %[^\n]s", text); 
	printf("enter key:\n");
	scanf(" %d", &key);
	printf("\n");
	for(i=0; text[i] != '\0'; ++i) { 
		num = text[i]; 
		if(num >= 65 && num <= 90) { 
			num = num - key; 
			if(num < 65) { 
			num = num + 26;
			}
			if(num > 90) { 
				num = num - 26; 
			}
		}

			text[i] = num; 
		
	} 
	


	printf("your encrypted message is:\n%s\nthe key is \n%d", text, key); 
}

	return 0;
}