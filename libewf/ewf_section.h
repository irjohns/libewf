/*
 * EWF section start
 *
 * Copyright (c) 2006-2008, Joachim Metz <forensics@hoffmannbv.nl>,
 * Hoffmann Investigations. All rights reserved.
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * - Redistributions of source code must retain the above copyright notice,
 *   this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright notice,
 *   this list of conditions and the following disclaimer in the documentation
 *   and/or other materials provided with the distribution.
 * - Neither the name of the creator, related organisations, nor the names of
 *   its contributors may be used to endorse or promote products derived from
 *   this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDER, COMPANY AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#if !defined( _EWF_SECTION_H )
#define _EWF_SECTION_H

#include <common.h>

#include <libewf/types.h>

#include "ewf_char.h"
#include "ewf_string.h"

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct ewf_section ewf_section_t;

struct ewf_section
{
	/* The section type string
	 * consists of 16 bytes
	 */
	uint8_t type[ 16 ];

	/* The section offset to the next section
	 * consists of 8 bytes (64 bits)
	 */
	uint8_t next[ 8 ];

	/* The section size
	 * consists of 8 bytes (64 bits)
	 */
	uint8_t size[ 8 ];

	/* The section padding
	 * consists of 40 bytes
	 */
	uint8_t padding[ 40 ];

	/* The section crc of all (previous) section data
	 * consists of 4 bytes
	 */
	uint8_t crc[ 4 ];
};

#if defined( __cplusplus )
}
#endif

#endif

