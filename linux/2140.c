cocci_test_suite() {
	struct axp20x_usb_power cocci_id/* drivers/power/supply/axp20x_usb_power.c 82 */;
	struct work_struct *cocci_id/* drivers/power/supply/axp20x_usb_power.c 79 */;
	void cocci_id/* drivers/power/supply/axp20x_usb_power.c 79 */;
	irqreturn_t cocci_id/* drivers/power/supply/axp20x_usb_power.c 70 */;
	void *cocci_id/* drivers/power/supply/axp20x_usb_power.c 70 */;
	struct axp20x_usb_power {
		struct device_node *np;
		struct regmap *regmap;
		struct power_supply *supply;
		enum axp20x_variants axp20x_id;
		struct iio_channel *vbus_v;
		struct iio_channel *vbus_i;
		struct delayed_work vbus_detect;
		unsigned int old_status;
	} cocci_id/* drivers/power/supply/axp20x_usb_power.c 59 */;
	struct platform_driver cocci_id/* drivers/power/supply/axp20x_usb_power.c 563 */;
	const struct of_device_id cocci_id/* drivers/power/supply/axp20x_usb_power.c 546 */[];
	enum axp20x_variants cocci_id/* drivers/power/supply/axp20x_usb_power.c 465 */;
	const struct power_supply_desc *cocci_id/* drivers/power/supply/axp20x_usb_power.c 449 */;
	const char *const *cocci_id/* drivers/power/supply/axp20x_usb_power.c 448 */;
	const char *const cocci_id/* drivers/power/supply/axp20x_usb_power.c 444 */[];
	struct power_supply_config cocci_id/* drivers/power/supply/axp20x_usb_power.c 442 */;
	struct axp20x_dev *cocci_id/* drivers/power/supply/axp20x_usb_power.c 441 */;
	struct platform_device *cocci_id/* drivers/power/supply/axp20x_usb_power.c 439 */;
	const struct power_supply_desc cocci_id/* drivers/power/supply/axp20x_usb_power.c 389 */;
	enum power_supply_property cocci_id/* drivers/power/supply/axp20x_usb_power.c 371 */[];
	const union power_supply_propval *cocci_id/* drivers/power/supply/axp20x_usb_power.c 343 */;
	enum power_supply_property cocci_id/* drivers/power/supply/axp20x_usb_power.c 163 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/axp20x_usb_power.c 163 */;
	struct power_supply *cocci_id/* drivers/power/supply/axp20x_usb_power.c 162 */;
	unsigned int cocci_id/* drivers/power/supply/axp20x_usb_power.c 110 */;
	struct axp20x_usb_power *cocci_id/* drivers/power/supply/axp20x_usb_power.c 108 */;
	int *cocci_id/* drivers/power/supply/axp20x_usb_power.c 108 */;
	int cocci_id/* drivers/power/supply/axp20x_usb_power.c 108 */;
	bool cocci_id/* drivers/power/supply/axp20x_usb_power.c 100 */;
}
