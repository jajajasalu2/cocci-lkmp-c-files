cocci_test_suite() {
	struct sensor_device_attribute_2 cocci_id/* drivers/hwmon/f71882fg.c 978 */[3][14];
	struct sensor_device_attribute_2 cocci_id/* drivers/hwmon/f71882fg.c 802 */[4][14];
	struct sensor_device_attribute_2 cocci_id/* drivers/hwmon/f71882fg.c 724 */[3][8];
	struct sensor_device_attribute_2 cocci_id/* drivers/hwmon/f71882fg.c 651 */[3][7];
	struct sensor_device_attribute_2 cocci_id/* drivers/hwmon/f71882fg.c 628 */[];
	struct sensor_device_attribute_2 cocci_id/* drivers/hwmon/f71882fg.c 581 */[4][6];
	struct sensor_device_attribute_2 cocci_id/* drivers/hwmon/f71882fg.c 509 */[3][2];
	struct sensor_device_attribute_2 cocci_id/* drivers/hwmon/f71882fg.c 440 */[3][9];
	struct platform_driver cocci_id/* drivers/hwmon/f71882fg.c 386 */;
	int cocci_id/* drivers/hwmon/f71882fg.c 383 */(struct platform_device *pdev);
	ssize_t cocci_id/* drivers/hwmon/f71882fg.c 380 */(struct device *dev,
							   struct device_attribute *devattr,
							   char *buf);
	ssize_t cocci_id/* drivers/hwmon/f71882fg.c 315 */(struct device *dev,
							   struct device_attribute *devattr,
							   const char *buf,
							   size_t count);
	void __exit cocci_id/* drivers/hwmon/f71882fg.c 2787 */;
	void cocci_id/* drivers/hwmon/f71882fg.c 2787 */;
	struct f71882fg_sio_data cocci_id/* drivers/hwmon/f71882fg.c 2738 */;
	struct resource cocci_id/* drivers/hwmon/f71882fg.c 2715 */;
	const struct f71882fg_sio_data *cocci_id/* drivers/hwmon/f71882fg.c 2713 */;
	int __init cocci_id/* drivers/hwmon/f71882fg.c 2712 */;
	unsigned int cocci_id/* drivers/hwmon/f71882fg.c 2679 */;
	unsigned short cocci_id/* drivers/hwmon/f71882fg.c 2618 */;
	u16 cocci_id/* drivers/hwmon/f71882fg.c 2617 */;
	struct f71882fg_sio_data *cocci_id/* drivers/hwmon/f71882fg.c 2615 */;
	struct f71882fg_data {
		unsigned short addr;
		enum chips type;
		struct device *hwmon_dev;
		struct mutex update_lock;
		int temp_start;
		char valid;
		char auto_point_temp_signed;
		unsigned long last_updated;
		unsigned long last_limits;
		u8 in[F71882FG_MAX_INS];
		u8 in1_max;
		u8 in_status;
		u8 in_beep;
		u16 fan[4];
		u16 fan_target[4];
		u16 fan_full_speed[4];
		u8 fan_status;
		u8 fan_beep;
		u16 temp[4];
		u8 temp_ovt[4];
		u8 temp_high[4];
		u8 temp_hyst[2];
		u8 temp_type[4];
		u8 temp_status;
		u8 temp_beep;
		u8 temp_diode_open;
		u8 temp_config;
		u8 pwm[4];
		u8 pwm_enable;
		u8 pwm_auto_point_hyst[2];
		u8 pwm_auto_point_mapping[4];
		u8 pwm_auto_point_pwm[4][5];
		s8 pwm_auto_point_temp[4][4];
	} cocci_id/* drivers/hwmon/f71882fg.c 249 */;
	struct f71882fg_sio_data {
		enum chips type;
	} cocci_id/* drivers/hwmon/f71882fg.c 245 */;
	void cocci_id/* drivers/hwmon/f71882fg.c 243 */(int base);
	void cocci_id/* drivers/hwmon/f71882fg.c 242 */(int base, int ld);
	int cocci_id/* drivers/hwmon/f71882fg.c 241 */(int base);
	int cocci_id/* drivers/hwmon/f71882fg.c 239 */(int base, int reg);
	struct f71882fg_data cocci_id/* drivers/hwmon/f71882fg.c 2339 */;
	u8 cocci_id/* drivers/hwmon/f71882fg.c 2337 */;
	struct f71882fg_data *cocci_id/* drivers/hwmon/f71882fg.c 2234 */;
	struct platform_device *cocci_id/* drivers/hwmon/f71882fg.c 2232 */;
	int cocci_id/* drivers/hwmon/f71882fg.c 2231 */;
	struct sensor_device_attribute_2 *cocci_id/* drivers/hwmon/f71882fg.c 2210 */;
	char *cocci_id/* drivers/hwmon/f71882fg.c 2203 */;
	struct device_attribute *cocci_id/* drivers/hwmon/f71882fg.c 2202 */;
	ssize_t cocci_id/* drivers/hwmon/f71882fg.c 2202 */;
	const char cocci_id/* drivers/hwmon/f71882fg.c 164 */[];
	unsigned long cocci_id/* drivers/hwmon/f71882fg.c 1433 */;
	const char *cocci_id/* drivers/hwmon/f71882fg.c 1429 */;
	size_t cocci_id/* drivers/hwmon/f71882fg.c 1429 */;
	long cocci_id/* drivers/hwmon/f71882fg.c 1399 */;
	const char cocci_id/* drivers/hwmon/f71882fg.c 128 */[][F71882FG_MAX_INS];
	struct device *cocci_id/* drivers/hwmon/f71882fg.c 1195 */;
	const char *const cocci_id/* drivers/hwmon/f71882fg.c 110 */[];
	enum chips{f71808e, f71808a, f71858fg, f71862fg, f71868a, f71869, f71869a, f71882fg, f71889fg, f71889ed, f71889a, f8000, f81768d, f81865f, f81866a,} cocci_id/* drivers/hwmon/f71882fg.c 106 */;
}
