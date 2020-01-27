cocci_test_suite() {
	int __init cocci_id/* drivers/powercap/powercap_sys.c 663 */;
	const struct powercap_control_type_ops *cocci_id/* drivers/powercap/powercap_sys.c 603 */;
	const struct powercap_zone_ops *cocci_id/* drivers/powercap/powercap_sys.c 487 */;
	struct class cocci_id/* drivers/powercap/powercap_sys.c 476 */;
	struct attribute *cocci_id/* drivers/powercap/powercap_sys.c 470 */[];
	size_t cocci_id/* drivers/powercap/powercap_sys.c 446 */;
	char *cocci_id/* drivers/powercap/powercap_sys.c 423 */;
	struct device *cocci_id/* drivers/powercap/powercap_sys.c 421 */;
	ssize_t cocci_id/* drivers/powercap/powercap_sys.c 421 */;
	void cocci_id/* drivers/powercap/powercap_sys.c 359 */;
	struct powercap_control_type *cocci_id/* drivers/powercap/powercap_sys.c 331 */;
	bool cocci_id/* drivers/powercap/powercap_sys.c 329 */;
	void *cocci_id/* drivers/powercap/powercap_sys.c 329 */;
	struct powercap_zone_constraint *cocci_id/* drivers/powercap/powercap_sys.c 290 */;
	const struct powercap_zone_constraint_ops *cocci_id/* drivers/powercap/powercap_sys.c 285 */;
	struct powercap_zone *cocci_id/* drivers/powercap/powercap_sys.c 283 */;
	u64 cocci_id/* drivers/powercap/powercap_sys.c 23 */;
	ssize_t (*cocci_id/* drivers/powercap/powercap_sys.c 188 */)(struct device *,
								     struct device_attribute *,
								     const char *,
								     size_t);
	ssize_t (*cocci_id/* drivers/powercap/powercap_sys.c 186 */)(struct device *,
								     struct device_attribute *,
								     char *);
	struct device_attribute *cocci_id/* drivers/powercap/powercap_sys.c 185 */;
	const char *cocci_id/* drivers/powercap/powercap_sys.c 183 */;
	int cocci_id/* drivers/powercap/powercap_sys.c 183 */;
	struct powercap_control_type cocci_id/* drivers/powercap/powercap_sys.c 15 */;
	struct powercap_constraint_attr cocci_id/* drivers/powercap/powercap_sys.c 145 */[MAX_CONSTRAINTS_PER_ZONE];
	struct powercap_constraint_attr {
		struct device_attribute power_limit_attr;
		struct device_attribute time_window_attr;
		struct device_attribute max_power_attr;
		struct device_attribute min_power_attr;
		struct device_attribute max_time_window_attr;
		struct device_attribute min_time_window_attr;
		struct device_attribute name_attr;
	} cocci_id/* drivers/powercap/powercap_sys.c 135 */;
	struct powercap_zone cocci_id/* drivers/powercap/powercap_sys.c 13 */;
}
