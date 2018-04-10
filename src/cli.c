#include <stdio.h>
#include <stdint.h>
#include <string.h>


/**
 * cli.c
 */
int main(void)
{
    char sCommand[10];
    uint32_t ulAddress;
    scanf("%s%lx", sCommand, &ulAddress);
	if(!strcmp(sCommand, "bootm"))
	{
	    (*((void (*)())(ulAddress)))();

	}
	
	return 0;
}
