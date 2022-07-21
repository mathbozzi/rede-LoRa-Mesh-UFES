#define BUTTON_PIN 0   // sera usado para o pressionamento do botão

#ifndef USE_JTAG  // verificacao caso nao tenha tela Oled
#define I2C_SDA 4 // I2C oled sda
#define I2C_SCL 15 // I2C oled scl
#endif

#define EXT_NOTIFY_OUT 13 // Pino para o Ext Notify Plugin.

#ifndef USE_JTAG
#define LORA_RESET 14
#endif

#define RESET_OLED 16 // reset Oled

#define VEXT_ENABLE 21 // vnext control
#define LED_PIN 25     // piscar o led

#define USE_RF95
#define LORA_DIO0 26 // sem conexão module SX1262 

#define LORA_DIO1 35 // não usado
#define LORA_DIO2 34 // não usado

#undef GPS_RX_PIN
#undef GPS_TX_PIN
#define GPS_RX_PIN 36   //modulo gps 
#define GPS_TX_PIN 37   //modulo gps 


#define ADC_MULTIPLIER 3.8

#define BATTERY_PIN 37 //medicao de tensao da bateria
