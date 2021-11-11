#include "libft.h"
#include <stdio.h>
int main() {
	
 char *res = ft_itoa(-2147483648);
                printf("%s\n", res);
                free(res);
	
	
	return 0;
}
