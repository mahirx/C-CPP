#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
	char word[80];
	int i, j, len;
	bool state = true;;
	gets(word);


	len=strlen(word);


	for (i = 0, j = (len-1); i < (len/2) ; i++, j--)
	{
		if (word[i] != word[j])
		{
			state = false;
			break;
		}
	}


	if (state == true)
	{
		printf("%s is a palindrome.\n", word);
	}

	
	else{
		printf("%s is not a palindrome.\n", word);
	}


	return 0;
}