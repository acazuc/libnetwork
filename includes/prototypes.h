#ifndef PROTOTYPES_H
# define PROTOTYPES_H

t_net_buffer	*net_buffer_create(void);
t_net_client	*net_client_create(void);
t_net_server	*net_server_create(void);
int				net_server_listen(t_net_server *server, int port);
t_net_client	*net_server_accept(t_net_server *server);
void			net_buffer_append(t_net_buffer *buffer, void *data, size_t len);
void			net_buffer_write_int8(t_net_buffer *buffer, int8_t value);
void			net_buffer_write_uint8(t_net_buffer *buffer, uint8_t value);
void			net_buffer_write_int16(t_net_buffer *buffer, int16_t value);
void			net_buffer_write_uint16(t_net_buffer *buffer, uint16_t value);
void			net_buffer_write_int32(t_net_buffer *buffer, int32_t value);
void			net_buffer_write_uint32(t_net_buffer *buffer, uint32_t value);
void			net_buffer_write_int64(t_net_buffer *buffer, int64_t value);
void			net_buffer_write_uint64(t_net_buffer *buffer, uint64_t value);
void			net_buffer_read(t_net_buffer *buffer, void *addr, size_t len);
int8_t			net_buffer_read_int8(t_net_buffer *buffer);
uint8_t			net_buffer_read_uint8(t_net_buffer *buffer);
int16_t			net_buffer_read_int16(t_net_buffer *buffer);
uint16_t		net_buffer_read_uint16(t_net_buffer *buffer);
int32_t			net_buffer_read_int32(t_net_buffer *buffer);
uint32_t		net_buffer_read_uint32(t_net_buffer *buffer);
int64_t			net_buffer_read_int64(t_net_buffer *buffer);
uint64_t		net_buffer_read_uint64(t_net_buffer *buffer);

#endif
