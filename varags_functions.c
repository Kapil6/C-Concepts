#include<stdio.h>
#include<stdarg.h>

int func(char *fmt,...);

int main()
{
	int x = 5;
	char t = 'A';
	char arr[] = "Happy";
	func("d");

}

int func(char *fmt, ...)
{
	int x;
	char y;
	char *z;
	va_list ap;

	va_start(ap, fmt);
	
	while(*fmt)	
	{
		switch(*fmt++)
		{
			case 'd':
					x = va_arg(ap, int);
					printf("Arg : %d\n", x);
					break;
			case 'c':
					y = (char)va_arg(ap, int);
					printf("Arg : %c\n", y);
					break;
			case 's':
					z = va_arg(ap, char *);
					printf("Arg : %s\n", z);
					break;
		}
	}
	va_end(ap);
	return 0;
}
