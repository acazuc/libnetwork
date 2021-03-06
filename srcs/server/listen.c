#include "network.h"

int		net_server_listen(t_net_server *server, int port)
{
	if ((server->fd = socket(AF_INET, SOCK_STREAM | SOCK_NONBLOCK, 0)) == -1)
		return (0);
	server->sock.sin_family = AF_INET;
	server->sock.sin_addr.s_addr = htonl(INADDR_ANY);
	server->sock.sin_port = htons(port);
	if (bind(server->fd, (t_sockaddr*)&server->sock, sizeof(server->sock)) == -1)
	{
		close(server->fd);
		return (0);
	}
	if (listen(server->fd, 255) == -1)
	{
		close(server->fd);
		return (0);
	}
	return (1);
}
