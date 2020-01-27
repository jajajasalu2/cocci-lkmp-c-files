cocci_test_suite() {
	struct timer_list *cocci_id/* drivers/pps/clients/pps-gpio.c 94 */;
	struct pps_gpio_device_data *cocci_id/* drivers/pps/clients/pps-gpio.c 72 */;
	struct pps_device *cocci_id/* drivers/pps/clients/pps-gpio.c 69 */;
	void *cocci_id/* drivers/pps/clients/pps-gpio.c 69 */;
	int cocci_id/* drivers/pps/clients/pps-gpio.c 69 */;
	void cocci_id/* drivers/pps/clients/pps-gpio.c 69 */;
	struct pps_event_time cocci_id/* drivers/pps/clients/pps-gpio.c 48 */;
	irqreturn_t cocci_id/* drivers/pps/clients/pps-gpio.c 45 */;
	struct pps_gpio_device_data {
		int irq;
		struct pps_device *pps;
		struct pps_source_info info;
		struct gpio_desc *gpio_pin;
		struct gpio_desc *echo_pin;
		struct timer_list echo_timer;
		bool assert_falling_edge;
		bool capture_clear;
		unsigned int echo_active_ms;
		unsigned long echo_timeout;
	} cocci_id/* drivers/pps/clients/pps-gpio.c 28 */;
	struct platform_driver cocci_id/* drivers/pps/clients/pps-gpio.c 261 */;
	const struct of_device_id cocci_id/* drivers/pps/clients/pps-gpio.c 255 */[];
	const struct pps_gpio_platform_data *cocci_id/* drivers/pps/clients/pps-gpio.c 170 */;
	struct platform_device *cocci_id/* drivers/pps/clients/pps-gpio.c 165 */;
	const struct pps_gpio_device_data *cocci_id/* drivers/pps/clients/pps-gpio.c 152 */;
	unsigned long cocci_id/* drivers/pps/clients/pps-gpio.c 151 */;
	u32 cocci_id/* drivers/pps/clients/pps-gpio.c 108 */;
	struct device_node *cocci_id/* drivers/pps/clients/pps-gpio.c 106 */;
}
