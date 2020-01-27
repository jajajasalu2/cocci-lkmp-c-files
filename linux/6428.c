cocci_test_suite() {
	const struct attribute_group cocci_id/* drivers/regulator/userspace-consumer.c 99 */;
	struct attribute *cocci_id/* drivers/regulator/userspace-consumer.c 93 */[];
	int cocci_id/* drivers/regulator/userspace-consumer.c 56 */;
	bool cocci_id/* drivers/regulator/userspace-consumer.c 55 */;
	struct userspace_consumer_data *cocci_id/* drivers/regulator/userspace-consumer.c 54 */;
	const char *cocci_id/* drivers/regulator/userspace-consumer.c 52 */;
	size_t cocci_id/* drivers/regulator/userspace-consumer.c 52 */;
	struct device_attribute *cocci_id/* drivers/regulator/userspace-consumer.c 51 */;
	struct device *cocci_id/* drivers/regulator/userspace-consumer.c 51 */;
	ssize_t cocci_id/* drivers/regulator/userspace-consumer.c 51 */;
	char *cocci_id/* drivers/regulator/userspace-consumer.c 33 */;
	struct userspace_consumer_data {
		const char *name;
		struct mutex lock;
		bool enabled;
		int num_supplies;
		struct regulator_bulk_data *supplies;
	} cocci_id/* drivers/regulator/userspace-consumer.c 22 */;
	struct platform_driver cocci_id/* drivers/regulator/userspace-consumer.c 169 */;
	struct userspace_consumer_data cocci_id/* drivers/regulator/userspace-consumer.c 114 */;
	struct regulator_userspace_consumer_data *cocci_id/* drivers/regulator/userspace-consumer.c 105 */;
	struct platform_device *cocci_id/* drivers/regulator/userspace-consumer.c 103 */;
}
