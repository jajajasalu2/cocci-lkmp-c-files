cocci_test_suite() {
	bool cocci_id/* drivers/input/misc/da9063_onkey.c 90 */;
	struct work_struct *cocci_id/* drivers/input/misc/da9063_onkey.c 82 */;
	const struct of_device_id cocci_id/* drivers/input/misc/da9063_onkey.c 75 */[];
	const struct da906x_chip_config cocci_id/* drivers/input/misc/da9063_onkey.c 60 */;
	struct da9063_onkey {
		struct delayed_work work;
		struct input_dev *input;
		struct device *dev;
		struct regmap *regmap;
		const struct da906x_chip_config *config;
		char phys[32];
		bool key_power;
	} cocci_id/* drivers/input/misc/da9063_onkey.c 35 */;
	struct platform_driver cocci_id/* drivers/input/misc/da9063_onkey.c 271 */;
	struct da9063_onkey cocci_id/* drivers/input/misc/da9063_onkey.c 204 */;
	struct da906x_chip_config {
		int onkey_status;
		int onkey_pwr_signalling;
		int onkey_fault_log;
		int onkey_shutdown;
		int onkey_nonkey_mask;
		int onkey_nonkey_lock_mask;
		int onkey_key_reset_mask;
		int onkey_shutdown_mask;
		const char *name;
	} cocci_id/* drivers/input/misc/da9063_onkey.c 20 */;
	const struct of_device_id *cocci_id/* drivers/input/misc/da9063_onkey.c 195 */;
	struct platform_device *cocci_id/* drivers/input/misc/da9063_onkey.c 192 */;
	struct da9063_onkey *cocci_id/* drivers/input/misc/da9063_onkey.c 187 */;
	void *cocci_id/* drivers/input/misc/da9063_onkey.c 185 */;
	void cocci_id/* drivers/input/misc/da9063_onkey.c 185 */;
	unsigned int cocci_id/* drivers/input/misc/da9063_onkey.c 163 */;
	const struct da906x_chip_config *cocci_id/* drivers/input/misc/da9063_onkey.c 162 */;
	irqreturn_t cocci_id/* drivers/input/misc/da9063_onkey.c 159 */;
	int cocci_id/* drivers/input/misc/da9063_onkey.c 159 */;
}
