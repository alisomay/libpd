#ifndef SETUP_LIBPD_RS_BUNDLED
#define SETUP_LIBPD_RS_BUNDLED

#include "setup_libpd_rs_bundled.h"
#include <stdio.h>

// Externals
void freeverb_tilde_setup();
//

void setup_libpd_rs_bundled()
{
    printf("SETTING UP!");
    // Externals
    freeverb_tilde_setup();
    //
}

#endif
