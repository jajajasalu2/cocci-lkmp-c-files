cocci_test_suite() {
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/adt7470.c 970 */;
	unsigned char cocci_id/* drivers/hwmon/adt7470.c 706 */;
	const int cocci_id/* drivers/hwmon/adt7470.c 698 */[];
	long cocci_id/* drivers/hwmon/adt7470.c 535 */;
	const char *cocci_id/* drivers/hwmon/adt7470.c 532 */;
	size_t cocci_id/* drivers/hwmon/adt7470.c 532 */;
	char *cocci_id/* drivers/hwmon/adt7470.c 523 */;
	struct device_attribute *cocci_id/* drivers/hwmon/adt7470.c 522 */;
	ssize_t cocci_id/* drivers/hwmon/adt7470.c 521 */;
	void *cocci_id/* drivers/hwmon/adt7470.c 253 */;
	const unsigned short cocci_id/* drivers/hwmon/adt7470.c 25 */[];
	u8 cocci_id/* drivers/hwmon/adt7470.c 195 */;
	unsigned long cocci_id/* drivers/hwmon/adt7470.c 193 */;
	u16 cocci_id/* drivers/hwmon/adt7470.c 176 */;
	struct adt7470_data {
		struct i2c_client *client;
		struct mutex lock;
		char sensors_valid;
		char limits_valid;
		unsigned long sensors_last_updated;
		unsigned long limits_last_updated;
		int num_temp_sensors;
		int temperatures_probed;
		s8 temp[ADT7470_TEMP_COUNT];
		s8 temp_min[ADT7470_TEMP_COUNT];
		s8 temp_max[ADT7470_TEMP_COUNT];
		u16 fan[ADT7470_FAN_COUNT];
		u16 fan_min[ADT7470_FAN_COUNT];
		u16 fan_max[ADT7470_FAN_COUNT];
		u16 alarm;
		u16 alarms_mask;
		u8 force_pwm_max;
		u8 pwm[ADT7470_PWM_COUNT];
		u8 pwm_max[ADT7470_PWM_COUNT];
		u8 pwm_automatic[ADT7470_PWM_COUNT];
		u8 pwm_min[ADT7470_PWM_COUNT];
		s8 pwm_tmin[ADT7470_PWM_COUNT];
		u8 pwm_auto_temp[ADT7470_PWM_COUNT];
		struct task_struct *auto_update;
		unsigned int auto_update_interval;
	} cocci_id/* drivers/hwmon/adt7470.c 139 */;
	struct i2c_driver cocci_id/* drivers/hwmon/adt7470.c 1274 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/adt7470.c 1268 */[];
	struct adt7470_data cocci_id/* drivers/hwmon/adt7470.c 1227 */;
	struct adt7470_data *cocci_id/* drivers/hwmon/adt7470.c 1224 */;
	struct device *cocci_id/* drivers/hwmon/adt7470.c 1223 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/adt7470.c 1221 */;
	void cocci_id/* drivers/hwmon/adt7470.c 1208 */;
	struct i2c_adapter *cocci_id/* drivers/hwmon/adt7470.c 1185 */;
	struct i2c_board_info *cocci_id/* drivers/hwmon/adt7470.c 1183 */;
	struct i2c_client *cocci_id/* drivers/hwmon/adt7470.c 1182 */;
	int cocci_id/* drivers/hwmon/adt7470.c 1182 */;
	struct attribute *cocci_id/* drivers/hwmon/adt7470.c 1086 */[];
}