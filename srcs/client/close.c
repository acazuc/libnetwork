#include "network.h"

int		net_client_close(t_net_client *client)
{
	net_buffer_free(client->rbuffer);
	net_buffer_free(client->wbuffer);
	if (!client)
		return (0);
	if (close(client->fd) == -1)
	{
		free(client);
		return (0);
	}
	free(client);
	return (1);
}
