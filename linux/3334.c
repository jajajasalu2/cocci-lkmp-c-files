cocci_test_suite() {
	u16 cocci_id/* drivers/hwmon/g760a.c 73 */;
	enum g760a_regs cocci_id/* drivers/hwmon/g760a.c 67 */;
	u8 cocci_id/* drivers/hwmon/g760a.c 61 */;
	u32 cocci_id/* drivers/hwmon/g760a.c 61 */;
	struct g760a_data {
		struct i2c_client *client;
		struct mutex update_lock;
		u32 clk;
		u16 fan_div;
		unsigned int valid:1;
		unsigned long last_updated;
		u8 set_cnt;
		u8 act_cnt;
		u8 fan_sta;
	} cocci_id/* drivers/hwmon/g760a.c 35 */;
	enum g760a_regs{G760A_REG_SET_CNT=0x00, G760A_REG_ACT_CNT=0x01, G760A_REG_FAN_STA=0x02,} cocci_id/* drivers/hwmon/g760a.c 23 */;
	struct i2c_driver cocci_id/* drivers/hwmon/g760a.c 206 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/g760a.c 200 */[];
	struct g760a_data cocci_id/* drivers/hwmon/g760a.c 183 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/g760a.c 174 */;
	struct i2c_client *cocci_id/* drivers/hwmon/g760a.c 173 */;
	struct attribute *cocci_id/* drivers/hwmon/g760a.c 160 */[];
	unsigned long cocci_id/* drivers/hwmon/g760a.c 143 */;
	const char *cocci_id/* drivers/hwmon/g760a.c 139 */;
	size_t cocci_id/* drivers/hwmon/g760a.c 139 */;
	int cocci_id/* drivers/hwmon/g760a.c 125 */;
	struct g760a_data *cocci_id/* drivers/hwmon/g760a.c 123 */;
	struct device_attribute *cocci_id/* drivers/hwmon/g760a.c 121 */;
	char *cocci_id/* drivers/hwmon/g760a.c 121 */;
	struct device *cocci_id/* drivers/hwmon/g760a.c 120 */;
	ssize_t cocci_id/* drivers/hwmon/g760a.c 120 */;
	unsigned int cocci_id/* drivers/hwmon/g760a.c 110 */;
}
