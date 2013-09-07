/*====================================================================*
 *
 *   Copyright (c) 2011 Qualcomm Atheros Inc.
 *
 *   Permission to use, copy, modify, and/or distribute this software
 *   for any purpose with or without fee is hereby granted, provided
 *   that the above copyright notice and this permission notice appear
 *   in all copies.
 *
 *   THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 *   WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 *   WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL
 *   THE AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR
 *   CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
 *   LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT,
 *   NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 *   CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 *
 *--------------------------------------------------------------------*/

/*====================================================================*
 *
 *   signed FlashDevice (struct plc * plc);
 *
 *   plc.h
 *
 *   wait for device to start; determin chipset type and confirm that
 *   firmware is running; call appropriate FlashDevice function based
 *   on the PLC device type;
 *
 *
 *   Contributor(s):
 *      Charles Maier <cmaier@qca.qualcomm.com>
 *
 *--------------------------------------------------------------------*/

#ifndef FLASHDEVICE_SOURCE
#define FLASHDEVICE_SOURCE

#include "../tools/error.h"
#include "../plc/plc.h"

signed FlashDevice (struct plc * plc)

{
	return (PLCSelect (plc, FlashDevice1, FlashDevice2));
}


#endif

