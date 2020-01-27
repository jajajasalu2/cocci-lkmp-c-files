cocci_test_suite() {
	struct device_attribute *cocci_id/* drivers/hwmon/g762.c 980 */;
	char *cocci_id/* drivers/hwmon/g762.c 980 */;
	ssize_t cocci_id/* drivers/hwmon/g762.c 979 */;
	const char *cocci_id/* drivers/hwmon/g762.c 794 */;
	size_t cocci_id/* drivers/hwmon/g762.c 794 */;
	unsigned int cocci_id/* drivers/hwmon/g762.c 727 */;
	struct g762_platform_data *cocci_id/* drivers/hwmon/g762.c 694 */;
	int (*cocci_id/* drivers/hwmon/g762.c 637 */)(struct device *dev,
						      unsigned long val);
	struct clk *cocci_id/* drivers/hwmon/g762.c 595 */;
	void *cocci_id/* drivers/hwmon/g762.c 583 */;
	void cocci_id/* drivers/hwmon/g762.c 583 */;
	const struct of_device_id cocci_id/* drivers/hwmon/g762.c 569 */[];
	enum g762_regs{G762_REG_SET_CNT=0x00, G762_REG_ACT_CNT=0x01, G762_REG_FAN_STA=0x02, G762_REG_SET_OUT=0x03, G762_REG_FAN_CMD1=0x04, G762_REG_FAN_CMD2=0x05,} cocci_id/* drivers/hwmon/g762.c 54 */;
	struct i2c_client *cocci_id/* drivers/hwmon/g762.c 484 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/g762.c 47 */[];
	struct g762_data *cocci_id/* drivers/hwmon/g762.c 258 */;
	struct device *cocci_id/* drivers/hwmon/g762.c 256 */;
	int cocci_id/* drivers/hwmon/g762.c 256 */;
	u8 cocci_id/* drivers/hwmon/g762.c 183 */;
	u32 cocci_id/* drivers/hwmon/g762.c 182 */;
	u16 cocci_id/* drivers/hwmon/g762.c 182 */;
	unsigned long cocci_id/* drivers/hwmon/g762.c 182 */;
	unsigned char cocci_id/* drivers/hwmon/g762.c 182 */;
	struct g762_data {
		struct i2c_client *client;
		struct clk *clk;
		struct mutex update_lock;
		u32 clk_freq;
		bool valid;
		unsigned long last_updated;
		u8 set_cnt;
		u8 act_cnt;
		u8 fan_sta;
		u8 set_out;
		u8 fan_cmd1;
		u8 fan_cmd2;
	} cocci_id/* drivers/hwmon/g762.c 117 */;
	struct i2c_driver cocci_id/* drivers/hwmon/g762.c 1077 */;
	struct g762_data cocci_id/* drivers/hwmon/g762.c 1047 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/g762.c 1036 */;
	struct attribute *cocci_id/* drivers/hwmon/g762.c 1001 */[];
}
