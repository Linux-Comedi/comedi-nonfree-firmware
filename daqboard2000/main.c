/* This file may be freely modified, copied, distributed or used for any 
 * purpose without restrictions. 
 * Author: Frank Mori Hess <fmhess@users.sourceforge.net>
 */
#include <stdio.h>
#include "daqboard2000_fpga.h"

int main()
{
	fwrite(bTopBitArray, 1, bTopBitSize, stdout);
	return 0;
}
