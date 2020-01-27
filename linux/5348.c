cocci_test_suite() {
	struct bin_attribute cocci_id/* drivers/base/devcoredump.c 96 */;
	loff_t cocci_id/* drivers/base/devcoredump.c 76 */;
	char *cocci_id/* drivers/base/devcoredump.c 76 */;
	struct bin_attribute *cocci_id/* drivers/base/devcoredump.c 75 */;
	struct kobject *cocci_id/* drivers/base/devcoredump.c 74 */;
	struct file *cocci_id/* drivers/base/devcoredump.c 74 */;
	ssize_t cocci_id/* drivers/base/devcoredump.c 74 */;
	struct work_struct *cocci_id/* drivers/base/devcoredump.c 64 */;
	struct devcd_entry cocci_id/* drivers/base/devcoredump.c 42 */;
	void __exit cocci_id/* drivers/base/devcoredump.c 343 */;
	int __init cocci_id/* drivers/base/devcoredump.c 337 */;
	struct scatterlist *cocci_id/* drivers/base/devcoredump.c 329 */;
	struct devcd_entry {
		struct device devcd_dev;
		void *data;
		size_t datalen;
		struct module *owner;
		ssize_t (*read)(char *buffer, loff_t offset, size_t count,
				void *data, size_t datalen);
		void (*free)(void *data);
		struct delayed_work del_wk;
		struct device *failing_dev;
	} cocci_id/* drivers/base/devcoredump.c 28 */;
	struct devcd_entry *cocci_id/* drivers/base/devcoredump.c 259 */;
	atomic_t cocci_id/* drivers/base/devcoredump.c 258 */;
	void (*cocci_id/* drivers/base/devcoredump.c 256 */)(void *data);
	ssize_t (*cocci_id/* drivers/base/devcoredump.c 254 */)(char *buffer,
								loff_t offset,
								size_t count,
								void *data,
								size_t datalen);
	gfp_t cocci_id/* drivers/base/devcoredump.c 253 */;
	void *cocci_id/* drivers/base/devcoredump.c 253 */;
	size_t cocci_id/* drivers/base/devcoredump.c 253 */;
	struct module *cocci_id/* drivers/base/devcoredump.c 252 */;
	struct device *cocci_id/* drivers/base/devcoredump.c 252 */;
	void cocci_id/* drivers/base/devcoredump.c 252 */;
	bool cocci_id/* drivers/base/devcoredump.c 23 */;
	struct class cocci_id/* drivers/base/devcoredump.c 20 */;
	const void *cocci_id/* drivers/base/devcoredump.c 192 */;
	struct attribute *cocci_id/* drivers/base/devcoredump.c 150 */[];
	long cocci_id/* drivers/base/devcoredump.c 132 */;
	const char *cocci_id/* drivers/base/devcoredump.c 130 */;
	struct class_attribute *cocci_id/* drivers/base/devcoredump.c 123 */;
	struct class *cocci_id/* drivers/base/devcoredump.c 123 */;
	int cocci_id/* drivers/base/devcoredump.c 115 */;
	const struct attribute_group *cocci_id/* drivers/base/devcoredump.c 111 */[];
	const struct attribute_group cocci_id/* drivers/base/devcoredump.c 107 */;
	struct bin_attribute *cocci_id/* drivers/base/devcoredump.c 103 */[];
}
