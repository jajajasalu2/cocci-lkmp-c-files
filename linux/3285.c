cocci_test_suite() {
	const struct i2c_device_id cocci_id/* drivers/hwmon/nct7904.c 997 */[];
	struct nct7904_data {
		struct i2c_client *client;
		struct mutex bank_lock;
		int bank_sel;
		u32 fanin_mask;
		u32 vsen_mask;
		u32 tcpu_mask;
		u8 fan_mode[FANCTL_MAX];
		u8 enable_dts;
		u8 has_dts;
		u8 temp_mode;
		u8 fan_alarm[2];
		u8 vsen_alarm[3];
	} cocci_id/* drivers/hwmon/nct7904.c 95 */;
	const unsigned short cocci_id/* drivers/hwmon/nct7904.c 91 */[];
	struct nct7904_data cocci_id/* drivers/hwmon/nct7904.c 881 */;
	u8 cocci_id/* drivers/hwmon/nct7904.c 879 */;
	struct device *cocci_id/* drivers/hwmon/nct7904.c 875 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/nct7904.c 872 */;
	const struct hwmon_chip_info cocci_id/* drivers/hwmon/nct7904.c 866 */;
	const struct hwmon_ops cocci_id/* drivers/hwmon/nct7904.c 860 */;
	const struct hwmon_channel_info *cocci_id/* drivers/hwmon/nct7904.c 770 */[];
	struct i2c_adapter *cocci_id/* drivers/hwmon/nct7904.c 751 */;
	struct i2c_board_info *cocci_id/* drivers/hwmon/nct7904.c 749 */;
	struct i2c_client *cocci_id/* drivers/hwmon/nct7904.c 748 */;
	enum hwmon_sensor_types cocci_id/* drivers/hwmon/nct7904.c 730 */;
	long cocci_id/* drivers/hwmon/nct7904.c 713 */;
	long *cocci_id/* drivers/hwmon/nct7904.c 696 */;
	u8 cocci_id/* drivers/hwmon/nct7904.c 259 */[];
	const struct nct7904_data *cocci_id/* drivers/hwmon/nct7904.c 240 */;
	umode_t cocci_id/* drivers/hwmon/nct7904.c 238 */;
	u32 cocci_id/* drivers/hwmon/nct7904.c 238 */;
	const void *cocci_id/* drivers/hwmon/nct7904.c 238 */;
	void cocci_id/* drivers/hwmon/nct7904.c 126 */;
	struct nct7904_data *cocci_id/* drivers/hwmon/nct7904.c 111 */;
	unsigned int cocci_id/* drivers/hwmon/nct7904.c 111 */;
	int cocci_id/* drivers/hwmon/nct7904.c 111 */;
	struct i2c_driver cocci_id/* drivers/hwmon/nct7904.c 1003 */;
}
