#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main( int argc, char *argv[] )
{
	/* Reading arguments */
	if ( argv[1] == NULL ) {
		fprintf(stderr, "[USAGE]: brthecho [opts] [args]\n");
		exit(1);
	} else if ( strcmp(argv[1], "-v") == 0 ) {
		printf("brunotheecho: v0.1\n");
		exit(0);
	} else {
		printf("%s\n", argv[1]);
		exit(0);
	}

	fprintf(stderr, "Whoever did this... how did you broke an echo program???");
	return 1;
}
