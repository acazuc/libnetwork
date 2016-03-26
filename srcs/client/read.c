#include "network.h"

ssize_t		net_client_read(t_net_client *client)
{
	uint16_t	size;
	ssize_t		readed;

	if ((readed = read(client->fd, &size, sizeof(size))) == -1 && errno != EWOULDBLOCK && errno != EAGAIN)
		return (-1);
	else if (readed == -1)
		return (0);
	if (read(client->fd, &client->rbuffer->data, size) == -1)
		return (-1);
	return (readed + size);
}
