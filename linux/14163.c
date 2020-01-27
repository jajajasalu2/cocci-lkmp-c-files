cocci_test_suite() {
	bool cocci_id/* drivers/media/platform/cec-gpio/cec-gpio.c 74 */;
	struct cec_gpio *cocci_id/* drivers/media/platform/cec-gpio/cec-gpio.c 73 */;
	irqreturn_t cocci_id/* drivers/media/platform/cec-gpio/cec-gpio.c 71 */;
	void *cocci_id/* drivers/media/platform/cec-gpio/cec-gpio.c 71 */;
	int cocci_id/* drivers/media/platform/cec-gpio/cec-gpio.c 71 */;
	struct platform_driver cocci_id/* drivers/media/platform/cec-gpio/cec-gpio.c 285 */;
	const struct of_device_id cocci_id/* drivers/media/platform/cec-gpio/cec-gpio.c 277 */[];
	u32 cocci_id/* drivers/media/platform/cec-gpio/cec-gpio.c 180 */;
	struct device *cocci_id/* drivers/media/platform/cec-gpio/cec-gpio.c 177 */;
	struct platform_device *cocci_id/* drivers/media/platform/cec-gpio/cec-gpio.c 175 */;
	const struct cec_pin_ops cocci_id/* drivers/media/platform/cec-gpio/cec-gpio.c 163 */;
	struct cec_gpio {
		struct cec_adapter *adap;
		struct cec_notifier *notifier;
		struct device *dev;
		struct gpio_desc *cec_gpio;
		int cec_irq;
		bool cec_is_low;
		struct gpio_desc *hpd_gpio;
		int hpd_irq;
		bool hpd_is_high;
		ktime_t hpd_ts;
		struct gpio_desc *v5_gpio;
		int v5_irq;
		bool v5_is_high;
		ktime_t v5_ts;
	} cocci_id/* drivers/media/platform/cec-gpio/cec-gpio.c 14 */;
	struct seq_file *cocci_id/* drivers/media/platform/cec-gpio/cec-gpio.c 126 */;
	struct cec_adapter *cocci_id/* drivers/media/platform/cec-gpio/cec-gpio.c 119 */;
	void cocci_id/* drivers/media/platform/cec-gpio/cec-gpio.c 119 */;
}
