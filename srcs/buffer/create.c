#include "network.h"

t_net_buffer	*net_buffer_create(void)
{
	t_net_buffer	*buffer;
	size_t		i;

	if (!(buffer = malloc(sizeof(*buffer))))
		return (NULL);
	i = 0;
	while (i < BUFFER_SIZE)
	{
		buffer->data[i] = '\0';
		i++;
	}
	buffer->position = 0;
	return (buffer);
}
