cocci_test_suite() {
	u8 cocci_id/* drivers/gpio/gpio-merrifield.c 90 */;
	struct mrfld_gpio *cocci_id/* drivers/gpio/gpio-merrifield.c 89 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-merrifield.c 86 */;
	void __iomem *cocci_id/* drivers/gpio/gpio-merrifield.c 86 */;
	unsigned int cocci_id/* drivers/gpio/gpio-merrifield.c 86 */;
	const struct mrfld_gpio_pinrange cocci_id/* drivers/gpio/gpio-merrifield.c 57 */[];
	struct pci_driver cocci_id/* drivers/gpio/gpio-merrifield.c 506 */;
	const struct pci_device_id cocci_id/* drivers/gpio/gpio-merrifield.c 500 */[];
	struct mrfld_gpio {
		struct gpio_chip chip;
		void __iomem *reg_base;
		raw_spinlock_t lock;
		struct device *dev;
	} cocci_id/* drivers/gpio/gpio-merrifield.c 50 */;
	struct gpio_irq_chip *cocci_id/* drivers/gpio/gpio-merrifield.c 428 */;
	const struct pci_device_id *cocci_id/* drivers/gpio/gpio-merrifield.c 426 */;
	struct pci_dev *cocci_id/* drivers/gpio/gpio-merrifield.c 426 */;
	const char *cocci_id/* drivers/gpio/gpio-merrifield.c 406 */;
	const struct mrfld_gpio_pinrange *cocci_id/* drivers/gpio/gpio-merrifield.c 405 */;
	int cocci_id/* drivers/gpio/gpio-merrifield.c 402 */;
	struct acpi_device *cocci_id/* drivers/gpio/gpio-merrifield.c 388 */;
	struct mrfld_gpio_pinrange {
		unsigned int gpio_base;
		unsigned int pin_base;
		unsigned int npins;
	} cocci_id/* drivers/gpio/gpio-merrifield.c 37 */;
	struct irq_chip *cocci_id/* drivers/gpio/gpio-merrifield.c 340 */;
	struct irq_desc *cocci_id/* drivers/gpio/gpio-merrifield.c 336 */;
	struct irq_chip cocci_id/* drivers/gpio/gpio-merrifield.c 327 */;
	bool cocci_id/* drivers/gpio/gpio-merrifield.c 218 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-merrifield.c 204 */;
	u32 cocci_id/* drivers/gpio/gpio-merrifield.c 128 */;
	unsigned long cocci_id/* drivers/gpio/gpio-merrifield.c 127 */;
	void cocci_id/* drivers/gpio/gpio-merrifield.c 102 */;
}
