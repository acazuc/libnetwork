#include "network.h"

void	net_server_close(t_net_server *server)
{
	shutdown(server->fd, 2);
	close(server->fd);
	free(server);
}
