#include "network.h"

void	net_buffer_read(t_net_buffer *buffer, void *addr, size_t len)
{
	memcpy(addr, buffer->data + buffer->position, len);
}
