#include "scheme.h"

namespace scheme {
    object *alloc_object(){
        return new object;
    }
};
