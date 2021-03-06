cocci_test_suite() {
	const struct aspeed_gpio_copro_ops *cocci_id/* drivers/gpio/gpio-aspeed.c 986 */;
	void *cocci_id/* drivers/gpio/gpio-aspeed.c 986 */;
	const struct aspeed_gpio_bank cocci_id/* drivers/gpio/gpio-aspeed.c 97 */[];
	const int cocci_id/* drivers/gpio/gpio-aspeed.c 92 */[4];
	const u32 cocci_id/* drivers/gpio/gpio-aspeed.c 827 */;
	u64 cocci_id/* drivers/gpio/gpio-aspeed.c 757 */;
	const unsigned long int cocci_id/* drivers/gpio/gpio-aspeed.c 695 */;
	const struct aspeed_bank_props *cocci_id/* drivers/gpio/gpio-aspeed.c 691 */;
	struct aspeed_gpio_bank {
		uint16_t val_regs;
		uint16_t rdata_reg;
		uint16_t irq_regs;
		uint16_t debounce_regs;
		uint16_t tolerance_regs;
		uint16_t cmdsrc_regs;
		const char names[4][3];
	} cocci_id/* drivers/gpio/gpio-aspeed.c 69 */;
	unsigned long *cocci_id/* drivers/gpio/gpio-aspeed.c 687 */;
	struct irq_chip *cocci_id/* drivers/gpio/gpio-aspeed.c 662 */;
	struct irq_desc *cocci_id/* drivers/gpio/gpio-aspeed.c 659 */;
	irq_flow_handler_t cocci_id/* drivers/gpio/gpio-aspeed.c 600 */;
	struct aspeed_gpio {
		struct gpio_chip chip;
		struct irq_chip irqc;
		spinlock_t lock;
		void __iomem *base;
		int irq;
		const struct aspeed_gpio_config *config;
		u8 *offset_timer;
		unsigned int timer_users[4];
		struct clk *clk;
		u32 *dcache;
		u8 *cf_copro_bankmap;
	} cocci_id/* drivers/gpio/gpio-aspeed.c 53 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-aspeed.c 526 */;
	u32 *cocci_id/* drivers/gpio/gpio-aspeed.c 507 */;
	int *cocci_id/* drivers/gpio/gpio-aspeed.c 507 */;
	const struct aspeed_gpio_bank **cocci_id/* drivers/gpio/gpio-aspeed.c 506 */;
	struct aspeed_gpio **cocci_id/* drivers/gpio/gpio-aspeed.c 505 */;
	u32 cocci_id/* drivers/gpio/gpio-aspeed.c 395 */;
	void __iomem *cocci_id/* drivers/gpio/gpio-aspeed.c 394 */;
	const struct aspeed_gpio_bank *cocci_id/* drivers/gpio/gpio-aspeed.c 393 */;
	struct aspeed_gpio *cocci_id/* drivers/gpio/gpio-aspeed.c 392 */;
	int cocci_id/* drivers/gpio/gpio-aspeed.c 390 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-aspeed.c 389 */;
	unsigned int cocci_id/* drivers/gpio/gpio-aspeed.c 389 */;
	void cocci_id/* drivers/gpio/gpio-aspeed.c 389 */;
	struct aspeed_gpio_config {
		unsigned int nr_gpios;
		const struct aspeed_bank_props *props;
	} cocci_id/* drivers/gpio/gpio-aspeed.c 37 */;
	bool cocci_id/* drivers/gpio/gpio-aspeed.c 337 */;
	struct aspeed_bank_props {
		unsigned int bank;
		u32 input;
		u32 output;
	} cocci_id/* drivers/gpio/gpio-aspeed.c 31 */;
	const enum aspeed_gpio_reg cocci_id/* drivers/gpio/gpio-aspeed.c 210 */;
	enum aspeed_gpio_reg{reg_val, reg_rdata, reg_dir, reg_irq_enable, reg_irq_type0, reg_irq_type1, reg_irq_type2, reg_irq_status, reg_debounce_sel1, reg_debounce_sel2, reg_tolerance, reg_cmdsrc0, reg_cmdsrc1,} cocci_id/* drivers/gpio/gpio-aspeed.c 172 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-aspeed.c 1243 */;
	struct gpio_irq_chip *cocci_id/* drivers/gpio/gpio-aspeed.c 1208 */;
	u16 cocci_id/* drivers/gpio/gpio-aspeed.c 1170 */;
	const struct of_device_id *cocci_id/* drivers/gpio/gpio-aspeed.c 1140 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-aspeed.c 1138 */;
	int __init cocci_id/* drivers/gpio/gpio-aspeed.c 1138 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-aspeed.c 1130 */[];
	const struct aspeed_gpio_config cocci_id/* drivers/gpio/gpio-aspeed.c 1099 */;
	const struct aspeed_bank_props cocci_id/* drivers/gpio/gpio-aspeed.c 1092 */[];
	unsigned long cocci_id/* drivers/gpio/gpio-aspeed.c 1011 */;
	u8 *cocci_id/* drivers/gpio/gpio-aspeed.c 1005 */;
	u16 *cocci_id/* drivers/gpio/gpio-aspeed.c 1005 */;
	struct gpio_desc *cocci_id/* drivers/gpio/gpio-aspeed.c 1004 */;
}
