cocci_test_suite() {
	struct gpio_extcon_data cocci_id/* drivers/extcon/extcon-gpio.c 72 */;
	unsigned long cocci_id/* drivers/extcon/extcon-gpio.c 68 */;
	struct device *cocci_id/* drivers/extcon/extcon-gpio.c 67 */;
	struct gpio_extcon_data *cocci_id/* drivers/extcon/extcon-gpio.c 66 */;
	struct platform_device *cocci_id/* drivers/extcon/extcon-gpio.c 64 */;
	int cocci_id/* drivers/extcon/extcon-gpio.c 64 */;
	irqreturn_t cocci_id/* drivers/extcon/extcon-gpio.c 55 */;
	void *cocci_id/* drivers/extcon/extcon-gpio.c 55 */;
	struct work_struct *cocci_id/* drivers/extcon/extcon-gpio.c 44 */;
	void cocci_id/* drivers/extcon/extcon-gpio.c 44 */;
	struct gpio_extcon_data {
		struct extcon_dev *edev;
		struct delayed_work work;
		unsigned long debounce_jiffies;
		struct gpio_desc *gpiod;
		unsigned int extcon_id;
		unsigned long debounce;
		bool check_on_resume;
	} cocci_id/* drivers/extcon/extcon-gpio.c 34 */;
	struct platform_driver cocci_id/* drivers/extcon/extcon-gpio.c 159 */;
}
