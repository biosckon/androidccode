#include <all.h>

int main(int argc, char **argv) {
	int c, nl, nw, nc;
	bool inword = false,
		 iswspace = false;

	nl = nw = nc = 0;

	for (; (c = getchar()) != EOF; nc += 1) {
		if (c == '\n') nl += 1;
		
		iswspace = (
				c == ' '  ||
				c == '\n' ||
				c == '\t'
			);

		if (iswspace && inword) { 
			inword = false;
			nw += 1;
		} 

		if (!iswspace) {
			inword = true;
		}
	}

	printf("%i, %i, %i\n", nl, nw, nc);
}
