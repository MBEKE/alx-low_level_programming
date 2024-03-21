#ifndef MY_SHELL_
#define MY_SHELL_

/* structure template for the linked list node */
typedef struct Path_Node
{
	char *directory;
	struct Path_Node *next;
} Path_Node;
/* end of template */

char *_getenv(const char *name);

int _setenv(const char *name, const char *value, int overwrite);

int _unsetenv(const char *name);

#endif
