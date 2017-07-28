#include "AmpDriver.h"
#include <stdlib.h>
#include <memory.h>

static uint16_t * ampAddress;

void AmpDriver_Create(uint16_t * address)
{
    ampAddress = address;
    *ampAddress = 0;
}

void AmpDriver_Destroy(void)
{
}

void AmpDriver_On(void)
{
    *ampAddress = 1;
}

void AmpDriver_Standby(void)
{
    *ampAddress = 0;
}


