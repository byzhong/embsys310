//Bryan Zhong
//Blink LED1 (PA5) at a visible rate using the XOR bitwise operator to toggle the LED.

#if 1

#define RCC_BASE 0x40021000
#define GPIOA_BASE 0x48000000

#define RCC_AHB2ENR (*((unsigned int*)(RCC_BASE + 0x4c)))
#define GPIOA_MODER (*((unsigned int*)(GPIOA_BASE + 0x0)))
#define GPIOA_ODR (*((unsigned int*)(GPIOA_BASE + 0x14)))
#define ORD5 (1<<5)

int counter = 0;

void main(void)
{
    // RCC Base Address: 0x40021000
    // RCC AHB2 peripheral clock enable register (RCC_AHB2ENR)
    // Address offset: 0x4C
    // Set bit[1] to 1
    // 1. Enable clock to Peripheral
    RCC_AHB2ENR |= 0x1;
    
    // GPIOA Base address: 0x48000000
    // GPIO port mode register (GPIOAx_MODER) (x = A..E and H)
    // Address offset: 0x00
    // 2. Set bit[11:10] to 0x01 so --> 0x7FF // To enable PA5 as output
    GPIOA_MODER &= 0xFFFFF7FF;   // &= bitwise operator to apply 0:1 to 11:10
    
    while(1)
    {
        
        /*
        counter = 0;
        while (counter < 100000)
        {
            counter++;
        }
        
        // |= bitwise operator to specifically set bit[5] to 1 (ORD5 is 10 0000)
        GPIOA_ODR |= ORD5 ; // GPIOA_ODR: Turn LED1 (PA5) on
        */
        
        counter = 0;
        while (counter < 100000)
        {
            counter++;
        }
        // ~ORD5 is 01 1111. Use &= bitwise operator to mirror every original bit except for bit[5] which is 0.
        GPIOA_ODR ^= ORD5; // GPIOA_ODR: Turn LED1 (PA5) off (bit 5 is 0)
    }
}
#endif
