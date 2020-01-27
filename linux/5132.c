cocci_test_suite() {
	const enum aspeed_sgpio_reg cocci_id/* drivers/gpio/gpio-aspeed-sgpio.c 91 */;
	enum aspeed_sgpio_reg{reg_val, reg_rdata, reg_irq_enable, reg_irq_type0, reg_irq_type1, reg_irq_type2, reg_irq_status,} cocci_id/* drivers/gpio/gpio-aspeed-sgpio.c 72 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-aspeed-sgpio.c 524 */;
	const struct aspeed_sgpio_bank cocci_id/* drivers/gpio/gpio-aspeed-sgpio.c 51 */[];
	struct platform_device *cocci_id/* drivers/gpio/gpio-aspeed-sgpio.c 436 */;
	int __init cocci_id/* drivers/gpio/gpio-aspeed-sgpio.c 436 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-aspeed-sgpio.c 428 */[];
	struct gpio_irq_chip *cocci_id/* drivers/gpio/gpio-aspeed-sgpio.c 386 */;
	struct irq_chip cocci_id/* drivers/gpio/gpio-aspeed-sgpio.c 373 */;
	struct aspeed_sgpio_bank {
		uint16_t val_regs;
		uint16_t rdata_reg;
		uint16_t irq_regs;
		const char names[4][3];
	} cocci_id/* drivers/gpio/gpio-aspeed-sgpio.c 37 */;
	struct irq_chip *cocci_id/* drivers/gpio/gpio-aspeed-sgpio.c 351 */;
	struct irq_desc *cocci_id/* drivers/gpio/gpio-aspeed-sgpio.c 348 */;
	irq_flow_handler_t cocci_id/* drivers/gpio/gpio-aspeed-sgpio.c 295 */;
	struct aspeed_sgpio {
		struct gpio_chip chip;
		struct clk *pclk;
		spinlock_t lock;
		void __iomem *base;
		uint32_t dir_in[3];
		int irq;
	} cocci_id/* drivers/gpio/gpio-aspeed-sgpio.c 28 */;
	u32 cocci_id/* drivers/gpio/gpio-aspeed-sgpio.c 240 */;
	void __iomem *cocci_id/* drivers/gpio/gpio-aspeed-sgpio.c 238 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-aspeed-sgpio.c 233 */;
	void cocci_id/* drivers/gpio/gpio-aspeed-sgpio.c 233 */;
	u32 *cocci_id/* drivers/gpio/gpio-aspeed-sgpio.c 220 */;
	int *cocci_id/* drivers/gpio/gpio-aspeed-sgpio.c 220 */;
	const struct aspeed_sgpio_bank **cocci_id/* drivers/gpio/gpio-aspeed-sgpio.c 219 */;
	struct aspeed_sgpio **cocci_id/* drivers/gpio/gpio-aspeed-sgpio.c 218 */;
	unsigned long cocci_id/* drivers/gpio/gpio-aspeed-sgpio.c 179 */;
	struct aspeed_sgpio *cocci_id/* drivers/gpio/gpio-aspeed-sgpio.c 178 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-aspeed-sgpio.c 176 */;
	unsigned int cocci_id/* drivers/gpio/gpio-aspeed-sgpio.c 176 */;
	int cocci_id/* drivers/gpio/gpio-aspeed-sgpio.c 176 */;
	bool cocci_id/* drivers/gpio/gpio-aspeed-sgpio.c 132 */;
	enum aspeed_sgpio_reg cocci_id/* drivers/gpio/gpio-aspeed-sgpio.c 131 */;
	const struct aspeed_sgpio_bank *cocci_id/* drivers/gpio/gpio-aspeed-sgpio.c 129 */;
}
