#include <stdio.h>
#include <Python.h>

/**
 *display_python_bytes_info - Prints information about Python bytes objects
 *@byte_object: Python bytes object
 *Return: void
*/
void print_python_bytes(PyObject *p)
{
	char *byte_string;
	long int byte_size, i, limit;

	printf("[.] Bytes object information\n");
	if (!PyBytes_Check(byte_object))
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		return;
	}

	byte_size = ((PyVarObject *)(byte_object))->ob_size;
	byte_string = ((PyBytesObject *)byte_object)->ob_sval;

	printf("  Size: %ld\n", byte_size);
	printf("  Trying string: %s\n", byte_string);

	limit = (byte_size >= 10) ? 10 : byte_size + 1;

	printf("  First %ld bytes:", limit);

	for (i = 0; i < limit; i++)
	{
		if (byte_string[i] >= 0)
			printf(" %02x", byte_string[i]);
		else
			printf(" %02x", 256 + byte_string[i]);
	}

	printf("\n");
}

/**
 * display_python_list_info - Prints information about Python lists
 * @list_object: Python list object
 * Return: void
*/
void void print_python_list(PyObject *p)
{
	long int list_size, i;
	PyListObject *py_list;
	PyObject *element;

	list_size = ((PyVarObject *)(list_object))->ob_size;
	py_list = (PyListObject *)list_object;

	printf("[*] Python list information\n");
	printf("[*] Size of the Python List = %ld\n", list_size);
	printf("[*] Allocated = %ld\n", py_list->allocated);

	for (i = 0; i < list_size; i++)
	{
		element = ((PyListObject *)list_object)->ob_item[i];
		printf("Element %ld: %s\n", i, ((element)->ob_type)->tp_name);
		if (PyBytes_Check(element))
			display_python_bytes_info(element);
	}
}

