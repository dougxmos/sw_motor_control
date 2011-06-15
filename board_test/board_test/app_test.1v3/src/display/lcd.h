#ifndef _LCD_H_
#define _LCD_H_

#include "shared_io.h"

#define CHAR_BUF_SIZE	21*4

void reverse(char s[]);
void itoa(int n, char s[]);

void lcd_ports_init( REFERENCE_PARAM(lcd_interface_t, p) );
void lcd_byte_out( REFERENCE_PARAM(lcd_interface_t, p), unsigned char i, int is_data, unsigned int port_val );

void lcd_clear( unsigned int port_val, REFERENCE_PARAM(lcd_interface_t, p) );
void lcd_draw_image( unsigned char image[], unsigned int port_val, REFERENCE_PARAM(lcd_interface_t, p) );
void lcd_draw_text_row( char string[], int lcd_row, unsigned int port_val, REFERENCE_PARAM(lcd_interface_t, p) );

#define lcd_data_out(p, i, v)         	lcd_byte_out(p, i, 1, v)
#define lcd_comm_out(p, i, v)         	lcd_byte_out(p, i, 0, v)

#endif /* _LCD_H_ */
