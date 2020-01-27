cocci_test_suite() {
	void cocci_id/* drivers/regulator/virtual.c 67 */;
	struct platform_driver cocci_id/* drivers/regulator/virtual.c 332 */;
	struct virtual_consumer_data cocci_id/* drivers/regulator/virtual.c 290 */;
	struct virtual_consumer_data *cocci_id/* drivers/regulator/virtual.c 287 */;
	char *cocci_id/* drivers/regulator/virtual.c 286 */;
	struct platform_device *cocci_id/* drivers/regulator/virtual.c 284 */;
	int cocci_id/* drivers/regulator/virtual.c 284 */;
	const struct attribute_group cocci_id/* drivers/regulator/virtual.c 280 */;
	struct attribute *cocci_id/* drivers/regulator/virtual.c 271 */[];
	unsigned int cocci_id/* drivers/regulator/virtual.c 234 */;
	long cocci_id/* drivers/regulator/virtual.c 196 */;
	const char *cocci_id/* drivers/regulator/virtual.c 193 */;
	size_t cocci_id/* drivers/regulator/virtual.c 193 */;
	struct device_attribute *cocci_id/* drivers/regulator/virtual.c 192 */;
	struct device *cocci_id/* drivers/regulator/virtual.c 192 */;
	ssize_t cocci_id/* drivers/regulator/virtual.c 192 */;
	struct virtual_consumer_data {
		struct mutex lock;
		struct regulator *regulator;
		bool enabled;
		int min_uV;
		int max_uV;
		int min_uA;
		int max_uA;
		unsigned int mode;
	} cocci_id/* drivers/regulator/virtual.c 17 */;
}
