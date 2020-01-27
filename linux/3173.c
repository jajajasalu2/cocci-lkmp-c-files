cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/hwmon/jc42.c 577 */;
	const struct of_device_id cocci_id/* drivers/hwmon/jc42.c 570 */[];
	const struct i2c_device_id cocci_id/* drivers/hwmon/jc42.c 563 */[];
	const struct dev_pm_ops cocci_id/* drivers/hwmon/jc42.c 553 */;
	struct jc42_data cocci_id/* drivers/hwmon/jc42.c 468 */;
	struct jc42_data *cocci_id/* drivers/hwmon/jc42.c 465 */;
	struct device *cocci_id/* drivers/hwmon/jc42.c 463 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/jc42.c 461 */;
	const struct hwmon_chip_info cocci_id/* drivers/hwmon/jc42.c 456 */;
	const struct hwmon_ops cocci_id/* drivers/hwmon/jc42.c 450 */;
	const struct hwmon_channel_info *cocci_id/* drivers/hwmon/jc42.c 441 */[];
	struct jc42_chips *cocci_id/* drivers/hwmon/jc42.c 431 */;
	struct i2c_adapter *cocci_id/* drivers/hwmon/jc42.c 412 */;
	struct i2c_client *cocci_id/* drivers/hwmon/jc42.c 410 */;
	struct i2c_board_info *cocci_id/* drivers/hwmon/jc42.c 410 */;
	int cocci_id/* drivers/hwmon/jc42.c 410 */;
	unsigned int cocci_id/* drivers/hwmon/jc42.c 379 */;
	const struct jc42_data *cocci_id/* drivers/hwmon/jc42.c 378 */;
	u32 cocci_id/* drivers/hwmon/jc42.c 376 */;
	umode_t cocci_id/* drivers/hwmon/jc42.c 375 */;
	enum hwmon_sensor_types cocci_id/* drivers/hwmon/jc42.c 375 */;
	const void *cocci_id/* drivers/hwmon/jc42.c 375 */;
	long *cocci_id/* drivers/hwmon/jc42.c 268 */;
	const unsigned short cocci_id/* drivers/hwmon/jc42.c 24 */[];
	s16 cocci_id/* drivers/hwmon/jc42.c 233 */;
	u16 cocci_id/* drivers/hwmon/jc42.c 223 */;
	bool cocci_id/* drivers/hwmon/jc42.c 223 */;
	long cocci_id/* drivers/hwmon/jc42.c 223 */;
	struct jc42_data {
		struct i2c_client *client;
		struct mutex update_lock;
		bool extended;
		bool valid;
		unsigned long last_updated;
		u16 orig_config;
		u16 config;
		u16 temp[t_num_temp];
	} cocci_id/* drivers/hwmon/jc42.c 208 */;
	const u8 cocci_id/* drivers/hwmon/jc42.c 200 */[t_num_temp];
	enum temp_index{t_input=0, t_crit, t_min, t_max, t_num_temp,} cocci_id/* drivers/hwmon/jc42.c 192 */;
	struct jc42_chips cocci_id/* drivers/hwmon/jc42.c 164 */[];
	struct jc42_chips {
		u16 manid;
		u16 devid;
		u16 devid_mask;
	} cocci_id/* drivers/hwmon/jc42.c 158 */;
	u16 cocci_id/* drivers/hwmon/jc42.c 156 */[];
}
