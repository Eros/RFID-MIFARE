//
// Created by George on 23-Sep-17.
//

#ifndef RFID_SPI_H
#define RFID_SPI_H

#include SPI_H

void spi_init()
        uint8_t spi_transmit(uint8_t data);;

#define ENABLE (SPI_PORT &=(~(1<<SPI_SS)))
#define DISABLE (SPI_PORT |=(1<<SPI)SS))

#define SPI_DDR		DDRB
#define SPI_PORT	PORTB
#define SPI_PIN		PINB
#define SPI_MOSI	PB3
#define SPI_MISO	PB4
#define SPI_SS		PB2
#define SPI_SCK		PB5

#endif //RFID_SPI_H
