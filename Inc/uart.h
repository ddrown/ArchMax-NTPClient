#ifndef UART_H
#define UART_H

extern UART_HandleTypeDef huart6;
#define UART_NAME huart6
extern UART_HandleTypeDef huart2;
#define GPS_UART_NAME huart2

void write_uart_ch(char ch);
void write_uart_s(const char *s);
void write_uart_u(uint32_t i);
void write_uart_i(int32_t i);
void write_uart_hex(uint8_t i);
void write_uart_64u(uint64_t i);
void write_uart_64i(int64_t i);

void start_rx_uart();
int8_t uart_rx_ready();
char uart_rx_data();

#endif // UART_H
