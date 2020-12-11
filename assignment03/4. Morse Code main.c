//Bryan Zhong
//Blink LED1 (PA5) in Morse Code to spell "Bryan".
//3on, 1on, 1on, 1on
//3off
//1on, 3on, 1on
//3off
//3on, 1on, 3on, 3on
//3off
//1on, 3on
//3off
//3on, 1on
//off end

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
        
        //// Letter B
        // GPIOA_ODR: Turn LED1 (PA5) on for 3 units (bit 5 is 1)
        GPIOA_ODR ^= ORD5;
        counter = 0;
        while (counter < 3*100000)
        {
            counter++;
        }
        
        // GPIOA_ODR: Turn LED1 (PA5) off for 1 unit (bit 5 is 0)
        GPIOA_ODR ^= ORD5;
        counter = 0;
        while (counter < 100000)
        {
            counter++;
        }

        // GPIOA_ODR: Turn LED1 (PA5) on for 1 unit (bit 5 is 1)
        GPIOA_ODR ^= ORD5;
        counter = 0;
        while (counter < 100000)
        {
            counter++;
        }
        
        // GPIOA_ODR: Turn LED1 (PA5) off for 1 unit (bit 5 is 0)
        GPIOA_ODR ^= ORD5;
        counter = 0;
        while (counter < 100000)
        {
            counter++;
        }
        
        // GPIOA_ODR: Turn LED1 (PA5) on for 1 unit (bit 5 is 1)
        GPIOA_ODR ^= ORD5;
        counter = 0;
        while (counter < 100000)
        {
            counter++;
        }
        
        // GPIOA_ODR: Turn LED1 (PA5) off for 1 unit (bit 5 is 0)
        GPIOA_ODR ^= ORD5;
        counter = 0;
        while (counter < 100000)
        {
            counter++;
        }
        
        // GPIOA_ODR: Turn LED1 (PA5) on for 1 unit (bit 5 is 1)
        GPIOA_ODR ^= ORD5;
        counter = 0;
        while (counter < 100000)
        {
            counter++;
        }
        
        // GPIOA_ODR: Turn LED1 (PA5) off for 3 units (bit 5 is 0)
        GPIOA_ODR ^= ORD5;
        counter = 0;
        while (counter < 3*100000)
        {
            counter++;
        }
        
        ////Letter R
        // GPIOA_ODR: Turn LED1 (PA5) on for 1 unit (bit 5 is 1)
        GPIOA_ODR ^= ORD5;
        counter = 0;
        while (counter < 100000)
        {
            counter++;
        }
        
        // GPIOA_ODR: Turn LED1 (PA5) off for 1 unit (bit 5 is 0)
        GPIOA_ODR ^= ORD5;
        counter = 0;
        while (counter < 100000)
        {
            counter++;
        }

        // GPIOA_ODR: Turn LED1 (PA5) on for 3 units (bit 5 is 1)
        GPIOA_ODR ^= ORD5;
        counter = 0;
        while (counter < 3*100000)
        {
            counter++;
        }
        
        // GPIOA_ODR: Turn LED1 (PA5) off for 1 unit (bit 5 is 0)
        GPIOA_ODR ^= ORD5;
        counter = 0;
        while (counter < 100000)
        {
            counter++;
        }
        
        // GPIOA_ODR: Turn LED1 (PA5) on for 1 unit (bit 5 is 1)
        GPIOA_ODR ^= ORD5;
        counter = 0;
        while (counter < 100000)
        {
            counter++;
        }
        
        // GPIOA_ODR: Turn LED1 (PA5) off for 3 units (bit 5 is 0)
        GPIOA_ODR ^= ORD5;
        counter = 0;
        while (counter < 3*100000)
        {
            counter++;
        }
        
        ////Letter Y
        // GPIOA_ODR: Turn LED1 (PA5) on for 3 units (bit 5 is 1)
        GPIOA_ODR ^= ORD5;
        counter = 0;
        while (counter < 3*100000)
        {
            counter++;
        }
        
        // GPIOA_ODR: Turn LED1 (PA5) off for 1 unit (bit 5 is 0)
        GPIOA_ODR ^= ORD5;
        counter = 0;
        while (counter < 100000)
        {
            counter++;
        }

        // GPIOA_ODR: Turn LED1 (PA5) on for 1 unit (bit 5 is 1)
        GPIOA_ODR ^= ORD5;
        counter = 0;
        while (counter < 100000)
        {
            counter++;
        }
        
        // GPIOA_ODR: Turn LED1 (PA5) off for 1 unit (bit 5 is 0)
        GPIOA_ODR ^= ORD5;
        counter = 0;
        while (counter < 100000)
        {
            counter++;
        }
        
        // GPIOA_ODR: Turn LED1 (PA5) on for 3 units (bit 5 is 1)
        GPIOA_ODR ^= ORD5;
        counter = 0;
        while (counter < 3*100000)
        {
            counter++;
        }
        
        // GPIOA_ODR: Turn LED1 (PA5) off for 1 unit (bit 5 is 0)
        GPIOA_ODR ^= ORD5;
        counter = 0;
        while (counter < 100000)
        {
            counter++;
        }
        
        // GPIOA_ODR: Turn LED1 (PA5) on for 3 units (bit 5 is 1)
        GPIOA_ODR ^= ORD5;
        counter = 0;
        while (counter < 3*100000)
        {
            counter++;
        }
        
        // GPIOA_ODR: Turn LED1 (PA5) off for 3 units (bit 5 is 0)
        GPIOA_ODR ^= ORD5;
        counter = 0;
        while (counter < 3*100000)
        {
            counter++;
        }
        
        ////Letter A
        // GPIOA_ODR: Turn LED1 (PA5) on for 1 unit (bit 5 is 1)
        GPIOA_ODR ^= ORD5;
        counter = 0;
        while (counter < 100000)
        {
            counter++;
        }
        
        // GPIOA_ODR: Turn LED1 (PA5) off for 1 unit (bit 5 is 0)
        GPIOA_ODR ^= ORD5;
        counter = 0;
        while (counter < 100000)
        {
            counter++;
        }
        
        // GPIOA_ODR: Turn LED1 (PA5) on for 3 units (bit 5 is 1)
        GPIOA_ODR ^= ORD5;
        counter = 0;
        while (counter < 3*100000)
        {
            counter++;
        }
        
        // GPIOA_ODR: Turn LED1 (PA5) off for 3 units (bit 5 is 0)
        GPIOA_ODR ^= ORD5;
        counter = 0;
        while (counter < 3*100000)
        {
            counter++;
        }
        
        ////Letter N
        // GPIOA_ODR: Turn LED1 (PA5) on for 3 units (bit 5 is 1)
        GPIOA_ODR ^= ORD5;
        counter = 0;
        while (counter < 3*100000)
        {
            counter++;
        }
        
        // GPIOA_ODR: Turn LED1 (PA5) off for 1 unit (bit 5 is 0)
        GPIOA_ODR ^= ORD5;
        counter = 0;
        while (counter < 100000)
        {
            counter++;
        }

        // GPIOA_ODR: Turn LED1 (PA5) on for 1 unit (bit 5 is 1)
        GPIOA_ODR ^= ORD5;
        counter = 0;
        while (counter < 100000)
        {
            counter++;
        }
        
        // GPIOA_ODR: Turn LED1 (PA5) off for 3 units (bit 5 is 0)
        GPIOA_ODR ^= ORD5;
        counter = 0;
        while (counter < 3*100000)
        {
            counter++;
        }
    }
}
#endif
