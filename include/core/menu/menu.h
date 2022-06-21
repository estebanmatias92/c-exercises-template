#ifndef __MENU__
#define __MENU__

void show_menu_int(int *list, unsigned int length);
void show_menu_string(char **list, unsigned int length);
void launch_exercise_int(int option);
void launch_exercise_string(char *option);
int stdin_populate_array(char *message, void *array, const unsigned int min, char data_type);

#endif