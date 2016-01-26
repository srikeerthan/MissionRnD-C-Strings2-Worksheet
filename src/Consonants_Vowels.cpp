/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>


void count_vowels_and_consonants(char *str,int *consonants, int *vowels){

	*consonants = 0;
	*vowels = 0;
	if (str == NULL)
		return;
	else if (str[0] == '\0')
		return;
	else
	{
		int cha;
		for (cha = 0; str[cha]; cha++)
		{
			if (str[cha] == 'a' || str[cha] == 'e' || str[cha] == 'i' || str[cha] == 'o' || str[cha] == 'u')
				*vowels += 1;
			else if (str[cha] == 'A' || str[cha] == 'E' || str[cha] == 'I' || str[cha] == 'O' || str[cha] == 'U')
				*vowels += 1;
			else if ((str[cha] >= 'a'&&str[cha] <= 'z') || str[cha] >= 'A'&&str[cha] <= 'Z')
				*consonants += 1;
			else
				continue;
		}
		return;
	}
}
