#include <spi.h>

constexpr uint8_t RST_PIN = 9;
constexpr uint8_t SS_PIN = 10;

MFRC522 mfrc522(SS_PIN, RST_PIN);

void setup()
{
Serial.Begin(9600);
while(!Serial);
SPI.begin();
mfrc522.PCD_Init();
mfrc.PCD_DumpVersionToSerial();
Serial.println(F("SCANNED PFIC TO SEE UUID"));
}

void loop()
{
    if(!mfrc522.PICC_IsNewCardPresent())
    {
        return;
    }
    if(!mfrc522.PICC_ReadCardSerial())
    {
        return;
    }
    mfcrc522.PICC_DumpToSerial(&(mfrc522.uid));
}