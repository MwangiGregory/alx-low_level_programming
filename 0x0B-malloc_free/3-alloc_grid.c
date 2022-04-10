#include <stdlib.h>
/**
 * init_2d_array - initializes a two dimensional integer
 * array with the value 0. Use of one loop since elements of a
 * matrix are stored in contiguous memory(sequentially).
 * @elements: pointer to first element of first row of a 2d array
 * @row: height of 2d array
 * @column: width of 2d array
 */
void init_2d_array(int *elements, int row, int column)
{
	int i;
	int size = row * column;

	for (i = 0; i < size; i++)
	{
		elements[i] = 0;
		i++;
	}
}

/**
 * alloc_grid - allocates memory for a 2d array
 * @width: width of the 2d array
 * @height: height of the 2d array
 *
 * Return: NULL if width or height is 0 or less than 0 and if
 * malloc fails. Return pointer to 2d array otherwise
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int *elements;
	int w, h;
	int *p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	elements = malloc(sizeof(int) * width * height);
	matrix = malloc(sizeof(int *) * height);

	if (elements == NULL || matrix == NULL)
	{
		free(elements);
		free(matrix[0]);
		free(matrix[1]);
		return (NULL);
	}
	w = 0;
	for (h = 0; h < height; h++)
	{
		/*address of first element of each row*/
		matrix[h] = &elements[w];
		w += width;
	}
	init_2d_array(elements, height, width);
	return (matrix);
}
