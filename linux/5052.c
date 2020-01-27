cocci_test_suite() {
	uintptr_t cocci_id/* drivers/gpio/gpio-pca953x.c 926 */;
	const void *cocci_id/* drivers/gpio/gpio-pca953x.c 918 */;
	struct gpio_desc *cocci_id/* drivers/gpio/gpio-pca953x.c 881 */;
	struct regulator *cocci_id/* drivers/gpio/gpio-pca953x.c 868 */;
	struct pca953x_platform_data *cocci_id/* drivers/gpio/gpio-pca953x.c 863 */;
	const struct i2c_device_id *cocci_id/* drivers/gpio/gpio-pca953x.c 861 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-pca953x.c 858 */[];
	u32 cocci_id/* drivers/gpio/gpio-pca953x.c 838 */;
	struct pca953x_chip *cocci_id/* drivers/gpio/gpio-pca953x.c 838 */;
	int cocci_id/* drivers/gpio/gpio-pca953x.c 838 */;
	struct irq_chip *cocci_id/* drivers/gpio/gpio-pca953x.c 738 */;
	struct i2c_client *cocci_id/* drivers/gpio/gpio-pca953x.c 737 */;
	const struct i2c_device_id cocci_id/* drivers/gpio/gpio-pca953x.c 73 */[];
	irqreturn_t cocci_id/* drivers/gpio/gpio-pca953x.c 719 */;
	void *cocci_id/* drivers/gpio/gpio-pca953x.c 719 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-pca953x.c 598 */;
	irq_hw_number_t cocci_id/* drivers/gpio/gpio-pca953x.c 571 */;
	unsigned long cocci_id/* drivers/gpio/gpio-pca953x.c 530 */;
	unsigned long *cocci_id/* drivers/gpio/gpio-pca953x.c 470 */;
	u8 cocci_id/* drivers/gpio/gpio-pca953x.c 376 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-pca953x.c 373 */;
	unsigned cocci_id/* drivers/gpio/gpio-pca953x.c 373 */;
	u8 cocci_id/* drivers/gpio/gpio-pca953x.c 358 */[MAX_BANK];
	const struct regmap_config cocci_id/* drivers/gpio/gpio-pca953x.c 301 */;
	struct device *cocci_id/* drivers/gpio/gpio-pca953x.c 242 */;
	bool cocci_id/* drivers/gpio/gpio-pca953x.c 217 */;
	unsigned int cocci_id/* drivers/gpio/gpio-pca953x.c 217 */;
	struct pca953x_chip {
		unsigned gpio_start;
		struct mutex i2c_lock;
		struct regmap *regmap;
#ifdef CONFIG_GPIO_PCA953X_IRQ
		struct mutex irq_lock;
	DECLARE_BITMAP(irq_mask,MAX_LINE)
		;
	DECLARE_BITMAP(irq_stat,MAX_LINE)
		;
	DECLARE_BITMAP(irq_trig_raise,MAX_LINE)
		;
	DECLARE_BITMAP(irq_trig_fall,MAX_LINE)
		;
		struct irq_chip irq_chip;
#endif
		atomic_t wakeup_path;
		struct i2c_client *client;
		struct gpio_chip gpio_chip;
		const char *const *names;
		unsigned long driver_data;
		struct regulator *regulator;
		const struct pca953x_reg_config *regs;
	} cocci_id/* drivers/gpio/gpio-pca953x.c 143 */;
	const struct pca953x_reg_config cocci_id/* drivers/gpio/gpio-pca953x.c 129 */;
	struct pca953x_reg_config {
		int direction;
		int output;
		int input;
		int invert;
	} cocci_id/* drivers/gpio/gpio-pca953x.c 122 */;
	void __exit cocci_id/* drivers/gpio/gpio-pca953x.c 1176 */;
	void cocci_id/* drivers/gpio/gpio-pca953x.c 1176 */;
	int __init cocci_id/* drivers/gpio/gpio-pca953x.c 1167 */;
	struct i2c_driver cocci_id/* drivers/gpio/gpio-pca953x.c 1155 */;
	const struct acpi_device_id cocci_id/* drivers/gpio/gpio-pca953x.c 110 */[];
}
