cocci_test_suite() {
	char cocci_id/* drivers/cpuidle/sysfs.c 88 */[CPUIDLE_NAME_LEN];
	unsigned long cocci_id/* drivers/cpuidle/sysfs.c 705 */;
	struct cpuidle_device *cocci_id/* drivers/cpuidle/sysfs.c 674 */;
	int cocci_id/* drivers/cpuidle/sysfs.c 674 */;
	struct cpuidle_driver *cocci_id/* drivers/cpuidle/sysfs.c 624 */;
	struct cpuidle_device_kobj *cocci_id/* drivers/cpuidle/sysfs.c 623 */;
	struct cpuidle_driver_kobj *cocci_id/* drivers/cpuidle/sysfs.c 622 */;
	const struct sysfs_ops cocci_id/* drivers/cpuidle/sysfs.c 600 */;
	const char *cocci_id/* drivers/cpuidle/sysfs.c 586 */;
	size_t cocci_id/* drivers/cpuidle/sysfs.c 586 */;
	struct cpuidle_driver_attr *cocci_id/* drivers/cpuidle/sysfs.c 577 */;
	char *cocci_id/* drivers/cpuidle/sysfs.c 573 */;
	struct kobject *cocci_id/* drivers/cpuidle/sysfs.c 572 */;
	struct attribute *cocci_id/* drivers/cpuidle/sysfs.c 572 */;
	ssize_t cocci_id/* drivers/cpuidle/sysfs.c 572 */;
	struct cpuidle_driver_attr {
		struct attribute attr;
		ssize_t (*show)(struct cpuidle_driver *, char *);
		ssize_t (*store)(struct cpuidle_driver *, const char *,
				 size_t);
	} cocci_id/* drivers/cpuidle/sysfs.c 549 */;
	struct cpuidle_driver_kobj {
		struct cpuidle_driver *drv;
		struct completion kobj_unregister;
		struct kobject kobj;
	} cocci_id/* drivers/cpuidle/sysfs.c 543 */;
	struct cpuidle_driver_attr cocci_id/* drivers/cpuidle/sysfs.c 537 */;
	struct cpuidle_driver_kobj cocci_id/* drivers/cpuidle/sysfs.c 536 */;
	struct cpuidle_state_kobj cocci_id/* drivers/cpuidle/sysfs.c 493 */;
	struct cpuidle_state_attr *cocci_id/* drivers/cpuidle/sysfs.c 427 */;
	struct cpuidle_state_usage *cocci_id/* drivers/cpuidle/sysfs.c 426 */;
	struct cpuidle_state *cocci_id/* drivers/cpuidle/sysfs.c 425 */;
	struct cpuidle_state_attr cocci_id/* drivers/cpuidle/sysfs.c 419 */;
	struct cpuidle_state_kobj *cocci_id/* drivers/cpuidle/sysfs.c 393 */;
	void cocci_id/* drivers/cpuidle/sysfs.c 393 */;
	const struct attribute_group cocci_id/* drivers/cpuidle/sysfs.c 388 */;
	char cocci_id/* drivers/cpuidle/sysfs.c 38 */;
	struct cpuidle_state_kobj {
		struct cpuidle_state *state;
		struct cpuidle_state_usage *state_usage;
		struct completion kobj_unregister;
		struct kobject kobj;
		struct cpuidle_device *device;
	} cocci_id/* drivers/cpuidle/sysfs.c 355 */;
	struct cpuidle_governor *cocci_id/* drivers/cpuidle/sysfs.c 34 */;
	unsigned int cocci_id/* drivers/cpuidle/sysfs.c 312 */;
	struct device_attribute *cocci_id/* drivers/cpuidle/sysfs.c 30 */;
	struct cpuidle_state_attr {
		struct attribute attr;
		ssize_t (*show)(struct cpuidle_state *,
				struct cpuidle_state_usage *, char *);
		ssize_t (*store)(struct cpuidle_state *,
				 struct cpuidle_state_usage *, const char *,
				 size_t);
	} cocci_id/* drivers/cpuidle/sysfs.c 237 */;
	struct kobj_type cocci_id/* drivers/cpuidle/sysfs.c 232 */;
	struct cpuidle_device_kobj cocci_id/* drivers/cpuidle/sysfs.c 227 */;
	int __init cocci_id/* drivers/cpuidle/sysfs.c 22 */;
	struct cpuidle_attr *cocci_id/* drivers/cpuidle/sysfs.c 194 */;
	struct cpuidle_device_kobj {
		struct cpuidle_device *dev;
		struct completion kobj_unregister;
		struct kobject kobj;
	} cocci_id/* drivers/cpuidle/sysfs.c 175 */;
	struct cpuidle_attr cocci_id/* drivers/cpuidle/sysfs.c 173 */;
	struct cpuidle_attr {
		struct attribute attr;
		ssize_t (*show)(struct cpuidle_device *, char *);
		ssize_t (*store)(struct cpuidle_device *, const char *,
				 size_t count);
	} cocci_id/* drivers/cpuidle/sysfs.c 162 */;
	struct device *cocci_id/* drivers/cpuidle/sysfs.c 146 */;
	struct attribute_group cocci_id/* drivers/cpuidle/sysfs.c 138 */;
	struct attribute *cocci_id/* drivers/cpuidle/sysfs.c 121 */[];
}
