cocci_test_suite() {
	const char *cocci_id/* net/rfkill/rfkill-gpio.c 78 */;
	struct gpio_desc *cocci_id/* net/rfkill/rfkill-gpio.c 77 */;
	struct platform_device *cocci_id/* net/rfkill/rfkill-gpio.c 74 */;
	unsigned cocci_id/* net/rfkill/rfkill-gpio.c 69 */;
	const struct acpi_device_id *cocci_id/* net/rfkill/rfkill-gpio.c 63 */;
	struct rfkill_gpio_data *cocci_id/* net/rfkill/rfkill-gpio.c 61 */;
	struct device *cocci_id/* net/rfkill/rfkill-gpio.c 60 */;
	int cocci_id/* net/rfkill/rfkill-gpio.c 60 */;
	const struct acpi_gpio_mapping cocci_id/* net/rfkill/rfkill-gpio.c 54 */[];
	const struct acpi_gpio_params cocci_id/* net/rfkill/rfkill-gpio.c 51 */;
	const struct rfkill_ops cocci_id/* net/rfkill/rfkill-gpio.c 47 */;
	bool cocci_id/* net/rfkill/rfkill-gpio.c 29 */;
	void *cocci_id/* net/rfkill/rfkill-gpio.c 29 */;
	struct rfkill_gpio_data {
		const char *name;
		enum rfkill_type type;
		struct gpio_desc *reset_gpio;
		struct gpio_desc *shutdown_gpio;
		struct rfkill *rfkill_dev;
		struct clk *clk;
		bool clk_enabled;
	} cocci_id/* net/rfkill/rfkill-gpio.c 17 */;
	struct platform_driver cocci_id/* net/rfkill/rfkill-gpio.c 160 */;
	const struct acpi_device_id cocci_id/* net/rfkill/rfkill-gpio.c 152 */[];
}
