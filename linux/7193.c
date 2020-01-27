cocci_test_suite() {
	struct platform_device *cocci_id/* drivers/extcon/extcon-usb-gpio.c 98 */;
	irqreturn_t cocci_id/* drivers/extcon/extcon-usb-gpio.c 88 */;
	void *cocci_id/* drivers/extcon/extcon-usb-gpio.c 88 */;
	struct usb_extcon_info cocci_id/* drivers/extcon/extcon-usb-gpio.c 65 */;
	struct usb_extcon_info *cocci_id/* drivers/extcon/extcon-usb-gpio.c 64 */;
	int cocci_id/* drivers/extcon/extcon-usb-gpio.c 63 */;
	struct work_struct *cocci_id/* drivers/extcon/extcon-usb-gpio.c 61 */;
	void cocci_id/* drivers/extcon/extcon-usb-gpio.c 61 */;
	const unsigned int cocci_id/* drivers/extcon/extcon-usb-gpio.c 38 */[];
	struct platform_driver cocci_id/* drivers/extcon/extcon-usb-gpio.c 298 */;
	const struct platform_device_id cocci_id/* drivers/extcon/extcon-usb-gpio.c 292 */[];
	const struct of_device_id cocci_id/* drivers/extcon/extcon-usb-gpio.c 286 */[];
	struct usb_extcon_info {
		struct device *dev;
		struct extcon_dev *edev;
		struct gpio_desc *id_gpiod;
		struct gpio_desc *vbus_gpiod;
		int id_irq;
		int vbus_irq;
		unsigned long debounce_jiffies;
		struct delayed_work wq_detcable;
	} cocci_id/* drivers/extcon/extcon-usb-gpio.c 25 */;
	struct device_node *cocci_id/* drivers/extcon/extcon-usb-gpio.c 101 */;
	struct device *cocci_id/* drivers/extcon/extcon-usb-gpio.c 100 */;
}
