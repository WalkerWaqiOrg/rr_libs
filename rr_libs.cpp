#include "rr_libs.h"
#include "hash.h"

void rr_slow_hash(const void *data, unsigned int length, unsigned char *hash) {
    crypto::cn_slow_hash(data, length, reinterpret_cast<crypto::hash&>(hash));
}
