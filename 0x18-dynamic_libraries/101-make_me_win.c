#include <stdlib.h>

void *malloc(size_t size)
{
/* Override malloc() to do nothing */
(void)size;
return NULL;
}

int rand(void)
{
/* Override rand() to always return the winning numbers */
return 9;
}
