cocci_test_suite() {
	struct attribute *cocci_id/* drivers/hwmon/via-cputemp.c 96 */[];
	int cocci_id/* drivers/hwmon/via-cputemp.c 83 */;
	u32 cocci_id/* drivers/hwmon/via-cputemp.c 82 */;
	struct via_cputemp_data *cocci_id/* drivers/hwmon/via-cputemp.c 81 */;
	struct device_attribute *cocci_id/* drivers/hwmon/via-cputemp.c 79 */;
	char *cocci_id/* drivers/hwmon/via-cputemp.c 79 */;
	struct device *cocci_id/* drivers/hwmon/via-cputemp.c 78 */;
	ssize_t cocci_id/* drivers/hwmon/via-cputemp.c 78 */;
	unsigned long cocci_id/* drivers/hwmon/via-cputemp.c 75 */;
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/via-cputemp.c 54 */;
	struct via_cputemp_data {
		struct device *hwmon_dev;
		const char *name;
		u8 vrm;
		u32 id;
		u32 msr_temp;
		u32 msr_vid;
	} cocci_id/* drivers/hwmon/via-cputemp.c 37 */;
	void __exit cocci_id/* drivers/hwmon/via-cputemp.c 318 */;
	void cocci_id/* drivers/hwmon/via-cputemp.c 318 */;
	enum{SHOW_TEMP, SHOW_LABEL, SHOW_NAME,} cocci_id/* drivers/hwmon/via-cputemp.c 31 */;
	int __init cocci_id/* drivers/hwmon/via-cputemp.c 283 */;
	enum cpuhp_state cocci_id/* drivers/hwmon/via-cputemp.c 281 */;
	const struct x86_cpu_id __initconst cocci_id/* drivers/hwmon/via-cputemp.c 272 */[];
	struct pdev_entry *cocci_id/* drivers/hwmon/via-cputemp.c 256 */;
	unsigned int cocci_id/* drivers/hwmon/via-cputemp.c 254 */;
	struct pdev_entry cocci_id/* drivers/hwmon/via-cputemp.c 226 */;
	struct platform_device *cocci_id/* drivers/hwmon/via-cputemp.c 216 */;
	struct pdev_entry {
		struct list_head list;
		struct platform_device *pdev;
		unsigned int cpu;
	} cocci_id/* drivers/hwmon/via-cputemp.c 204 */;
	struct platform_driver cocci_id/* drivers/hwmon/via-cputemp.c 196 */;
	struct via_cputemp_data cocci_id/* drivers/hwmon/via-cputemp.c 117 */;
	struct cpuinfo_x86 *cocci_id/* drivers/hwmon/via-cputemp.c 113 */;
	const struct attribute_group cocci_id/* drivers/hwmon/via-cputemp.c 103 */;
}
