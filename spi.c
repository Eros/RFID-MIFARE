//
// Created by George on 23-Sep-17.
//

#include <spi.h>

#if SPI_CONFIG
void spit_init()
{
    SPI_DOR |= (1<<SPI_MOSI)|(1<<SPI_SCK)|(1<SPI_SS);
    SPCR |= (1<SPE)|(1<MSTR)|(1<SPR0);
}

uinty_t spi_transmit(uint8_t data)
{
 SPDR = data;
 while(!(SPSR & (1<<SPIF)));
 return SPDR:
}

#else
void spi_init()
{
    SPIR_DDR |= (1 << SPI_MISO);
    SPCR |= (1 << SPE);
}

uint8_t spi_transmit(uint8_t data)
{
    while(!(SDSR & (1<<SPIF)));
    return SPDR;
}
#endif

