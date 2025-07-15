#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void get_language(const char* language, const char* project_name) {
	if (strcmp(language, "c") == 0) {
		char copy_file[50];
		sprintf(copy_file, "cp /home/islam/projects/starp/templates/main.c ./%s/main.c", project_name);
		system(copy_file);
	} else if ((strcmp(language, "cpp") == 0) || (strcmp(language, "c++") == 0)) {
		char copy_file[50];
		sprintf(copy_file, "cp /home/islam/projects/starp/templates/main.cpp ./%s/main.cpp", project_name);
		system(copy_file);
	} else if ((strcmp(language, "html") == 0) || (strcmp(language, "web")) == 0) {
		char copy_file[50];
		sprintf(copy_file, "cp /home/islam/projects/starp/templates/index.html ./%s/index.html || cp /home/islam/projects/starp/templates/style.css", project_name);
		system(copy_file);
	} else if (strcmp(language, "go") == 0) {
		char copy_file[50];
                sprintf(copy_file, "cp /home/islam/projects/starp/templates/main.go ./%s/main.go", project_name);
                system(copy_file);
	}
}

void setup(const char* project_name, const char* language) {
	char make_folder[50];
	char make_files[50];
	sprintf(make_folder, "mkdir ./%s", project_name);
	system(make_folder);
	get_language(language, project_name);
}

int main() {
	char project_name[25];
	char language[10];

	puts("setting up a project");
	puts("what language ?");

	scanf("%9s", language);

	printf("setting %s as language", language);
	puts("what the project name ?");

	scanf("%24s", project_name);

	puts("making the project");

	if ((strcmp(language, "c") == 0) ||
	    (strcmp(language, "cpp") == 0) ||
	    (strcmp(language, "c++") == 0) ||
	    (strcmp(language, "html") == 0) ||
	    (strcmp(language, "web") == 0 ) ||
	    (strcmp(language, "go") == 0 )) {
		setup(project_name, language);
	} else {
		printf("pls enter a language");
	}
	return 0;
}
