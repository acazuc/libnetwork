#ifndef STRUCTURES_H
# define STRUCTURES_H

# define BUFFER_SIZE UINT16_MAX

typedef struct s_net_buffer	t_net_buffer;
typedef struct s_net_client	t_net_client;
typedef struct s_net_server t_net_server;
typedef struct sockaddr_in t_sockaddr_in;
typedef struct sockaddr t_sockaddr;

struct s_net_buffer
{
	char		data[BUFFER_SIZE];
	uint16_t	position;
};

struct s_net_client
{
	t_net_buffer		*rbuffer;
	t_net_buffer		*wbuffer;
	t_sockaddr_in	sock;
	int				fd;
};

struct s_net_server
{
	t_sockaddr_in	sock;
	int				fd;
};

#endif
