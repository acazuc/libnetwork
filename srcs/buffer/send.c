#include "network.h"

ssize_t		net_buffer_send(t_net_buffer *buffer, int fd)
{
	ssize_t		tmp;

	if (buffer->position == 2)
		return (0);
	((uint16_t*)buffer->data)[0] = buffer->position - 2;
	if ((tmp = write(fd, buffer->data, buffer->position)) == -1 || tmp != buffer->position)
		return (-1);
	net_buffer_clear(buffer);
	return (tmp);
}
