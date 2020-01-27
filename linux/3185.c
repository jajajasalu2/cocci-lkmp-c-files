cocci_test_suite() {
	u32 cocci_id/* drivers/hwmon/nsa320-hwmon.c 70 */;
	const char *const cocci_id/* drivers/hwmon/nsa320-hwmon.c 54 */[];
	enum nsa320_inputs{NSA320_TEMP=0, NSA320_FAN=1,} cocci_id/* drivers/hwmon/nsa320-hwmon.c 49 */;
	struct nsa320_hwmon {
		struct mutex update_lock;
		unsigned long last_updated;
		unsigned long mcu_data;
		struct gpio_desc *act;
		struct gpio_desc *clk;
		struct gpio_desc *data;
	} cocci_id/* drivers/hwmon/nsa320-hwmon.c 40 */;
	struct platform_driver cocci_id/* drivers/hwmon/nsa320-hwmon.c 192 */;
	struct nsa320_hwmon *cocci_id/* drivers/hwmon/nsa320-hwmon.c 161 */;
	struct platform_device *cocci_id/* drivers/hwmon/nsa320-hwmon.c 159 */;
	const struct of_device_id cocci_id/* drivers/hwmon/nsa320-hwmon.c 154 */[];
	struct attribute *cocci_id/* drivers/hwmon/nsa320-hwmon.c 144 */[];
	s32 cocci_id/* drivers/hwmon/nsa320-hwmon.c 131 */;
	struct device_attribute *cocci_id/* drivers/hwmon/nsa320-hwmon.c 129 */;
	char *cocci_id/* drivers/hwmon/nsa320-hwmon.c 129 */;
	struct device *cocci_id/* drivers/hwmon/nsa320-hwmon.c 128 */;
	ssize_t cocci_id/* drivers/hwmon/nsa320-hwmon.c 128 */;
	int cocci_id/* drivers/hwmon/nsa320-hwmon.c 112 */;
}
