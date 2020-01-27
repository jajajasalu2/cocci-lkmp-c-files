cocci_test_suite() {
	u32 cocci_id/* drivers/gpio/gpio-bt8xx.c 73 */;
	unsigned long cocci_id/* drivers/gpio/gpio-bt8xx.c 72 */;
	struct bt8xxgpio *cocci_id/* drivers/gpio/gpio-bt8xx.c 71 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-bt8xx.c 69 */;
	unsigned cocci_id/* drivers/gpio/gpio-bt8xx.c 69 */;
	int cocci_id/* drivers/gpio/gpio-bt8xx.c 69 */;
	struct bt8xxgpio {
		spinlock_t lock;
		void __iomem *mmio;
		struct pci_dev *pdev;
		struct gpio_chip gpio;
#ifdef CONFIG_PM
		u32 saved_outen;
		u32 saved_data;
#endif
	} cocci_id/* drivers/gpio/gpio-bt8xx.c 47 */;
	struct pci_driver cocci_id/* drivers/gpio/gpio-bt8xx.c 298 */;
	const struct pci_device_id cocci_id/* drivers/gpio/gpio-bt8xx.c 289 */[];
	pm_message_t cocci_id/* drivers/gpio/gpio-bt8xx.c 236 */;
	unsigned long long cocci_id/* drivers/gpio/gpio-bt8xx.c 185 */;
	struct bt8xxgpio cocci_id/* drivers/gpio/gpio-bt8xx.c 169 */;
	const struct pci_device_id *cocci_id/* drivers/gpio/gpio-bt8xx.c 164 */;
	struct pci_dev *cocci_id/* drivers/gpio/gpio-bt8xx.c 163 */;
	void cocci_id/* drivers/gpio/gpio-bt8xx.c 128 */;
}
