#include "network.h"

t_net_client	*net_accept(t_net_server *server)
{
	struct sockaddr_in	sock;
	t_net_client		*client;
	int					fd;

	client = NULL;
	if ((fd = accept(server->fd, (t_sockaddr *)&sock, (socklen_t*)sizeof(sock))) != -1)
	{
		if (!(client = net_client_create()))
			return (NULL);
		client->sock = sock;
	}
	return (client);
}
