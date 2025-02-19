#pragma once

#include <stream.hpp>

#include "format.hpp"

filter_strm_ptr get_encoder(format_t type, stream_ptr &&base);

filter_strm_ptr get_decoder(format_t type, stream_ptr &&base);

void compress(const char *method, const char *infile, const char *outfile);

void decompress(char *infile, const char *outfile);

namespace rust {
bool decompress(const unsigned char *in, uint64_t in_size, int fd);
}
