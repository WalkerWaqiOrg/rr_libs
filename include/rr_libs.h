#ifndef RR_LIBS_LIBRARY_H
#define RR_LIBS_LIBRARY_H

#ifdef __cplusplus
extern "C" {
#endif

void rr_slow_hash(const void *data, unsigned int length, unsigned char *hash);

#ifdef __cplusplus
}
#endif

#endif // RR_LIBS_LIBRARY_H