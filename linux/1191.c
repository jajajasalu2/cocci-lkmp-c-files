cocci_test_suite() {
	struct usb_conn_info cocci_id/* drivers/usb/common/usb-conn-gpio.c 67 */;
	int cocci_id/* drivers/usb/common/usb-conn-gpio.c 64 */;
	enum usb_role cocci_id/* drivers/usb/common/usb-conn-gpio.c 63 */;
	struct usb_conn_info *cocci_id/* drivers/usb/common/usb-conn-gpio.c 62 */;
	struct work_struct *cocci_id/* drivers/usb/common/usb-conn-gpio.c 60 */;
	void cocci_id/* drivers/usb/common/usb-conn-gpio.c 60 */;
	struct usb_conn_info {
		struct device *dev;
		struct usb_role_switch *role_sw;
		enum usb_role last_role;
		struct regulator *vbus;
		struct delayed_work dw_det;
		unsigned long debounce_jiffies;
		struct gpio_desc *id_gpiod;
		struct gpio_desc *vbus_gpiod;
		int id_irq;
		int vbus_irq;
	} cocci_id/* drivers/usb/common/usb-conn-gpio.c 29 */;
	struct platform_driver cocci_id/* drivers/usb/common/usb-conn-gpio.c 271 */;
	const struct of_device_id cocci_id/* drivers/usb/common/usb-conn-gpio.c 265 */[];
	int __maybe_unused cocci_id/* drivers/usb/common/usb-conn-gpio.c 246 */;
	struct device *cocci_id/* drivers/usb/common/usb-conn-gpio.c 126 */;
	struct platform_device *cocci_id/* drivers/usb/common/usb-conn-gpio.c 124 */;
	irqreturn_t cocci_id/* drivers/usb/common/usb-conn-gpio.c 115 */;
	void *cocci_id/* drivers/usb/common/usb-conn-gpio.c 115 */;
	unsigned long cocci_id/* drivers/usb/common/usb-conn-gpio.c 110 */;
}
