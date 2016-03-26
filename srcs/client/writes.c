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

void	net_client_write_float(t_net_client *client, float value)
{
	net_buffer_write_float(client->wbuffer, value);
}

void	net_client_write_double(t_net_client *client, double value)
{
	net_buffer_write_double(client->wbuffer, value);
}

void	net_client_write_string(t_net_client *client, char *value)
{
	net_buffer_write_string(client->wbuffer, value);
}
