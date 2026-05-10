#include "stm32f401xe.h"

int main(void)
{
    // 1. Enable clock for GPIOA
    RCC->AHB1ENR |= (1 << 0);   // GPIOAEN

    // 2. Set PA5 as output (MODER register)
    GPIOA->MODER &= ~(3 << (5 * 2));  // Clear bits
    GPIOA->MODER |=  (1 << (5 * 2));  // Set as output

    // 3. Set PA5 HIGH (LED ON)
    GPIOA->ODR |= (1 << 5);

    while (1)
    {
        // Do nothing → LED stays ON
    }
}
