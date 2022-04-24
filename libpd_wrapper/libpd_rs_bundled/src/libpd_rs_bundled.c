#ifndef LIBPD_RS_BUNDLED
#define LIBPD_RS_BUNDLED

#include "m_pd.h"
#include "../header/libpd_rs_bundled.h"
#include <stdio.h>

// Externals
void freeverb_tilde_setup();
void moog_tilde_setup();
//

void libpd_rs_bundled_setup()
{
    post("Setting up bundled externals with libpd-rs..");
    // Externals
    freeverb_tilde_setup();
    post("freeverb~ -> ok.");
    moog_tilde_setup();
    post("moog~ -> ok.");
    //
    post("All bundled externals successfully set up!");
}

#endif
