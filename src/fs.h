#ifndef FS_H
#define FS_H

uint32_t open(char *path, uint32_t oflags);
uint32_t close(uint32_t fd);
uint32_t read(char *buf, size_t nbytes);

#endif /* FS_H */