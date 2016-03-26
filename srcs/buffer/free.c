#include "network.h"

void	net_buffer_free(t_net_buffer *buffer)
{
	if (!buffer)
		return ;
	free(buffer);
}
