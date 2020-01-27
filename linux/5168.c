cocci_test_suite() {
	u8 cocci_id/* drivers/gpio/gpio-intel-mid.c 72 */;
	struct intel_mid_gpio *cocci_id/* drivers/gpio/gpio-intel-mid.c 70 */;
	enum GPIO_REG cocci_id/* drivers/gpio/gpio-intel-mid.c 68 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-intel-mid.c 67 */;
	void __iomem *cocci_id/* drivers/gpio/gpio-intel-mid.c 67 */;
	unsigned cocci_id/* drivers/gpio/gpio-intel-mid.c 67 */;
	struct intel_mid_gpio {
		struct gpio_chip chip;
		void __iomem *reg_base;
		spinlock_t lock;
		struct pci_dev *pdev;
	} cocci_id/* drivers/gpio/gpio-intel-mid.c 60 */;
	struct intel_mid_gpio_ddata {
		u16 ngpio;
		u32 chip_irq_type;
	} cocci_id/* drivers/gpio/gpio-intel-mid.c 55 */;
	enum GPIO_REG{GPLR=0, GPDR, GPSR, GPCR, GRER, GFER, GEDR, GAFR,} cocci_id/* drivers/gpio/gpio-intel-mid.c 43 */;
	struct pci_driver cocci_id/* drivers/gpio/gpio-intel-mid.c 405 */;
	struct intel_mid_gpio_ddata *cocci_id/* drivers/gpio/gpio-intel-mid.c 336 */;
	struct gpio_irq_chip *cocci_id/* drivers/gpio/gpio-intel-mid.c 335 */;
	const struct pci_device_id *cocci_id/* drivers/gpio/gpio-intel-mid.c 328 */;
	struct pci_dev *cocci_id/* drivers/gpio/gpio-intel-mid.c 327 */;
	const struct dev_pm_ops cocci_id/* drivers/gpio/gpio-intel-mid.c 323 */;
	struct device *cocci_id/* drivers/gpio/gpio-intel-mid.c 317 */;
	int __maybe_unused cocci_id/* drivers/gpio/gpio-intel-mid.c 317 */;
	struct irq_chip *cocci_id/* drivers/gpio/gpio-intel-mid.c 275 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-intel-mid.c 274 */;
	struct irq_desc *cocci_id/* drivers/gpio/gpio-intel-mid.c 270 */;
	const struct pci_device_id cocci_id/* drivers/gpio/gpio-intel-mid.c 241 */[];
	const struct intel_mid_gpio_ddata cocci_id/* drivers/gpio/gpio-intel-mid.c 231 */;
	struct irq_chip cocci_id/* drivers/gpio/gpio-intel-mid.c 210 */;
	unsigned long cocci_id/* drivers/gpio/gpio-intel-mid.c 125 */;
	u32 cocci_id/* drivers/gpio/gpio-intel-mid.c 124 */;
	int cocci_id/* drivers/gpio/gpio-intel-mid.c 120 */;
	void cocci_id/* drivers/gpio/gpio-intel-mid.c 107 */;
}
