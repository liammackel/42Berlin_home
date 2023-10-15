#include <unistd.h>
#include <string.h>

char *rev_print(char *str) 
{
    int		i;
	int		length;
	char	temp;
	
	i = 0;
	length = 0;
	while (str[length] != '\0')
		length++;
	while (length >= 0)
	{
		temp = str[length];
		str[i] = str[length];
		str[length] = temp;
		write (1, &str[i], 1);
		i++;
		length--;
	}
	return (str);
}

int main() {
    char input[] = "Hello, World!";
    char *result = rev_print(input);
    write(1, "\n", 1);  // Print a newline to separate the reversed string from other output
    return 0;
}