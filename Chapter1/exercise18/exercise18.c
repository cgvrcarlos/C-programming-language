#include <stdio.h>

main()
{
	int c;		// Variable for each char
	
	int nb;		// Counter for blanks
	int nt;		// Counter for tabs
	int nl;		// Counter for new lines
	
	/* Initializing Counters */
	nb = 0;
	nt = 0;
	nl = 0;
	
	while((c = getchar()) != EOF)
	{
		if(c == ' ')
			nb++;
		else if(c == '\t')
			nt++;
		else if(c == '\n')
			nl++;
	}
	
	printf("Number of blanks: %d\n", nb);
	printf("Number of tabs: %d\n", nt);
	printf("Number of new lines: %d\n", nl);
	
}
