/**
 * _strcpy - copies string including terminating null to dest
 * @dest: pointer to buffer
 * @src: string to copy
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i ) = *(src + i);
		i++;
	}
	return dest;
}