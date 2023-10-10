#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int destlen;
	unsigned int i;

	destlen = 0;
	i = 0;
	while(dest[destlen] != '\0')
	{
		destlen++;
	}
	while(src[i] != '\0' && nb > 0)
	{
		dest[i + destlen] = src[i];
		i++;
        nb--;
	}
	dest[i + destlen] = '\0';
	return dest;
}

int main() {
    char str1[100] = "Hello, ";
    char str2[] = "world!";

    // Call custom_strcat to concatenate str2 to str1
    ft_strncat(str1, str2, 4);

    printf("Concatenated string: %s\n", str1);

    return 0;
}
