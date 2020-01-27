cocci_test_suite() {
	u32 cocci_id/* drivers/gpio/gpio-xgene.c 52 */;
	unsigned long cocci_id/* drivers/gpio/gpio-xgene.c 51 */;
	struct xgene_gpio *cocci_id/* drivers/gpio/gpio-xgene.c 50 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-xgene.c 48 */;
	unsigned int cocci_id/* drivers/gpio/gpio-xgene.c 48 */;
	int cocci_id/* drivers/gpio/gpio-xgene.c 48 */;
	void cocci_id/* drivers/gpio/gpio-xgene.c 48 */;
	struct xgene_gpio {
		struct gpio_chip chip;
		void __iomem *base;
		spinlock_t lock;
		u32 set_dr_val[XGENE_MAX_GPIO_BANKS];
	} cocci_id/* drivers/gpio/gpio-xgene.c 30 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-xgene.c 209 */;
	const struct acpi_device_id cocci_id/* drivers/gpio/gpio-xgene.c 203 */[];
	const struct of_device_id cocci_id/* drivers/gpio/gpio-xgene.c 197 */[];
	struct platform_device *cocci_id/* drivers/gpio/gpio-xgene.c 159 */;
	struct device *cocci_id/* drivers/gpio/gpio-xgene.c 144 */;
}
