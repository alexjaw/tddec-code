#ifndef D_AmpDriver_H
#define D_AmpDriver_H
#include <stdint.h>

void AmpDriver_Create(uint16_t * ampAddress);
void AmpDriver_Destroy(void);
void AmpDriver_On(void);
void AmpDriver_Standby(void);

#endif  /* D_AmpDriver_H */
