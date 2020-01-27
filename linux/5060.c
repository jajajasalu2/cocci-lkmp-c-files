cocci_test_suite() {
	void cocci_id/* drivers/gpio/gpio-exar.c 96 */;
	struct exar_gpio_chip *cocci_id/* drivers/gpio/gpio-exar.c 63 */;
	struct exar_gpio_chip {
		struct gpio_chip gpio_chip;
		struct mutex lock;
		int index;
		void __iomem *regs;
		char name[20];
		unsigned int first_pin;
	} cocci_id/* drivers/gpio/gpio-exar.c 25 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-exar.c 193 */;
	void __iomem *cocci_id/* drivers/gpio/gpio-exar.c 124 */;
	u32 cocci_id/* drivers/gpio/gpio-exar.c 123 */;
	struct pci_dev *cocci_id/* drivers/gpio/gpio-exar.c 121 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-exar.c 119 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-exar.c 114 */;
	unsigned int cocci_id/* drivers/gpio/gpio-exar.c 114 */;
	int cocci_id/* drivers/gpio/gpio-exar.c 114 */;
}
