#include <stddef.h>
#ifndef PATH_IN_SINGLY_LINKED_LIST
#define PATH_IN_SINGLY_LINKED_LIST
typedef struct list_s
{
	char *path;
	struct list_s *next;
} list_t;
list_t *add_node(list_t **head, char *str);
void free_list(list_t *head);
char *_getenv(const char *name);
char *_strcpy(char *dest, char *src);
void split_string(char *line, char **strings, char *delim);
size_t print_list(const list_t *h);
char *_getenv(const char *name);
char *_strcpy(char *dest, char *src);
void split_string(char *line, char **strings, char *delim);

#endif
