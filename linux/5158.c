cocci_test_suite() {
	unsigned long cocci_id/* drivers/gpio/gpio-pci-idio-16.c 85 */;
	struct idio_16_gpio *constcocci_id/* drivers/gpio/gpio-pci-idio-16.c 84 */;
	unsigned int cocci_id/* drivers/gpio/gpio-pci-idio-16.c 70 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-pci-idio-16.c 69 */;
	int cocci_id/* drivers/gpio/gpio-pci-idio-16.c 69 */;
	struct idio_16_gpio {
		struct gpio_chip chip;
		raw_spinlock_t lock;
		struct idio_16_gpio_reg __iomem *reg;
		unsigned long irq_mask;
	} cocci_id/* drivers/gpio/gpio-pci-idio-16.c 53 */;
	struct pci_driver cocci_id/* drivers/gpio/gpio-pci-idio-16.c 360 */;
	struct idio_16_gpio_reg {
		u8 out0_7;
		u8 in0_7;
		u8 irq_ctl;
		u8 filter_ctl;
		u8 out8_15;
		u8 in8_15;
		u8 irq_status;
	} cocci_id/* drivers/gpio/gpio-pci-idio-16.c 36 */;
	const struct pci_device_id cocci_id/* drivers/gpio/gpio-pci-idio-16.c 355 */[];
	const char *constcocci_id/* drivers/gpio/gpio-pci-idio-16.c 289 */;
	const size_t cocci_id/* drivers/gpio/gpio-pci-idio-16.c 288 */;
	struct idio_16_gpio *cocci_id/* drivers/gpio/gpio-pci-idio-16.c 286 */;
	struct device *constcocci_id/* drivers/gpio/gpio-pci-idio-16.c 285 */;
	const struct pci_device_id *cocci_id/* drivers/gpio/gpio-pci-idio-16.c 283 */;
	struct pci_dev *cocci_id/* drivers/gpio/gpio-pci-idio-16.c 283 */;
	const char *cocci_id/* drivers/gpio/gpio-pci-idio-16.c 276 */[IDIO_16_NGPIO];
	struct gpio_chip *constcocci_id/* drivers/gpio/gpio-pci-idio-16.c 249 */;
	irqreturn_t cocci_id/* drivers/gpio/gpio-pci-idio-16.c 245 */;
	void *cocci_id/* drivers/gpio/gpio-pci-idio-16.c 245 */;
	struct irq_chip cocci_id/* drivers/gpio/gpio-pci-idio-16.c 237 */;
	const unsigned long cocci_id/* drivers/gpio/gpio-pci-idio-16.c 194 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-pci-idio-16.c 186 */;
	size_t cocci_id/* drivers/gpio/gpio-pci-idio-16.c 164 */;
	void cocci_id/* drivers/gpio/gpio-pci-idio-16.c 125 */;
	void __iomem *cocci_id/* drivers/gpio/gpio-pci-idio-16.c 109 */;
	void __iomem *cocci_id/* drivers/gpio/gpio-pci-idio-16.c 105 */[];
	unsigned long *cocci_id/* drivers/gpio/gpio-pci-idio-16.c 100 */;
}
