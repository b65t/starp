#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void get_user_choice(const char* language, const char* project_name) {
	if (strcmp(language, "c") == 0) {
		char copy_file[50];
		sprintf(copy_file, "cp /etc/starp/main.c ./%s/main.c", project_name);
		system(copy_file);
	} else if ((strcmp(language, "cpp") == 0) || (strcmp(language, "c++") == 0)) {
		char copy_file[50];
		sprintf(copy_file, "cp /etc/starp/main.cpp ./%s/main.cpp", project_name);
		system(copy_file);
	} else if ((strcmp(language, "html") == 0) || (strcmp(language, "web")) == 0) {
		char copy_file[50];
		sprintf(copy_file, "cp /etc/starp/index.html ./%s/index.html && cp /etc/starp/style.css ./%s/style.css", project_name, project_name);
		system(copy_file);
	} else if (strcmp(language, "go") == 0) {
		char copy_file[50];
                sprintf(copy_file, "cp /etc/starp/main.go ./%s/main.go", project_name);
                system(copy_file);
	} else if (strcmp(language, "java") == 0) {
		char copy_file[50];
                sprintf(copy_file, "cp /etc/starp/main.java ./%s/main.java", project_name);
                system(copy_file);
	}
}

void setup(const char* project_name, const char* language) {
	char make_folder[50];
	char make_files[50];
	sprintf(make_folder, "mkdir ./%s", project_name);
	system(make_folder);
	get_user_choice(language, project_name);
}

void get_user_choice_web(const char* project_name, const char* style) {
	if (strcmp(style, "scss") == 0) {
		char copy_file[50];
		sprintf(copy_file, "cp /etc/starp/style.scss ./%s/style.scss", project_name);
		system(copy_file);
	}
}

void web_setup(const char* project_name, const char* style) {
	char make_folder[50];
	char make_files[50];
	sprintf(make_folder, "mkdir ./%s", project_name);
	system(make_folder);
	get_user_choice_web(style);
}
