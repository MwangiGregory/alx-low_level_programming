#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func(char *s) - selects the function to 
 * perform the operation asked by the user
 * @s: pointer to character representing operation to
 * be done
 * 
 * Return: pointer to a function on success, NULL on failure
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        	{"+", op_add},
        	{"-", op_sub},
        	{"*", op_mul},
        	{"/", op_div},
        	{"%", op_mod},
        	{NULL, NULL}
    	};
    	int i;
}
