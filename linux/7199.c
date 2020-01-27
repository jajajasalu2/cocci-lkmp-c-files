cocci_test_suite() {
	struct device *cocci_id/* drivers/extcon/extcon-intel-int3496.c 89 */;
	struct platform_device *cocci_id/* drivers/extcon/extcon-intel-int3496.c 87 */;
	irqreturn_t cocci_id/* drivers/extcon/extcon-intel-int3496.c 77 */;
	void *cocci_id/* drivers/extcon/extcon-intel-int3496.c 77 */;
	int cocci_id/* drivers/extcon/extcon-intel-int3496.c 59 */;
	struct int3496_data cocci_id/* drivers/extcon/extcon-intel-int3496.c 58 */;
	struct int3496_data *cocci_id/* drivers/extcon/extcon-intel-int3496.c 57 */;
	struct work_struct *cocci_id/* drivers/extcon/extcon-intel-int3496.c 55 */;
	void cocci_id/* drivers/extcon/extcon-intel-int3496.c 55 */;
	const struct acpi_gpio_mapping cocci_id/* drivers/extcon/extcon-intel-int3496.c 44 */[];
	const struct acpi_gpio_params cocci_id/* drivers/extcon/extcon-intel-int3496.c 40 */;
	const unsigned int cocci_id/* drivers/extcon/extcon-intel-int3496.c 35 */[];
	struct int3496_data {
		struct device *dev;
		struct extcon_dev *edev;
		struct delayed_work work;
		struct gpio_desc *gpio_usb_id;
		struct gpio_desc *gpio_vbus_en;
		struct gpio_desc *gpio_usb_mux;
		int usb_id_irq;
	} cocci_id/* drivers/extcon/extcon-intel-int3496.c 25 */;
	struct platform_driver cocci_id/* drivers/extcon/extcon-intel-int3496.c 174 */;
	const struct acpi_device_id cocci_id/* drivers/extcon/extcon-intel-int3496.c 168 */[];
}
