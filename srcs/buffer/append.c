#include "network.h"

void	net_buffer_append(t_net_buffer *buffer, void *value, size_t len)
{
	memcpy(buffer->data + buffer->position, value, len);
	buffer->position += len;
}
