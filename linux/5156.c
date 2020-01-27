cocci_test_suite() {
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-creg-snps.c 52 */;
	unsigned int cocci_id/* drivers/gpio/gpio-creg-snps.c 52 */;
	int cocci_id/* drivers/gpio/gpio-creg-snps.c 52 */;
	unsigned long cocci_id/* drivers/gpio/gpio-creg-snps.c 35 */;
	const struct creg_layout *cocci_id/* drivers/gpio/gpio-creg-snps.c 33 */;
	void cocci_id/* drivers/gpio/gpio-creg-snps.c 30 */;
	struct creg_gpio {
		struct gpio_chip gc;
		void __iomem *regs;
		spinlock_t lock;
		const struct creg_layout *layout;
	} cocci_id/* drivers/gpio/gpio-creg-snps.c 23 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-creg-snps.c 182 */;
	struct creg_layout {
		u8 ngpio;
		u8 shift[MAX_GPIO];
		u8 on[MAX_GPIO];
		u8 off[MAX_GPIO];
		u8 bit_per_gpio[MAX_GPIO];
	} cocci_id/* drivers/gpio/gpio-creg-snps.c 15 */;
	struct creg_gpio cocci_id/* drivers/gpio/gpio-creg-snps.c 143 */;
	u32 cocci_id/* drivers/gpio/gpio-creg-snps.c 140 */;
	struct creg_gpio *cocci_id/* drivers/gpio/gpio-creg-snps.c 139 */;
	struct device *cocci_id/* drivers/gpio/gpio-creg-snps.c 138 */;
	const struct of_device_id *cocci_id/* drivers/gpio/gpio-creg-snps.c 137 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-creg-snps.c 135 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-creg-snps.c 125 */[];
	const struct creg_layout cocci_id/* drivers/gpio/gpio-creg-snps.c 117 */;
}
