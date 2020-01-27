cocci_test_suite() {
	struct bcm_kona_gpio_bank {
		int id;
		int irq;
		struct bcm_kona_gpio *kona_gpio;
	} cocci_id/* drivers/gpio/gpio-bcm-kona.c 77 */;
	struct bcm_kona_gpio {
		void __iomem *reg_base;
		int num_bank;
		raw_spinlock_t lock;
		struct gpio_chip gpio_chip;
		struct irq_domain *irq_domain;
		struct bcm_kona_gpio_bank *banks;
		struct platform_device *pdev;
	} cocci_id/* drivers/gpio/gpio-bcm-kona.c 67 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-bcm-kona.c 664 */;
	const struct of_device_id *cocci_id/* drivers/gpio/gpio-bcm-kona.c 570 */;
	struct device *cocci_id/* drivers/gpio/gpio-bcm-kona.c 569 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-bcm-kona.c 567 */;
	const struct irq_domain_ops cocci_id/* drivers/gpio/gpio-bcm-kona.c 544 */;
	irq_hw_number_t cocci_id/* drivers/gpio/gpio-bcm-kona.c 524 */;
	struct irq_domain *cocci_id/* drivers/gpio/gpio-bcm-kona.c 523 */;
	unsigned int cocci_id/* drivers/gpio/gpio-bcm-kona.c 523 */;
	struct lock_class_key cocci_id/* drivers/gpio/gpio-bcm-kona.c 520 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-bcm-kona.c 511 */[];
	struct irq_chip cocci_id/* drivers/gpio/gpio-bcm-kona.c 501 */;
	struct irq_chip *cocci_id/* drivers/gpio/gpio-bcm-kona.c 454 */;
	struct bcm_kona_gpio_bank *cocci_id/* drivers/gpio/gpio-bcm-kona.c 453 */;
	struct irq_desc *cocci_id/* drivers/gpio/gpio-bcm-kona.c 448 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-bcm-kona.c 338 */;
	const struct gpio_chip cocci_id/* drivers/gpio/gpio-bcm-kona.c 323 */;
	unsigned long cocci_id/* drivers/gpio/gpio-bcm-kona.c 207 */;
	u32 cocci_id/* drivers/gpio/gpio-bcm-kona.c 206 */;
	void __iomem *cocci_id/* drivers/gpio/gpio-bcm-kona.c 205 */;
	struct bcm_kona_gpio *cocci_id/* drivers/gpio/gpio-bcm-kona.c 204 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-bcm-kona.c 202 */;
	unsigned cocci_id/* drivers/gpio/gpio-bcm-kona.c 202 */;
	int cocci_id/* drivers/gpio/gpio-bcm-kona.c 202 */;
	void cocci_id/* drivers/gpio/gpio-bcm-kona.c 195 */;
}
