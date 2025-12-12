int strlenYH(const char* str)
{
	if (!str) return -1;
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}

void strcpyYH(const char* str1, char* str2)
{
	if (!str1 || !str2)
	{
		return;
	}
	while (*str1)
	{
		*str2 = *str1;
		str1++;
		str2++;
	}
	*str2 = '\0';
}

void strcatYH(char* str1, char* str2)
{
	if (!str1 || !str2)
	{
		return;
	}
	str1 += strlenYH(str1);
	while (*str2)
	{
		*str1 = *str2;
		str1++;
		str2++;
	}
	*str1 = '\0';
}