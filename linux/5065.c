cocci_test_suite() {
	bool cocci_id/* drivers/gpio/gpio-thunderx.c 86 */;
	unsigned int cocci_id/* drivers/gpio/gpio-thunderx.c 64 */;
	struct pci_driver cocci_id/* drivers/gpio/gpio-thunderx.c 563 */;
	const struct pci_device_id cocci_id/* drivers/gpio/gpio-thunderx.c 556 */[];
	struct thunderx_gpio {
		struct gpio_chip chip;
		u8 __iomem *register_base;
		struct msix_entry *msix_entries;
		struct thunderx_line *line_entries;
		raw_spinlock_t lock;
		unsigned long invert_mask[2];
		unsigned long od_mask[2];
		int base_msi;
	} cocci_id/* drivers/gpio/gpio-thunderx.c 53 */;
	struct thunderx_line {
		struct thunderx_gpio *txgpio;
		unsigned int line;
		unsigned int fil_bits;
	} cocci_id/* drivers/gpio/gpio-thunderx.c 47 */;
	struct thunderx_line cocci_id/* drivers/gpio/gpio-thunderx.c 465 */;
	struct msix_entry cocci_id/* drivers/gpio/gpio-thunderx.c 456 */;
	struct thunderx_gpio cocci_id/* drivers/gpio/gpio-thunderx.c 45 */;
	struct gpio_irq_chip *cocci_id/* drivers/gpio/gpio-thunderx.c 411 */;
	struct device *cocci_id/* drivers/gpio/gpio-thunderx.c 408 */;
	void __iomem *const*cocci_id/* drivers/gpio/gpio-thunderx.c 407 */;
	const struct pci_device_id *cocci_id/* drivers/gpio/gpio-thunderx.c 405 */;
	struct pci_dev *cocci_id/* drivers/gpio/gpio-thunderx.c 404 */;
	struct thunderx_gpio *cocci_id/* drivers/gpio/gpio-thunderx.c 397 */;
	unsigned int *cocci_id/* drivers/gpio/gpio-thunderx.c 394 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-thunderx.c 391 */;
	int cocci_id/* drivers/gpio/gpio-thunderx.c 391 */;
	struct irq_chip cocci_id/* drivers/gpio/gpio-thunderx.c 376 */;
	struct thunderx_line *cocci_id/* drivers/gpio/gpio-thunderx.c 329 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-thunderx.c 288 */;
	void cocci_id/* drivers/gpio/gpio-thunderx.c 288 */;
	unsigned long *cocci_id/* drivers/gpio/gpio-thunderx.c 273 */;
	u32 cocci_id/* drivers/gpio/gpio-thunderx.c 183 */;
	unsigned long cocci_id/* drivers/gpio/gpio-thunderx.c 180 */;
	u64 cocci_id/* drivers/gpio/gpio-thunderx.c 136 */;
	void __iomem *cocci_id/* drivers/gpio/gpio-thunderx.c 126 */;
}
