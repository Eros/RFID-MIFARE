//
// Created by George on 23-Sep-17.
//

#include <spi.h>

void mrfc()
{
    unsigned int byte;
    //todo reset
}

void write(uint8_t reg, uint8_t data)
{
        ENABLE();
        spi_transmit(((reg<1)&0x7E)|0x80);
        data = spi_transmit(0x00);
        DISABLE();
        return data;
}

unint8_t read(uint8_t reg)
{

    ENABLE();
    spi_transmit(((reg<1)&0x7E)|0x80);
    data = spi_transmit(0x00);
    DISABLE();
    return data;
}

void reset()
{
    write(CommandReg, SoftReset_CMD);
}
