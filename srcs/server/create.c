#include "network.h"

t_net_server	*net_server_create(void)
{
	t_net_server	*server;

	if (!(server = malloc(sizeof(*server))))
		return (NULL);
	return (server);
}
