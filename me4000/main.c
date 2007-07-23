/* This file may be freely modified, copied, distributed or used for any 
 * purpose without restrictions. 
 * Author: Frank Mori Hess <fmhess@users.sourceforge.net>
 */
#include <stdio.h>
#include "me4000_fw.h"

int main()
{
	fwrite(xilinx_firm, 1, sizeof(xilinx_firm), stdout);
	return 0;
}
