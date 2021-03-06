/**********************************************************************
 * Copyright (c) 2014 Pieter Wuille                                   *
 * Distributed under the GPL3 software license, see the accompanying   *
 * file COPYING or http://www.gnu.org/licenses/gpl.html.*
 **********************************************************************/

#ifndef _SECP256K1_SCALAR_REPR_
#define _SECP256K1_SCALAR_REPR_

#include <stdint.h>

/** A scalar modulo the group order of the secp256k1 curve. */
typedef struct {
    uint32_t d[8];
} secp256k1_scalar_t;

#endif
