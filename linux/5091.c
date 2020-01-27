cocci_test_suite() {
	struct sprd_eic {
		struct gpio_chip chip;
		struct irq_chip intc;
		void __iomem *base[SPRD_EIC_MAX_BANK];
		enum sprd_eic_type type;
		spinlock_t lock;
		int irq;
	} cocci_id/* drivers/gpio/gpio-eic-sprd.c 92 */;
	enum sprd_eic_type{SPRD_EIC_DEBOUNCE, SPRD_EIC_LATCH, SPRD_EIC_ASYNC, SPRD_EIC_SYNC, SPRD_EIC_MAX,} cocci_id/* drivers/gpio/gpio-eic-sprd.c 84 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-eic-sprd.c 676 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-eic-sprd.c 653 */[];
	struct gpio_irq_chip *cocci_id/* drivers/gpio/gpio-eic-sprd.c 570 */;
	const struct sprd_eic_variant_data *cocci_id/* drivers/gpio/gpio-eic-sprd.c 569 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-eic-sprd.c 567 */;
	enum sprd_eic_type cocci_id/* drivers/gpio/gpio-eic-sprd.c 547 */;
	struct irq_chip *cocci_id/* drivers/gpio/gpio-eic-sprd.c 545 */;
	struct irq_desc *cocci_id/* drivers/gpio/gpio-eic-sprd.c 543 */;
	unsigned long cocci_id/* drivers/gpio/gpio-eic-sprd.c 508 */;
	void __iomem *cocci_id/* drivers/gpio/gpio-eic-sprd.c 507 */;
	u32 cocci_id/* drivers/gpio/gpio-eic-sprd.c 504 */;
	enum sprd_eic_type *cocci_id/* drivers/gpio/gpio-eic-sprd.c 496 */;
	void *cocci_id/* drivers/gpio/gpio-eic-sprd.c 494 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-eic-sprd.c 285 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-eic-sprd.c 197 */;
	unsigned int cocci_id/* drivers/gpio/gpio-eic-sprd.c 197 */;
	int cocci_id/* drivers/gpio/gpio-eic-sprd.c 197 */;
	struct sprd_eic *cocci_id/* drivers/gpio/gpio-eic-sprd.c 183 */;
	void cocci_id/* drivers/gpio/gpio-eic-sprd.c 176 */;
	u16 cocci_id/* drivers/gpio/gpio-eic-sprd.c 161 */;
	const struct sprd_eic_variant_data cocci_id/* drivers/gpio/gpio-eic-sprd.c 121 */;
	const char *cocci_id/* drivers/gpio/gpio-eic-sprd.c 106 */[SPRD_EIC_MAX];
	struct sprd_eic_variant_data {
		enum sprd_eic_type type;
		u32 num_eics;
	} cocci_id/* drivers/gpio/gpio-eic-sprd.c 101 */;
}
