#include "api.h"

/* Copyright © 2005-2014 Rich Felker, et al. */

/* Permission is hereby granted, free of charge, to any person obtaining */
/* a copy of this software and associated documentation files (the */
/* "Software"), to deal in the Software without restriction, including */
/* without limitation the rights to use, copy, modify, merge, publish, */
/* distribute, sublicense, and/or sell copies of the Software, and to */
/* permit persons to whom the Software is furnished to do so, subject to */
/* the following conditions: */

/* The above copyright notice and this permission notice shall be */
/* included in all copies or substantial portions of the Software. */

/* musl 1.1.24 */

int memcmp(const void* vl, const void* vr, size_t n) {
    const unsigned char* l=vl;
    const unsigned char* r=vr;
    for (; n && *l == *r; n--, l++, r++)
        /*nop*/;
    return n ? *l - *r : 0;
}
