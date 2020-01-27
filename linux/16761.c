cocci_test_suite() {
	struct ps2_gpio_data *cocci_id/* drivers/input/serio/ps2-gpio.c 82 */;
	struct serio *cocci_id/* drivers/input/serio/ps2-gpio.c 80 */;
	unsigned char cocci_id/* drivers/input/serio/ps2-gpio.c 80 */;
	int cocci_id/* drivers/input/serio/ps2-gpio.c 80 */;
	void cocci_id/* drivers/input/serio/ps2-gpio.c 72 */;
	struct ps2_gpio_data {
		struct device *dev;
		struct serio *serio;
		unsigned char mode;
		struct gpio_desc *gpio_clk;
		struct gpio_desc *gpio_data;
		bool write_enable;
		int irq;
		unsigned char rx_cnt;
		unsigned char rx_byte;
		unsigned char tx_cnt;
		unsigned char tx_byte;
		struct completion tx_done;
		struct mutex tx_mutex;
		struct delayed_work tx_work;
	} cocci_id/* drivers/input/serio/ps2-gpio.c 47 */;
	struct platform_driver cocci_id/* drivers/input/serio/ps2-gpio.c 438 */;
	const struct of_device_id cocci_id/* drivers/input/serio/ps2-gpio.c 431 */[];
	struct serio cocci_id/* drivers/input/serio/ps2-gpio.c 353 */;
	struct ps2_gpio_data cocci_id/* drivers/input/serio/ps2-gpio.c 352 */;
	struct platform_device *cocci_id/* drivers/input/serio/ps2-gpio.c 345 */;
	struct device *cocci_id/* drivers/input/serio/ps2-gpio.c 322 */;
	irqreturn_t cocci_id/* drivers/input/serio/ps2-gpio.c 314 */;
	void *cocci_id/* drivers/input/serio/ps2-gpio.c 314 */;
	unsigned long cocci_id/* drivers/input/serio/ps2-gpio.c 131 */;
	struct delayed_work *cocci_id/* drivers/input/serio/ps2-gpio.c 116 */;
	struct work_struct *cocci_id/* drivers/input/serio/ps2-gpio.c 114 */;
}
