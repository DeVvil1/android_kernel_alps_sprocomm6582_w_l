#ifndef __VOW_API_H__
#define __VOW_API_H__

int VowDrv_ChangeStatus(void);
int VowDrv_EnableHW(int status);
void VowDrv_SetDmicLowPower(bool enable);
#endif //__VOW_API__