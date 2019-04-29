#include <stdio.h>


/* 
rotation cipher encryption
encrypts your massege using a rotion method when given a key. the key determins the amount the rotion will increase or decreas by
giving an output in encrypted text.
*/

int main()

{
    printf ("welcome to the place to decrypt and encrypte your secret messages\n");
    int pk=0;
printf ("enter 1 to encrypt roataion cipher with key\nenter 2 to decrypt roatation cyper with key\n");
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
	for(i=0; text[i] != '\0'; ++i) //for every charactor written it will do the following 
	{ 
		num = text[i]; //converts text into an integer 
		if(num >= 65 && num <= 90) //only asses text leaving out spaces, full stops, etc,
		{ 
			num = num + key; //increses or decreases the ascii code by the key (the rotation)
			if(num < 65) //if ascii is less then 65 (A) it is increased by 26 (the distance between A and Z) so that the code only rotates around points 65 and 90
			{ 
			num = num + 26;
			}
			if(num > 90) { 
				num = num - 26; //if the aski is grater then 90 then it is - by 26
			}
			
			text[i] = num; 
		}
	} 
	
	printf("your encrypted message is:\n%s\nthe key is \n%d", text, key); 
	
	return 0;
}

/*
 decryption rotaion cipher
 decrypts and incripted messaeg when given a key by adding or subtraction the given key so that it can output the decypted messaage
 */
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
	for(i=0; text[i] != '\0'; ++i) //for every charactor written it will do the following
	{ 
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
	


	printf("your decrypted message is:\n%s\nthe key is \n%d", text, key); 
}

	return 0;
}