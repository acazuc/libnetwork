#include "network.h"

void	net_client_write_int8(t_net_client *client, int8_t value)
{
	net_buffer_write_int8(client->wbuffer, value);
}

void	net_client_write_uint8(t_net_client *client, uint8_t value)
{
	net_buffer_write_uint8(client->wbuffer, value);
}

void	net_client_write_int16(t_net_client *client, int16_t value)
{
	net_buffer_write_int16(client->wbuffer, value);
}

void	net_client_write_uint16(t_net_client *client, uint16_t value)
{
	net_buffer_write_uint16(client->wbuffer, value);
}

void	net_client_write_int32(t_net_client *client, int32_t value)
{
	net_buffer_write_int32(client->wbuffer, value);
}

void	net_client_write_uint32(t_net_client *client, uint32_t value)
{
	net_buffer_write_uint32(client->wbuffer, value);
}

void	net_client_write_int64(t_net_client *client, int64_t value)
{
	net_buffer_write_int64(client->wbuffer, value);
}

void	net_client_write_uint64(t_net_client *client, uint64_t value)
{
	net_buffer_write_uint64(client->wbuffer, value);
}
