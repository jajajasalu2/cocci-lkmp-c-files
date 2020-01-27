cocci_test_suite() {
	struct sch311x_gpio_block_def cocci_id/* drivers/gpio/gpio-sch311x.c 59 */[];
	struct sch311x_gpio_block_def {
		unsigned short data_reg;
		unsigned short config_regs[8];
		unsigned short base;
	} cocci_id/* drivers/gpio/gpio-sch311x.c 51 */;
	struct sch311x_gpio_priv {
		struct sch311x_gpio_block blocks[6];
	} cocci_id/* drivers/gpio/gpio-sch311x.c 47 */;
	void __exit cocci_id/* drivers/gpio/gpio-sch311x.c 459 */;
	struct sch311x_pdev_data cocci_id/* drivers/gpio/gpio-sch311x.c 404 */;
	const unsigned short cocci_id/* drivers/gpio/gpio-sch311x.c 402 */;
	struct sch311x_gpio_block {
		struct gpio_chip chip;
		unsigned short data_reg;
		unsigned short *config_regs;
		unsigned short runtime_reg;
		spinlock_t lock;
	} cocci_id/* drivers/gpio/gpio-sch311x.c 39 */;
	unsigned short cocci_id/* drivers/gpio/gpio-sch311x.c 354 */;
	unsigned short *cocci_id/* drivers/gpio/gpio-sch311x.c 351 */;
	int __init cocci_id/* drivers/gpio/gpio-sch311x.c 351 */;
	struct sch311x_pdev_data {
		unsigned short runtime_reg;
	} cocci_id/* drivers/gpio/gpio-sch311x.c 35 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-sch311x.c 340 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-sch311x.c 33 */;
	int cocci_id/* drivers/gpio/gpio-sch311x.c 31 */[];
	struct sch311x_gpio_priv *cocci_id/* drivers/gpio/gpio-sch311x.c 268 */;
	struct sch311x_pdev_data *cocci_id/* drivers/gpio/gpio-sch311x.c 267 */;
	enum pin_config_param cocci_id/* drivers/gpio/gpio-sch311x.c 241 */;
	unsigned long cocci_id/* drivers/gpio/gpio-sch311x.c 238 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-sch311x.c 191 */;
	u8 cocci_id/* drivers/gpio/gpio-sch311x.c 173 */;
	unsigned cocci_id/* drivers/gpio/gpio-sch311x.c 171 */;
	int cocci_id/* drivers/gpio/gpio-sch311x.c 171 */;
	struct sch311x_gpio_block *cocci_id/* drivers/gpio/gpio-sch311x.c 170 */;
	void cocci_id/* drivers/gpio/gpio-sch311x.c 170 */;
}
