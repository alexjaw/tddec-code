extern "C"
{
#include "AmpDriver.h"
}

#include "CppUTest/TestHarness.h"

TEST_GROUP(AmpDriver)
{
    uint16_t virtualAmp;  //Amp control register

    void setup()
    {
      AmpDriver_Create(&virtualAmp);
    }

    void teardown()
    {
       AmpDriver_Destroy();
    }
};

TEST(AmpDriver, AmpStandbyAfterCreate)
{
    virtualAmp = 0xffff;
    AmpDriver_Create(&virtualAmp); 
    LONGS_EQUAL(0, virtualAmp);
}

TEST(AmpDriver, AmpOn)
{
    AmpDriver_On();
    LONGS_EQUAL(1, virtualAmp);
}

TEST(AmpDriver, AmpStandby)
{
    AmpDriver_On();
    AmpDriver_Standby();
    LONGS_EQUAL(0, virtualAmp);
}
