cocci_test_suite() {
	struct gpd_pocket_fan_data cocci_id/* drivers/platform/x86/gpd-pocket-fan.c 66 */;
	struct work_struct *cocci_id/* drivers/platform/x86/gpd-pocket-fan.c 63 */;
	int cocci_id/* drivers/platform/x86/gpd-pocket-fan.c 55 */;
	struct gpd_pocket_fan_data {
		struct device *dev;
		struct thermal_zone_device *dts0;
		struct thermal_zone_device *dts1;
		struct gpio_desc *gpio0;
		struct gpio_desc *gpio1;
		struct delayed_work work;
		int last_speed;
	} cocci_id/* drivers/platform/x86/gpd-pocket-fan.c 34 */;
	struct platform_driver cocci_id/* drivers/platform/x86/gpd-pocket-fan.c 203 */;
	struct acpi_device_id cocci_id/* drivers/platform/x86/gpd-pocket-fan.c 197 */[];
	int cocci_id/* drivers/platform/x86/gpd-pocket-fan.c 19 */[3];
	struct device *cocci_id/* drivers/platform/x86/gpd-pocket-fan.c 185 */;
	struct platform_device *cocci_id/* drivers/platform/x86/gpd-pocket-fan.c 114 */;
	struct gpd_pocket_fan_data *cocci_id/* drivers/platform/x86/gpd-pocket-fan.c 108 */;
	void cocci_id/* drivers/platform/x86/gpd-pocket-fan.c 108 */;
}
