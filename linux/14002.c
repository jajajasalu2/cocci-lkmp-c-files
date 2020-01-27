cocci_test_suite() {
	struct rc_dev *cocci_id/* drivers/media/rc/gpio-ir-recv.c 42 */;
	struct device_node *cocci_id/* drivers/media/rc/gpio-ir-recv.c 40 */;
	struct device *cocci_id/* drivers/media/rc/gpio-ir-recv.c 39 */;
	struct platform_device *cocci_id/* drivers/media/rc/gpio-ir-recv.c 37 */;
	struct gpio_rc_dev *cocci_id/* drivers/media/rc/gpio-ir-recv.c 28 */;
	irqreturn_t cocci_id/* drivers/media/rc/gpio-ir-recv.c 25 */;
	void *cocci_id/* drivers/media/rc/gpio-ir-recv.c 25 */;
	int cocci_id/* drivers/media/rc/gpio-ir-recv.c 25 */;
	struct gpio_rc_dev {
		struct rc_dev *rcdev;
		struct gpio_desc *gpiod;
		int irq;
	} cocci_id/* drivers/media/rc/gpio-ir-recv.c 19 */;
	struct platform_driver cocci_id/* drivers/media/rc/gpio-ir-recv.c 137 */;
	const struct of_device_id cocci_id/* drivers/media/rc/gpio-ir-recv.c 131 */[];
	const struct dev_pm_ops cocci_id/* drivers/media/rc/gpio-ir-recv.c 125 */;
}
