#include "network.h"

void	net_buffer_write_int8(t_net_buffer *buffer, int8_t value)
{
	net_buffer_append(buffer, &value, sizeof(value));
}

void	net_buffer_write_uint8(t_net_buffer *buffer, uint8_t value)
{
	net_buffer_append(buffer, &value, sizeof(value));
}

void	net_buffer_write_int16(t_net_buffer *buffer, int16_t value)
{
	net_buffer_append(buffer, &value, sizeof(value));
}

void	net_buffer_write_uint16(t_net_buffer *buffer, uint16_t value)
{
	net_buffer_append(buffer, &value, sizeof(value));
}

void	net_buffer_write_int32(t_net_buffer *buffer, int32_t value)
{
	net_buffer_append(buffer, &value, sizeof(value));
}

void	net_buffer_write_uint32(t_net_buffer *buffer, uint32_t value)
{
	net_buffer_append(buffer, &value, sizeof(value));
}

void	net_buffer_write_int64(t_net_buffer *buffer, int64_t value)
{
	net_buffer_append(buffer, &value, sizeof(value));
}

void	net_buffer_write_uint64(t_net_buffer *buffer, uint64_t value)
{
	net_buffer_append(buffer, &value, sizeof(value));
}

void	net_buffer_write_float(t_net_buffer *buffer, float value)
{
	net_buffer_append(buffer, &value, sizeof(value));
}

void	net_buffer_write_double(t_net_buffer *buffer, double value)
{
	net_buffer_append(buffer, &value, sizeof(value));
}

void	net_buffer_write_string(t_net_buffer *buffer, char *str)
{
	uint16_t	len;

	len = 0;
	while (str[len])
		len++;
	net_buffer_append(buffer, &len, 2);
	net_buffer_append(buffer, str, len);
}
