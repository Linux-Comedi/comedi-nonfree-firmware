/* This file may be freely modified, copied, distributed or used for any 
 * purpose without restrictions. 
 * Author: Frank Mori Hess <fmhess@users.sourceforge.net>
 */
#include <stdio.h>
#include "me2600_fw.h"

int main()
{
	fwrite(me2600_firmware, 1, sizeof(me2600_firmware), stdout);
	return 0;
}
