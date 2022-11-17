/*
 * dio_reg.h
 *
 * Created: 2022-11-02 5:20:41 PM
 *  Author: Fannan
 */


#ifndef DIO_REG_H_
#define DIO_REG_H_
//PortA registers
#define PORTA (*(volatile uint8_t*)(0x3B))
#define DDRA (*(volatile uint8_t*)(0x3A))
#define PINA (*(volatile uint8_t*)(0x39))

//PortB registers
#define PORTB (*(volatile uint8_t*)(0x38))
#define DDRB (*(volatile uint8_t*)(0x37))
#define PINB (*(volatile uint8_t*)(0x36))

//PortC registers
#define PORTC (*(volatile uint8_t*)(0x35))
#define DDRC (*(volatile uint8_t*)(0x34))
#define PINC (*(volatile uint8_t*)(0x33))

//PortD registers
#define PORTD (*(volatile uint8_t*)(0x32))
#define DDRD (*(volatile uint8_t*)(0x31))
#define PIND (*(volatile uint8_t*)(0x30))



#endif /* DIO_REG_H_ */