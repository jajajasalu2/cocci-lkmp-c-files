cocci_test_suite() {
	struct platform_data {
		struct device *hwmon_dev;
		u16 pkg_id;
		struct cpumask cpumask;
		struct temp_data *core_data[MAX_CORE_DATA];
		struct device_attribute name_attr;
	} cocci_id/* drivers/hwmon/coretemp.c 91 */;
	void __exit cocci_id/* drivers/hwmon/coretemp.c 756 */;
	struct temp_data {
		int temp;
		int ttarget;
		int tjmax;
		unsigned long last_updated;
		unsigned int cpu;
		u32 cpu_core_id;
		u32 status_reg;
		int attr_size;
		bool is_pkg_data;
		bool valid;
		struct sensor_device_attribute sd_attrs[TOTAL_ATTRS];
		char attr_name[TOTAL_ATTRS][CORETEMP_NAME_LENGTH];
		struct attribute *attrs[TOTAL_ATTRS + 1];
		struct attribute_group attr_group;
		struct mutex update_lock;
	} cocci_id/* drivers/hwmon/coretemp.c 72 */;
	int __init cocci_id/* drivers/hwmon/coretemp.c 719 */;
	enum cpuhp_state cocci_id/* drivers/hwmon/coretemp.c 717 */;
	const struct x86_cpu_id __initconst cocci_id/* drivers/hwmon/coretemp.c 711 */[];
	struct temp_data *cocci_id/* drivers/hwmon/coretemp.c 649 */;
	struct platform_data *cocci_id/* drivers/hwmon/coretemp.c 648 */;
	struct platform_driver cocci_id/* drivers/hwmon/coretemp.c 559 */;
	struct platform_data cocci_id/* drivers/hwmon/coretemp.c 535 */;
	struct platform_device *cocci_id/* drivers/hwmon/coretemp.c 512 */;
	void cocci_id/* drivers/hwmon/coretemp.c 511 */;
	struct temp_data cocci_id/* drivers/hwmon/coretemp.c 436 */;
	unsigned int cocci_id/* drivers/hwmon/coretemp.c 407 */;
	const char *const cocci_id/* drivers/hwmon/coretemp.c 388 */[TOTAL_ATTRS];
	ssize_t (*cocci_id/* drivers/hwmon/coretemp.c 384 */[TOTAL_ATTRS])(struct device *dev,
									   struct device_attribute *devattr,
									   char *buf);
	bool cocci_id/* drivers/hwmon/coretemp.c 329 */;
	u8 cocci_id/* drivers/hwmon/coretemp.c 269 */;
	const struct tjmax_model *cocci_id/* drivers/hwmon/coretemp.c 257 */;
	struct pci_dev *cocci_id/* drivers/hwmon/coretemp.c 237 */;
	u16 cocci_id/* drivers/hwmon/coretemp.c 236 */;
	u32 cocci_id/* drivers/hwmon/coretemp.c 226 */;
	struct device *cocci_id/* drivers/hwmon/coretemp.c 226 */;
	struct cpuinfo_x86 *cocci_id/* drivers/hwmon/coretemp.c 226 */;
	int cocci_id/* drivers/hwmon/coretemp.c 226 */;
	const struct tjmax_model cocci_id/* drivers/hwmon/coretemp.c 208 */[];
	struct tjmax_model {
		u8 model;
		u8 mask;
		int tjmax;
	} cocci_id/* drivers/hwmon/coretemp.c 200 */;
	const struct tjmax cocci_id/* drivers/hwmon/coretemp.c 195 */[];
	struct tjmax {
		const char *id;
		int tjmax;
	} cocci_id/* drivers/hwmon/coretemp.c 190 */;
	const struct tjmax_pci cocci_id/* drivers/hwmon/coretemp.c 183 */[];
	struct tjmax_pci {
		unsigned int device;
		int tjmax;
	} cocci_id/* drivers/hwmon/coretemp.c 178 */;
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/coretemp.c 121 */;
	struct device_attribute *cocci_id/* drivers/hwmon/coretemp.c 118 */;
	char *cocci_id/* drivers/hwmon/coretemp.c 118 */;
	ssize_t cocci_id/* drivers/hwmon/coretemp.c 117 */;
	struct platform_device **cocci_id/* drivers/hwmon/coretemp.c 102 */;
}
