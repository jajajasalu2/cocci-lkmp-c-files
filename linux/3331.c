cocci_test_suite() {
	unsigned long cocci_id/* drivers/hwmon/w83627hf.c 876 */;
	const char *cocci_id/* drivers/hwmon/w83627hf.c 873 */;
	size_t cocci_id/* drivers/hwmon/w83627hf.c 873 */;
	struct w83627hf_data *cocci_id/* drivers/hwmon/w83627hf.c 843 */;
	struct device_attribute *cocci_id/* drivers/hwmon/w83627hf.c 841 */;
	struct device *cocci_id/* drivers/hwmon/w83627hf.c 841 */;
	char *cocci_id/* drivers/hwmon/w83627hf.c 841 */;
	ssize_t cocci_id/* drivers/hwmon/w83627hf.c 840 */;
	u16 cocci_id/* drivers/hwmon/w83627hf.c 739 */;
	unsigned short cocci_id/* drivers/hwmon/w83627hf.c 65 */;
	bool cocci_id/* drivers/hwmon/w83627hf.c 61 */;
	struct w83627hf_sio_data {
		enum chips type;
		int sioaddr;
	} cocci_id/* drivers/hwmon/w83627hf.c 51 */;
	enum chips{w83627hf, w83627thf, w83697hf, w83637hf, w83687thf,} cocci_id/* drivers/hwmon/w83627hf.c 49 */;
	struct platform_driver cocci_id/* drivers/hwmon/w83627hf.c 467 */;
	struct platform_device *cocci_id/* drivers/hwmon/w83627hf.c 46 */;
	const struct dev_pm_ops cocci_id/* drivers/hwmon/w83627hf.c 457 */;
	void cocci_id/* drivers/hwmon/w83627hf.c 399 */(struct platform_device *pdev);
	struct w83627hf_data *cocci_id/* drivers/hwmon/w83627hf.c 398 */(struct device *dev);
	void cocci_id/* drivers/hwmon/w83627hf.c 397 */(struct w83627hf_data *data);
	int cocci_id/* drivers/hwmon/w83627hf.c 396 */(struct w83627hf_data *data,
						       u16 reg, u16 value);
	int cocci_id/* drivers/hwmon/w83627hf.c 395 */(struct w83627hf_data *data,
						       u16 reg);
	int cocci_id/* drivers/hwmon/w83627hf.c 392 */(struct platform_device *pdev);
	struct w83627hf_data {
		unsigned short addr;
		const char *name;
		struct device *hwmon_dev;
		struct mutex lock;
		enum chips type;
		struct mutex update_lock;
		char valid;
		unsigned long last_updated;
		u8 in[9];
		u8 in_max[9];
		u8 in_min[9];
		u8 fan[3];
		u8 fan_min[3];
		u16 temp[3];
		u16 temp_max[3];
		u16 temp_max_hyst[3];
		u8 fan_div[3];
		u8 vid;
		u32 alarms;
		u32 beep_mask;
		u8 pwm[3];
		u8 pwm_enable[3];
		u8 pwm_freq[3];
		u16 sens[3];
		u8 vrm;
		u8 vrm_ovt;
#ifdef CONFIG_PM
		u8 scfg1;
		u8 scfg2;
#endif
	} cocci_id/* drivers/hwmon/w83627hf.c 350 */;
	int cocci_id/* drivers/hwmon/w83627hf.c 336 */;
	u8 cocci_id/* drivers/hwmon/w83627hf.c 334 */;
	long cocci_id/* drivers/hwmon/w83627hf.c 334 */;
	s8 cocci_id/* drivers/hwmon/w83627hf.c 277 */;
	const u8 cocci_id/* drivers/hwmon/w83627hf.c 239 */[];
	void __exit cocci_id/* drivers/hwmon/w83627hf.c 1992 */;
	void cocci_id/* drivers/hwmon/w83627hf.c 1992 */;
	struct w83627hf_sio_data cocci_id/* drivers/hwmon/w83627hf.c 1969 */;
	int __init cocci_id/* drivers/hwmon/w83627hf.c 1965 */;
	struct resource cocci_id/* drivers/hwmon/w83627hf.c 1919 */;
	const struct w83627hf_sio_data *cocci_id/* drivers/hwmon/w83627hf.c 1917 */;
	const u16 cocci_id/* drivers/hwmon/w83627hf.c 175 */[];
	enum chips cocci_id/* drivers/hwmon/w83627hf.c 1725 */;
	struct w83627hf_data cocci_id/* drivers/hwmon/w83627hf.c 1417 */;
	const char *cocci_id/* drivers/hwmon/w83627hf.c 1401 */[];
	struct resource *cocci_id/* drivers/hwmon/w83627hf.c 1398 */;
	const struct attribute_group cocci_id/* drivers/hwmon/w83627hf.c 1365 */;
	struct attribute *cocci_id/* drivers/hwmon/w83627hf.c 1337 */[];
	char *const cocci_id/* drivers/hwmon/w83627hf.c 1253 */[];
	unsigned short *cocci_id/* drivers/hwmon/w83627hf.c 1247 */;
	struct w83627hf_sio_data *cocci_id/* drivers/hwmon/w83627hf.c 121 */;
	u32 cocci_id/* drivers/hwmon/w83627hf.c 1185 */;
}
