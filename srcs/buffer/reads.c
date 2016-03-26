#include "network.h"

int8_t		net_buffer_read_int8(t_net_buffer *buffer)
{
	int8_t	value;

	net_buffer_read(buffer, &value, sizeof(value));
	return (value);
}

uint8_t		net_buffer_read_uint8(t_net_buffer *buffer)
{
	uint8_t	value;

	net_buffer_read(buffer, &value, sizeof(value));
	return (value);
}

int16_t		net_buffer_read_int16(t_net_buffer *buffer)
{
	int16_t	value;

	net_buffer_read(buffer, &value, sizeof(value));
	return (value);
}

uint16_t	net_buffer_read_uint16(t_net_buffer *buffer)
{
	uint16_t	value;

	net_buffer_read(buffer, &value, sizeof(value));
	return (value);
}

int32_t		net_buffer_read_int32(t_net_buffer *buffer)
{
	int32_t	value;

	net_buffer_read(buffer, &value, sizeof(value));
	return (value);
}

uint32_t	net_buffer_read_uint32(t_net_buffer *buffer)
{
	uint32_t	value;

	net_buffer_read(buffer, &value, sizeof(value));
	return (value);
}

int64_t		net_buffer_read_int64(t_net_buffer *buffer)
{
	int64_t	value;

	net_buffer_read(buffer, &value, sizeof(value));
	return (value);
}

uint64_t		net_buffer_read_uint64(t_net_buffer *buffer)
{
	uint64_t	value;

	net_buffer_read(buffer, &value, sizeof(value));
	return (value);
}

float		net_buffer_read_float(t_net_buffer *buffer)
{
	float	value;

	net_buffer_read(buffer, &value, sizeof(value));
	return (value);
}

double		net_buffer_read_double(t_net_buffer *buffer)
{
	double	value;

	net_buffer_read(buffer, &value, sizeof(value));
	return (value);
}
