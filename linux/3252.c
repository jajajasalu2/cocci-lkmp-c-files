cocci_test_suite() {
	const char *cocci_id/* drivers/hwmon/nct6683.c 999 */;
	size_t cocci_id/* drivers/hwmon/nct6683.c 999 */;
	u8 cocci_id/* drivers/hwmon/nct6683.c 977 */;
	int cocci_id/* drivers/hwmon/nct6683.c 976 */;
	struct nct6683_data *cocci_id/* drivers/hwmon/nct6683.c 975 */;
	struct device_attribute *cocci_id/* drivers/hwmon/nct6683.c 973 */;
	struct device *cocci_id/* drivers/hwmon/nct6683.c 973 */;
	char *cocci_id/* drivers/hwmon/nct6683.c 973 */;
	ssize_t cocci_id/* drivers/hwmon/nct6683.c 972 */;
	const struct sensor_template_group cocci_id/* drivers/hwmon/nct6683.c 776 */;
	struct sensor_device_template *cocci_id/* drivers/hwmon/nct6683.c 769 */[];
	struct device cocci_id/* drivers/hwmon/nct6683.c 742 */;
	struct attribute *cocci_id/* drivers/hwmon/nct6683.c 740 */;
	umode_t cocci_id/* drivers/hwmon/nct6683.c 739 */;
	struct kobject *cocci_id/* drivers/hwmon/nct6683.c 739 */;
	u32 cocci_id/* drivers/hwmon/nct6683.c 485 */;
	u16 cocci_id/* drivers/hwmon/nct6683.c 475 */;
	long cocci_id/* drivers/hwmon/nct6683.c 475 */;
	const char *const cocci_id/* drivers/hwmon/nct6683.c 45 */[];
	struct attribute **cocci_id/* drivers/hwmon/nct6683.c 403 */;
	struct sensor_device_attr_u *cocci_id/* drivers/hwmon/nct6683.c 401 */;
	struct sensor_device_template **cocci_id/* drivers/hwmon/nct6683.c 400 */;
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/nct6683.c 399 */;
	struct sensor_device_attribute_2 *cocci_id/* drivers/hwmon/nct6683.c 398 */;
	const struct sensor_template_group *cocci_id/* drivers/hwmon/nct6683.c 395 */;
	struct attribute_group *cocci_id/* drivers/hwmon/nct6683.c 393 */;
	struct sensor_template_group {
		struct sensor_device_template **templates;
		umode_t (*is_visible)(struct kobject *, struct attribute *,
				      int);
		int base;
	} cocci_id/* drivers/hwmon/nct6683.c 387 */;
	bool cocci_id/* drivers/hwmon/nct6683.c 37 */;
	struct sensor_device_attr_u {
		union {
			struct sensor_device_attribute a1;
			struct sensor_device_attribute_2 a2;
		} u;
		char name[32];
	} cocci_id/* drivers/hwmon/nct6683.c 350 */;
	enum kinds{nct6683,} cocci_id/* drivers/hwmon/nct6683.c 35 */;
	struct sensor_device_template {
		struct device_attribute dev_attr;
		union {
			struct {
				u8 nr;
				u8 index;
			} s;
			int index;
		} u;
		bool s2;
	} cocci_id/* drivers/hwmon/nct6683.c 338 */;
	struct nct6683_sio_data {
		int sioreg;
		enum kinds kind;
	} cocci_id/* drivers/hwmon/nct6683.c 333 */;
	struct nct6683_data {
		int addr;
		int sioreg;
		enum kinds kind;
		u16 customer_id;
		struct device *hwmon_dev;
		const struct attribute_group *groups[6];
		int temp_num;
		u8 temp_index[NCT6683_NUM_REG_MON];
		u8 temp_src[NCT6683_NUM_REG_MON];
		u8 in_num;
		u8 in_index[NCT6683_NUM_REG_MON];
		u8 in_src[NCT6683_NUM_REG_MON];
		struct mutex update_lock;
		bool valid;
		unsigned long last_updated;
		u8 in[3][NCT6683_NUM_REG_MON];
		s16 temp_in[NCT6683_NUM_REG_MON];
		s8 temp[4][NCT6683_NUM_REG_MON];
		unsigned int rpm[NCT6683_NUM_REG_FAN];
		u16 fan_min[NCT6683_NUM_REG_FAN];
		u8 fanin_cfg[NCT6683_NUM_REG_FAN];
		u8 fanout_cfg[NCT6683_NUM_REG_FAN];
		u16 have_fan;
		u8 have_pwm;
		u8 pwm[NCT6683_NUM_REG_PWM];
#ifdef CONFIG_PM
		u8 hwm_cfg;
#endif
	} cocci_id/* drivers/hwmon/nct6683.c 287 */;
	void __exit cocci_id/* drivers/hwmon/nct6683.c 1477 */;
	struct resource cocci_id/* drivers/hwmon/nct6683.c 1402 */;
	int cocci_id/* drivers/hwmon/nct6683.c 1401 */[2];
	struct nct6683_sio_data cocci_id/* drivers/hwmon/nct6683.c 1400 */;
	struct platform_device *cocci_id/* drivers/hwmon/nct6683.c 1396 */[2];
	struct nct6683_sio_data *cocci_id/* drivers/hwmon/nct6683.c 1338 */;
	int __init cocci_id/* drivers/hwmon/nct6683.c 1338 */;
	struct platform_driver cocci_id/* drivers/hwmon/nct6683.c 1330 */;
	const struct dev_pm_ops cocci_id/* drivers/hwmon/nct6683.c 1318 */;
	struct nct6683_data cocci_id/* drivers/hwmon/nct6683.c 1203 */;
	char cocci_id/* drivers/hwmon/nct6683.c 1197 */[16];
	struct resource *cocci_id/* drivers/hwmon/nct6683.c 1195 */;
	struct platform_device *cocci_id/* drivers/hwmon/nct6683.c 1188 */;
	void cocci_id/* drivers/hwmon/nct6683.c 1111 */;
	const struct attribute_group cocci_id/* drivers/hwmon/nct6683.c 1106 */;
	struct attribute *cocci_id/* drivers/hwmon/nct6683.c 1100 */[];
	unsigned long cocci_id/* drivers/hwmon/nct6683.c 1002 */;
}
