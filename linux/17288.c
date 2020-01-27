cocci_test_suite() {
	unsigned long cocci_id/* arch/powerpc/platforms/4xx/gpio.c 98 */;
	struct ppc4xx_gpio __iomem *cocci_id/* arch/powerpc/platforms/4xx/gpio.c 70 */;
	struct of_mm_gpio_chip *cocci_id/* arch/powerpc/platforms/4xx/gpio.c 69 */;
	struct gpio_chip *cocci_id/* arch/powerpc/platforms/4xx/gpio.c 67 */;
	unsigned int cocci_id/* arch/powerpc/platforms/4xx/gpio.c 67 */;
	int cocci_id/* arch/powerpc/platforms/4xx/gpio.c 67 */;
	void cocci_id/* arch/powerpc/platforms/4xx/gpio.c 66 */;
	struct ppc4xx_gpio_chip {
		struct of_mm_gpio_chip mm_gc;
		spinlock_t lock;
	} cocci_id/* arch/powerpc/platforms/4xx/gpio.c 47 */;
	struct ppc4xx_gpio {
		__be32 or;
		__be32 tcr;
		__be32 osrl;
		__be32 osrh;
		__be32 tsrl;
		__be32 tsrh;
		__be32 odr;
		__be32 ir;
		__be32 rr1;
		__be32 rr2;
		__be32 rr3;
		__be32 reserved1;
		__be32 isr1l;
		__be32 isr1h;
		__be32 isr2l;
		__be32 isr2h;
		__be32 isr3l;
		__be32 isr3h;
	} cocci_id/* arch/powerpc/platforms/4xx/gpio.c 26 */;
	struct ppc4xx_gpio_chip *cocci_id/* arch/powerpc/platforms/4xx/gpio.c 163 */;
	struct device_node *cocci_id/* arch/powerpc/platforms/4xx/gpio.c 159 */;
	int __init cocci_id/* arch/powerpc/platforms/4xx/gpio.c 157 */;
}
