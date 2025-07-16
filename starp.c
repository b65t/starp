#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char project_name[25];
	char language[10];

	puts("setting up a project");
	puts("what language ?");

	scanf("%9s", language);

	printf("setting %s as language\n", language);
	puts("what the project name ?");

	scanf("%24s", project_name);

	puts("making the project");

	if ((strcmp(language, "c") == 0) ||
	    (strcmp(language, "cpp") == 0) ||
	    (strcmp(language, "c++") == 0) ||
	    (strcmp(language, "html") == 0) ||
	    (strcmp(language, "go") == 0 ) ||
	    (strcmp(language, "java") == 0)) {
		setup(project_name, language);
	} else if (strcmp(language, "web") == 0) {
		puts("settings up a web project");
		char style[10]

		puts("please enter styling framework");

		scanf("%9s", style);

		if (strcmp(stlye, "scss") = 0) {
			puts("style.scss");
			web_setup(project_name, style);
		}
	} else {
		printf("pls enter a language");
	}
	return 0;
}
