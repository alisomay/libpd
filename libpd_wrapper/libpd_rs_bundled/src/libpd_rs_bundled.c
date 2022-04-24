#ifndef LIBPD_RS_BUNDLED
#define LIBPD_RS_BUNDLED

#include "libpd_rs_bundled.h"
#include <stdio.h>

// Externals
void freeverb_tilde_setup();
void moog_tilde_setup();
//

void libpd_rs_bundled_setup()
{
    printf("SETTING UP!");
    // Externals
    freeverb_tilde_setup();
    moog_tilde_setup();
    //
}

#endif
