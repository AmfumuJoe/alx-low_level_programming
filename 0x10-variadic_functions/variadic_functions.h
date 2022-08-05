#ifindef VARIADIC_FUCTIONS_H
#define VARIADIC_FUCTIONS_H

#include <stdarg.h>

/**
 * @struct printer - Anew struct type defining a printer.
 * @symbol: A symbol representing a data type.
 * @print: A fuction pointer to a fuction that prints
            a data type corresponding to symbol.
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ..);
void print_stings(const char *separator, const unsigned int n, ...);
void print all(const char * const format, ...);

#endif
