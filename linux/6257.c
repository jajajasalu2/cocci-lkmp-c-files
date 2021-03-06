cocci_test_suite() {
	struct irq_data *cocci_id/* drivers/mfd/htc-i2cpld.c 72 */;
	int __init cocci_id/* drivers/mfd/htc-i2cpld.c 617 */;
	struct platform_driver cocci_id/* drivers/mfd/htc-i2cpld.c 611 */;
	struct i2c_driver cocci_id/* drivers/mfd/htc-i2cpld.c 603 */;
	const struct i2c_device_id cocci_id/* drivers/mfd/htc-i2cpld.c 598 */[];
	struct htcpld_data {
		u16 irqs_enabled;
		uint irq_start;
		int nirqs;
		uint chained_irq;
		unsigned int int_reset_gpio_hi;
		unsigned int int_reset_gpio_lo;
		struct htcpld_chip *chip;
		unsigned int nchips;
	} cocci_id/* drivers/mfd/htc-i2cpld.c 55 */;
	struct htcpld_data cocci_id/* drivers/mfd/htc-i2cpld.c 531 */;
	struct resource *cocci_id/* drivers/mfd/htc-i2cpld.c 519 */;
	struct htcpld_core_platform_data *cocci_id/* drivers/mfd/htc-i2cpld.c 518 */;
	struct device *cocci_id/* drivers/mfd/htc-i2cpld.c 517 */;
	struct htcpld_data *cocci_id/* drivers/mfd/htc-i2cpld.c 516 */;
	struct platform_device *cocci_id/* drivers/mfd/htc-i2cpld.c 514 */;
	struct htcpld_chip_platform_data *cocci_id/* drivers/mfd/htc-i2cpld.c 399 */;
	struct i2c_board_info cocci_id/* drivers/mfd/htc-i2cpld.c 330 */;
	struct i2c_adapter *cocci_id/* drivers/mfd/htc-i2cpld.c 328 */;
	struct i2c_client *cocci_id/* drivers/mfd/htc-i2cpld.c 285 */;
	void cocci_id/* drivers/mfd/htc-i2cpld.c 285 */;
	struct htcpld_chip {
		spinlock_t lock;
		u8 reset;
		u8 addr;
		struct device *dev;
		struct i2c_client *client;
		u8 cache_out;
		struct gpio_chip chip_out;
		u8 cache_in;
		struct gpio_chip chip_in;
		u16 irqs_enabled;
		uint irq_start;
		int nirqs;
		unsigned int flow_type;
		struct work_struct set_val_work;
	} cocci_id/* drivers/mfd/htc-i2cpld.c 26 */;
	u8 cocci_id/* drivers/mfd/htc-i2cpld.c 246 */;
	struct htcpld_chip *cocci_id/* drivers/mfd/htc-i2cpld.c 245 */;
	struct gpio_chip *cocci_id/* drivers/mfd/htc-i2cpld.c 243 */;
	unsigned cocci_id/* drivers/mfd/htc-i2cpld.c 243 */;
	int cocci_id/* drivers/mfd/htc-i2cpld.c 243 */;
	struct htcpld_chip cocci_id/* drivers/mfd/htc-i2cpld.c 238 */;
	struct work_struct *cocci_id/* drivers/mfd/htc-i2cpld.c 233 */;
	unsigned long cocci_id/* drivers/mfd/htc-i2cpld.c 217 */;
	unsigned int cocci_id/* drivers/mfd/htc-i2cpld.c 115 */;
	irqreturn_t cocci_id/* drivers/mfd/htc-i2cpld.c 112 */;
	void *cocci_id/* drivers/mfd/htc-i2cpld.c 112 */;
	struct irq_chip cocci_id/* drivers/mfd/htc-i2cpld.c 100 */;
}
