#include "network.h"

t_net_client	*net_server_accept(t_net_server *server)
{
	t_sockaddr_in		sock;
	t_net_client		*client;
	socklen_t			socklen;
	int					fd;
	int					not;
	int					flags;

	not = 0;
	client = NULL;
	socklen = (socklen_t)sizeof(sock);
	if ((fd = accept(server->fd, (t_sockaddr*)&sock, &socklen)) != -1)
	{
		if (!(client = net_client_create()))
		{
			close(fd);
			return (NULL);
		}
		client->sock = sock;
		client->fd = fd;
		if (setsockopt(fd, IPPROTO_TCP, TCP_NODELAY, &not, sizeof(not)) == -1)
		{
			close(fd);
			return (NULL);
		}
		if ((flags = fcntl(fd, F_GETFL, 0) == -1))
		{
			close(fd);
			return (NULL);
		}
		flags |= O_NONBLOCK;
		if (fcntl(fd, F_SETFL, flags) == -1)
		{
			close(fd);
			return (NULL);
		}
	}
	return (client);
}
