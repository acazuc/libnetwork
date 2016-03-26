#include "network.h"

int8_t		net_client_read_int8(t_net_client *client)
{
	return (net_buffer_read_int8(client->rbuffer));
}

uint8_t		net_client_read_uint8(t_net_client *client)
{
	return (net_buffer_read_uint8(client->rbuffer));
}

int16_t		net_client_read_int16(t_net_client *client)
{
	return (net_buffer_read_int16(client->rbuffer));
}

uint16_t	net_client_read_uint16(t_net_client *client)
{
	return (net_buffer_read_uint16(client->rbuffer));
}

int32_t		net_client_read_int32(t_net_client *client)
{
	return (net_buffer_read_int32(client->rbuffer));
}

uint32_t	net_client_read_uint32(t_net_client *client)
{
	return (net_buffer_read_uint32(client->rbuffer));
}

int64_t		net_client_read_int64(t_net_client *client)
{
	return (net_buffer_read_int64(client->rbuffer));
}

uint64_t	net_client_read_uint64(t_net_client *client)
{
	return (net_buffer_read_uint64(client->rbuffer));
}

float		net_client_read_float(t_net_client *client)
{
	return (net_buffer_read_float(client->rbuffer));
}

double		net_client_read_double(t_net_client *client)
{
	return (net_buffer_read_double(client->rbuffer));
}
