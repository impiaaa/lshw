#ifndef _SCSI_H_
#define _SCSI_H_

#include "hw.h"

bool scan_scsi(hwNode & n);
hwNode get_scsi_device(int scsi_type);
const char *scsi_type(int type);
void parse_inq_1(uint8_t *rsp_buff, unsigned int len, hwNode & node);
void parse_inq_2(uint8_t *rsp_buff, unsigned int len, hwNode & node);

#endif
