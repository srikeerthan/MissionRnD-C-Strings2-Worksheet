/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	if (str==NULL)
		return NULL;
	else if (str[0] == '\0')
	{
		char *word = (char *)malloc(1);
		word[0] = '\0';
		return word;
	}
	else
	{
		int index,first=0,last=0,i,count=0;
		for (index = 0; str[index]; index++)
		{
			if (str[index] == ' ')
			{
				if (count == 1)
				{
					last = index;
					count = 0;
				}
			}
			else
			{
				if (count == 0)
				{
					first = index;
					count = 1;
				}
			}
		}
		if (count == 1)
			last = index;
		char *last_word = (char *)malloc(last - first+2);
		for ( i = 0; first< last; first++)
		{
			last_word[i] = str[first];
			i++;
		}
		last_word[i] = '\0';
		return last_word;
	}
}
