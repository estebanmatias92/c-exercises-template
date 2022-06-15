#ifndef __ARRAYS__
#define __ARRAYS__

int array_search_int(int *array,  unsigned int length, int item);
int array_search_string(char **array, unsigned int length, char *item);

int *array_sort_int(int *array, size_t length, char *order);
float *array_sort_float(float *array, size_t length, char *order);
char *array_sort_char(char *array, size_t length, char *order);

void array_push_int(int *array, size_t length, int item);
void array_push_float(float *array, size_t length, float item);
void array_push_char(char *array, size_t length, char item);

int array_min_int(int *array, size_t length);
float array_min_float(float *array, size_t length);
char array_max_char(char *array, size_t length);

int array_max_int(int *array, size_t length);
float array_max_float(float *array, size_t length);
char array_min_char(char *array, size_t length);

int array_average_int(int *array, size_t length);
float array_average_float(float *array, size_t length);

#endif