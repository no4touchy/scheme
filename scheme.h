#ifndef SCHEME_H
#define SCHEME_H

#include <string>

#include <gmp.h>

namespace scheme {
    // Types
    typedef enum {
        BOOLEAN,
        INTEGER,
        RATIONAL,
        REAL
    } object_type;
    typedef struct {
        object_type type;
        union {
            struct {
                bool value;
            } boolean;
            struct {
                mpz_t value;
            } integer;
            struct {
                mpq_t value;
            } rational;
        } data;
    } object;

    // object functions
    object *alloc_object();

    // read functions
    bool balanced_parantheses(std::string);
};

#endif

