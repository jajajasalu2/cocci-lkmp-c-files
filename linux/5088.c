cocci_test_suite() {
	void __iomem *cocci_id/* drivers/gpio/gpio-xlp.c 97 */;
	struct xlp_gpio_priv {
		struct gpio_chip chip;
	DECLARE_BITMAP(gpio_enabled_mask,XLP_MAX_NR_GPIO)
		;
		void __iomem *gpio_intr_en;
		void __iomem *gpio_intr_stat;
		void __iomem *gpio_intr_type;
		void __iomem *gpio_intr_pol;
		void __iomem *gpio_out_en;
		void __iomem *gpio_paddrv;
		spinlock_t lock;
	} cocci_id/* drivers/gpio/gpio-xlp.c 85 */;
	enum{XLP_GPIO_VARIANT_XLP832=1, XLP_GPIO_VARIANT_XLP316, XLP_GPIO_VARIANT_XLP208, XLP_GPIO_VARIANT_XLP980, XLP_GPIO_VARIANT_XLP532, GPIO_VARIANT_VULCAN,} cocci_id/* drivers/gpio/gpio-xlp.c 76 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-xlp.c 431 */;
	const struct acpi_device_id cocci_id/* drivers/gpio/gpio-xlp.c 423 */[];
	const struct acpi_device_id *cocci_id/* drivers/gpio/gpio-xlp.c 315 */;
	uintptr_t cocci_id/* drivers/gpio/gpio-xlp.c 313 */;
	struct gpio_irq_chip *cocci_id/* drivers/gpio/gpio-xlp.c 293 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-xlp.c 290 */;
	void *cocci_id/* drivers/gpio/gpio-xlp.c 264 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-xlp.c 261 */[];
	struct xlp_gpio_priv *cocci_id/* drivers/gpio/gpio-xlp.c 237 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-xlp.c 235 */;
	unsigned cocci_id/* drivers/gpio/gpio-xlp.c 235 */;
	int cocci_id/* drivers/gpio/gpio-xlp.c 235 */;
	u32 cocci_id/* drivers/gpio/gpio-xlp.c 206 */;
	struct irq_chip *cocci_id/* drivers/gpio/gpio-xlp.c 204 */;
	struct irq_desc *cocci_id/* drivers/gpio/gpio-xlp.c 201 */;
	void cocci_id/* drivers/gpio/gpio-xlp.c 201 */;
	struct irq_chip cocci_id/* drivers/gpio/gpio-xlp.c 192 */;
	unsigned int cocci_id/* drivers/gpio/gpio-xlp.c 159 */;
	unsigned long cocci_id/* drivers/gpio/gpio-xlp.c 126 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-xlp.c 122 */;
}
