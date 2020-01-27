cocci_test_suite() {
	u32 cocci_id/* drivers/gpio/gpio-rdc321x.c 83 */;
	unsigned cocci_id/* drivers/gpio/gpio-rdc321x.c 79 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-rdc321x.c 78 */;
	void cocci_id/* drivers/gpio/gpio-rdc321x.c 67 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-rdc321x.c 187 */;
	struct rdc321x_gpio {
		spinlock_t lock;
		struct pci_dev *sb_pdev;
		u32 data_reg[2];
		int reg1_ctrl_base;
		int reg1_data_base;
		int reg2_ctrl_base;
		int reg2_data_base;
		struct gpio_chip chip;
	} cocci_id/* drivers/gpio/gpio-rdc321x.c 18 */;
	struct rdc321x_gpio cocci_id/* drivers/gpio/gpio-rdc321x.c 130 */;
	struct rdc321x_gpio_pdata *cocci_id/* drivers/gpio/gpio-rdc321x.c 122 */;
	struct rdc321x_gpio *cocci_id/* drivers/gpio/gpio-rdc321x.c 121 */;
	struct resource *cocci_id/* drivers/gpio/gpio-rdc321x.c 120 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-rdc321x.c 117 */;
	int cocci_id/* drivers/gpio/gpio-rdc321x.c 117 */;
}
