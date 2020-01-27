cocci_test_suite() {
	struct ts5500_dio {
		const u8 value_addr;
		const u8 value_mask;
		const u8 control_addr;
		const u8 control_mask;
		const bool no_input;
		const bool no_output;
		const u8 irq;
	} cocci_id/* drivers/gpio/gpio-ts5500.c 50 */;
	bool cocci_id/* drivers/gpio/gpio-ts5500.c 44 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-ts5500.c 436 */;
	const struct platform_device_id cocci_id/* drivers/gpio/gpio-ts5500.c 427 */[];
	struct ts5500_priv cocci_id/* drivers/gpio/gpio-ts5500.c 330 */;
	unsigned long cocci_id/* drivers/gpio/gpio-ts5500.c 321 */;
	struct resource *cocci_id/* drivers/gpio/gpio-ts5500.c 320 */;
	struct ts5500_priv {
		const struct ts5500_dio *pinout;
		struct gpio_chip gpio_chip;
		spinlock_t lock;
		bool strap;
		u8 hwirq;
	} cocci_id/* drivers/gpio/gpio-ts5500.c 32 */;
	struct ts5500_priv *cocci_id/* drivers/gpio/gpio-ts5500.c 319 */;
	const char *cocci_id/* drivers/gpio/gpio-ts5500.c 318 */;
	struct device *cocci_id/* drivers/gpio/gpio-ts5500.c 317 */;
	enum ts5500_blocks cocci_id/* drivers/gpio/gpio-ts5500.c 316 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-ts5500.c 314 */;
	int cocci_id/* drivers/gpio/gpio-ts5500.c 314 */;
	enum ts5500_blocks{TS5500_DIO1, TS5500_DIO2, TS5500_LCD, TS5600_LCD,} cocci_id/* drivers/gpio/gpio-ts5500.c 30 */;
	const struct ts5500_dio *cocci_id/* drivers/gpio/gpio-ts5500.c 264 */;
	const struct ts5500_dio cocci_id/* drivers/gpio/gpio-ts5500.c 220 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-ts5500.c 217 */;
	unsigned cocci_id/* drivers/gpio/gpio-ts5500.c 217 */;
	u8 cocci_id/* drivers/gpio/gpio-ts5500.c 191 */;
	void cocci_id/* drivers/gpio/gpio-ts5500.c 191 */;
	const struct ts5500_dio cocci_id/* drivers/gpio/gpio-ts5500.c 122 */[];
}
