#include "network.h"

int		net_client_send(t_net_client *client)
{
	if (!client)
		return (0);
	return (net_buffer_send(client->wbuffer, client->fd));
}
