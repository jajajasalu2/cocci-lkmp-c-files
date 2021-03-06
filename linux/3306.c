cocci_test_suite() {
	struct platform_device *cocci_id/* drivers/hwmon/it87.c 72 */[2];
	unsigned short cocci_id/* drivers/hwmon/it87.c 68 */;
	const unsigned int cocci_id/* drivers/hwmon/it87.c 654 */[8];
	enum chips{it87, it8712, it8716, it8718, it8720, it8721, it8728, it8732, it8771, it8772, it8781, it8782, it8783, it8786, it8790, it8792, it8603, it8620, it8622, it8628,} cocci_id/* drivers/hwmon/it87.c 64 */;
	int cocci_id/* drivers/hwmon/it87.c 633 */;
	u16 cocci_id/* drivers/hwmon/it87.c 600 */;
	long cocci_id/* drivers/hwmon/it87.c 600 */;
	u8 cocci_id/* drivers/hwmon/it87.c 592 */;
	const struct it87_data *cocci_id/* drivers/hwmon/it87.c 566 */;
	struct it87_data {
		const struct attribute_group *groups[7];
		int sioaddr;
		enum chips type;
		u32 features;
		u8 peci_mask;
		u8 old_peci_mask;
		unsigned short addr;
		const char *name;
		struct mutex update_lock;
		char valid;
		unsigned long last_updated;
		u16 in_scaled;
		u16 in_internal;
		u16 has_in;
		u8 in[NUM_VIN][3];
		bool need_in7_reroute;
		u8 has_fan;
		u16 fan[NUM_FAN][2];
		u8 has_temp;
		s8 temp[NUM_TEMP][4];
		u8 sensor;
		u8 extra;
		u8 fan_div[NUM_FAN_DIV];
		bool has_vid;
		u8 vid;
		u8 vrm;
		u32 alarms;
		bool has_beep;
		u8 beeps;
		u8 fan_main_ctrl;
		u8 fan_ctl;
		u8 has_pwm;
		u8 pwm_ctrl[NUM_PWM];
		u8 pwm_duty[NUM_PWM];
		u8 pwm_temp_map[NUM_PWM];
		u8 auto_pwm[NUM_AUTO_PWM][4];
		s8 auto_temp[NUM_AUTO_PWM][5];
	} cocci_id/* drivers/hwmon/it87.c 511 */;
	struct it87_sio_data {
		int sioaddr;
		enum chips type;
		u8 revision;
		u8 vid_value;
		u8 beep_pin;
		u8 internal;
		bool need_in7_reroute;
		u16 skip_in;
		u8 skip_vid;
		u8 skip_fan;
		u8 skip_pwm;
		u8 skip_temp;
	} cocci_id/* drivers/hwmon/it87.c 490 */;
	void __exit cocci_id/* drivers/hwmon/it87.c 3351 */;
	unsigned short cocci_id/* drivers/hwmon/it87.c 3302 */[2];
	int cocci_id/* drivers/hwmon/it87.c 3300 */[2];
	struct it87_sio_data cocci_id/* drivers/hwmon/it87.c 3278 */;
	struct resource cocci_id/* drivers/hwmon/it87.c 3255 */;
	const struct it87_sio_data *cocci_id/* drivers/hwmon/it87.c 3252 */;
	int __init cocci_id/* drivers/hwmon/it87.c 3251 */;
	struct platform_driver cocci_id/* drivers/hwmon/it87.c 3243 */;
	int __maybe_unused cocci_id/* drivers/hwmon/it87.c 3214 */;
	void __maybe_unused cocci_id/* drivers/hwmon/it87.c 3182 */;
	struct it87_data cocci_id/* drivers/hwmon/it87.c 3052 */;
	unsigned long cocci_id/* drivers/hwmon/it87.c 3047 */;
	struct resource *cocci_id/* drivers/hwmon/it87.c 3037 */;
	u8 cocci_id/* drivers/hwmon/it87.c 2997 */[3];
	const struct it87_devices cocci_id/* drivers/hwmon/it87.c 297 */[];
	struct platform_device *cocci_id/* drivers/hwmon/it87.c 2882 */;
	struct it87_sio_data *cocci_id/* drivers/hwmon/it87.c 2867 */;
	void cocci_id/* drivers/hwmon/it87.c 2836 */;
	struct it87_devices {
		const char *name;
		const char *const suffix;
		u32 features;
		u8 peci_mask;
		u8 old_peci_mask;
	} cocci_id/* drivers/hwmon/it87.c 269 */;
	const u8 cocci_id/* drivers/hwmon/it87.c 252 */[];
	const struct it87_devices *cocci_id/* drivers/hwmon/it87.c 2393 */;
	unsigned short *cocci_id/* drivers/hwmon/it87.c 2387 */;
	struct device cocci_id/* drivers/hwmon/it87.c 2293 */;
	struct attribute *cocci_id/* drivers/hwmon/it87.c 2291 */;
	umode_t cocci_id/* drivers/hwmon/it87.c 2290 */;
	struct kobject *cocci_id/* drivers/hwmon/it87.c 2290 */;
	const struct attribute_group cocci_id/* drivers/hwmon/it87.c 2153 */;
	struct attribute *cocci_id/* drivers/hwmon/it87.c 2141 */[];
	const char *const cocci_id/* drivers/hwmon/it87.c 1950 */[];
	size_t cocci_id/* drivers/hwmon/it87.c 1820 */;
	const char *cocci_id/* drivers/hwmon/it87.c 1819 */;
	struct it87_data *cocci_id/* drivers/hwmon/it87.c 1803 */;
	char *cocci_id/* drivers/hwmon/it87.c 1801 */;
	struct device_attribute *cocci_id/* drivers/hwmon/it87.c 1800 */;
	struct device *cocci_id/* drivers/hwmon/it87.c 1800 */;
	ssize_t cocci_id/* drivers/hwmon/it87.c 1800 */;
	bool cocci_id/* drivers/hwmon/it87.c 179 */;
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/it87.c 1560 */;
	struct sensor_device_attribute_2 *cocci_id/* drivers/hwmon/it87.c 1524 */;
	unsigned int cocci_id/* drivers/hwmon/it87.c 1162 */;
}
