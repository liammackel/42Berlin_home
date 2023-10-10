#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int destlen;
	int i;

	destlen = 0;
	i = 0;
	while(dest[destlen] != '\0')
	{
		destlen++;
	}
	while(src[i] != '\0')
	{
		dest[i + destlen] = src[i];
		i++;
	}
	dest[i + destlen] = '\0';
	return dest;
}
/*
int	main(void)
{
	char destination[30];
	char source[30];

	src = "world!";
	dest[100] = "hello ";
	ft_strcat(destination, source);
	printf("after: %s\n", destination);
	return 0;

}

#include <stdio.h>
#include <string.h>

void custom_strcat(char *dest, const char *src) {
    // Find the end of the destination string
    while (*dest != '\0') {
        dest++;
    }

    // Copy the characters from src to dest
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    // Null-terminate the concatenated string
    *dest = '\0';
}
*/
int main() {
    char str1[100] = "Hello, ";
    char str2[] = "world!";

    // Call custom_strcat to concatenate str2 to str1
    ft_strcat(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}
