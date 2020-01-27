cocci_test_suite() {
	struct amd_gpio {
		struct gpio_chip chip;
		u32 pmbase;
		void __iomem *pm;
		struct pci_dev *pdev;
		spinlock_t lock;
		u8 orig[32];
	} cocci_id/* drivers/gpio/gpio-amd8111.c 70 */;
	const struct pci_device_id cocci_id/* drivers/gpio/gpio-amd8111.c 64 */[];
	void __exit cocci_id/* drivers/gpio/gpio-amd8111.c 238 */;
	void cocci_id/* drivers/gpio/gpio-amd8111.c 238 */;
	const struct pci_device_id *cocci_id/* drivers/gpio/gpio-amd8111.c 180 */;
	struct pci_dev *cocci_id/* drivers/gpio/gpio-amd8111.c 179 */;
	int __init cocci_id/* drivers/gpio/gpio-amd8111.c 176 */;
	struct amd_gpio cocci_id/* drivers/gpio/gpio-amd8111.c 161 */;
	unsigned long cocci_id/* drivers/gpio/gpio-amd8111.c 148 */;
	u8 cocci_id/* drivers/gpio/gpio-amd8111.c 147 */;
	struct amd_gpio *cocci_id/* drivers/gpio/gpio-amd8111.c 146 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-amd8111.c 144 */;
	unsigned cocci_id/* drivers/gpio/gpio-amd8111.c 144 */;
	int cocci_id/* drivers/gpio/gpio-amd8111.c 144 */;
}
