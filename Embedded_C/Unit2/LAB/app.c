#include"uart.h"
unsigned char string_buffer[100]="learn-in-depth:Keroles";


void main(void)
{
    Uart_send_string(string_buffer);



}