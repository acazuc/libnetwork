#ifndef NETWORK_H
# define NETWORK_H

# include <netinet/tcp.h>
# include <sys/socket.h>
# include <sys/types.h>
# include <arpa/inet.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <string.h>
# include <errno.h>
# include <fcntl.h>

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
	t_net_buffer	*rbuffer;
	t_net_buffer	*wbuffer;
	fd_set			fdst;	
	t_sockaddr_in	sock;
	int				fd;
};

struct s_net_server
{
	t_sockaddr_in	sock;
	int				fd;
};

t_net_buffer	*net_buffer_create(void);
t_net_client	*net_client_create(void);
t_net_server	*net_server_create(void);
int				net_server_listen(t_net_server *server, int port);
t_net_client	*net_server_accept(t_net_server *server);
void			net_server_close(t_net_server *server);
void			net_buffer_append(t_net_buffer *buffer, void *data, size_t len);
void			net_buffer_write_int8(t_net_buffer *buffer, int8_t value);
void			net_buffer_write_uint8(t_net_buffer *buffer, uint8_t value);
void			net_buffer_write_int16(t_net_buffer *buffer, int16_t value);
void			net_buffer_write_uint16(t_net_buffer *buffer, uint16_t value);
void			net_buffer_write_int32(t_net_buffer *buffer, int32_t value);
void			net_buffer_write_uint32(t_net_buffer *buffer, uint32_t value);
void			net_buffer_write_int64(t_net_buffer *buffer, int64_t value);
void			net_buffer_write_uint64(t_net_buffer *buffer, uint64_t value);
void			net_buffer_write_float(t_net_buffer *buffer, float value);
void			net_buffer_write_double(t_net_buffer *buffer, double value);
void			net_buffer_write_string(t_net_buffer *buffer, char *value);
void			net_buffer_read(t_net_buffer *buffer, void *addr, size_t len);
int8_t			net_buffer_read_int8(t_net_buffer *buffer);
uint8_t			net_buffer_read_uint8(t_net_buffer *buffer);
int16_t			net_buffer_read_int16(t_net_buffer *buffer);
uint16_t		net_buffer_read_uint16(t_net_buffer *buffer);
int32_t			net_buffer_read_int32(t_net_buffer *buffer);
uint32_t		net_buffer_read_uint32(t_net_buffer *buffer);
int64_t			net_buffer_read_int64(t_net_buffer *buffer);
uint64_t		net_buffer_read_uint64(t_net_buffer *buffer);
float			net_buffer_read_float(t_net_buffer *buffer);
double			net_buffer_read_double(t_net_buffer *buffer);
char			*net_buffer_read_string(t_net_buffer *buffer);
void			net_buffer_free(t_net_buffer *buffer);
void			net_buffer_clear(t_net_buffer *buffer);
ssize_t			net_buffer_send(t_net_buffer *buffer, int fd);
void			net_buffer_free(t_net_buffer *buffer);
void			net_client_write_int8(t_net_client *client, int8_t value);
void			net_client_write_uint8(t_net_client *client, uint8_t value);
void			net_client_write_int16(t_net_client *client, int16_t value);
void			net_client_write_uint16(t_net_client *client, uint16_t value);
void			net_client_write_int32(t_net_client *client, int32_t value);
void			net_client_write_uint32(t_net_client *client, uint32_t value);
void			net_client_write_int64(t_net_client *client, int64_t value);
void			net_client_write_uint64(t_net_client *client, uint64_t value);
void			net_client_write_float(t_net_client *client, float value);
void			net_client_write_double(t_net_client *client, double value);
void			net_client_write_string(t_net_client *client, char *value);
int8_t			net_client_read_int8(t_net_client *client);
uint8_t			net_client_read_uint8(t_net_client *client);
int16_t			net_client_read_int16(t_net_client *client);
uint16_t		net_client_read_uint16(t_net_client *client);
int32_t			net_client_read_int32(t_net_client *client);
uint32_t		net_client_read_uint32(t_net_client *client);
int64_t			net_client_read_int64(t_net_client *client);
uint64_t		net_client_read_uint64(t_net_client *client);
float			net_client_read_float(t_net_client *client);
double			net_client_read_double(t_net_client *client);
char			*net_client_read_string(t_net_client *client);
int				net_client_close(t_net_client *client);
int				net_client_send(t_net_client *client);
ssize_t			net_client_read(t_net_client *client);

#endif
