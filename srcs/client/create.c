#include "network.h"

t_net_client	*net_client_create(void)
{
	t_net_client	*client;

	if (!(client = malloc(sizeof(*client))))
		return (NULL);
	if (!(client->rbuffer = net_buffer_create()))
	{
		free(client);
		return (NULL);
	}
	if (!(client->wbuffer = net_buffer_create()))
	{
		free(client->rbuffer);
		free(client);
		return (NULL);
	}
	return (client);
}
