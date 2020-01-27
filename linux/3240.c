cocci_test_suite() {
	const unsigned long cocci_id/* drivers/hwmon/lm93.c 911 */;
	u8 *cocci_id/* drivers/hwmon/lm93.c 881 */;
	u8 cocci_id/* drivers/hwmon/lm93.c 874 */[I2C_SMBUS_BLOCK_MAX];
	struct block1_t cocci_id/* drivers/hwmon/lm93.c 772 */;
	unsigned cocci_id/* drivers/hwmon/lm93.c 772 */;
	int cocci_id/* drivers/hwmon/lm93.c 700 */[10];
	int cocci_id/* drivers/hwmon/lm93.c 622 */[8];
	const u16 cocci_id/* drivers/hwmon/lm93.c 595 */;
	u16 cocci_id/* drivers/hwmon/lm93.c 593 */;
	enum pwm_freq cocci_id/* drivers/hwmon/lm93.c 576 */;
	int cocci_id/* drivers/hwmon/lm93.c 553 */[2][16];
	enum pwm_freq{LM93_PWM_MAP_HI_FREQ, LM93_PWM_MAP_LO_FREQ,} cocci_id/* drivers/hwmon/lm93.c 551 */;
	long cocci_id/* drivers/hwmon/lm93.c 522 */;
	u8 cocci_id/* drivers/hwmon/lm93.c 500 */;
	struct lm93_data *cocci_id/* drivers/hwmon/lm93.c 497 */;
	int cocci_id/* drivers/hwmon/lm93.c 497 */;
	s8 cocci_id/* drivers/hwmon/lm93.c 415 */;
	const long cocci_id/* drivers/hwmon/lm93.c 344 */;
	const unsigned long cocci_id/* drivers/hwmon/lm93.c 330 */[16];
	const u8 cocci_id/* drivers/hwmon/lm93.c 312 */[16];
	const struct i2c_device_id cocci_id/* drivers/hwmon/lm93.c 2627 */[];
	struct lm93_data cocci_id/* drivers/hwmon/lm93.c 2609 */;
	void (*cocci_id/* drivers/hwmon/lm93.c 2593 */)(struct lm93_data *,
							struct i2c_client *);
	const struct i2c_device_id *cocci_id/* drivers/hwmon/lm93.c 2587 */;
	struct i2c_adapter *cocci_id/* drivers/hwmon/lm93.c 2546 */;
	struct i2c_board_info *cocci_id/* drivers/hwmon/lm93.c 2544 */;
	struct attribute *cocci_id/* drivers/hwmon/lm93.c 2340 */[];
	char *cocci_id/* drivers/hwmon/lm93.c 2332 */;
	struct device_attribute *cocci_id/* drivers/hwmon/lm93.c 2331 */;
	struct device *cocci_id/* drivers/hwmon/lm93.c 2331 */;
	ssize_t cocci_id/* drivers/hwmon/lm93.c 2331 */;
	const u8 cocci_id/* drivers/hwmon/lm93.c 2164 */[];
	struct lm93_data {
		struct i2c_client *client;
		struct mutex update_lock;
		unsigned long last_updated;
		void (*update)(struct lm93_data *, struct i2c_client *);
		char valid;
		struct block1_t block1;
		u8 block2[6];
		u8 block3[16];
		struct {
			u8 cur;
			u8 avg;
		} block4[2];
		u16 block5[4];
		struct {
			u8 min;
			u8 max;
		} temp_lim[4];
		struct {
			u8 min;
			u8 max;
		} block7[16];
		u16 block8[4];
		u8 block9[2][4];
		struct {
			u8 base[4];
			u8 offset[12];
		} block10;
		u8 config;
		u8 vid[2];
		u8 prochot_max[2];
		u8 vccp_limits[2];
		u8 gpi;
		u8 prochot_override;
		u8 prochot_interval;
		u8 boost[4];
		u8 boost_hyst[2];
		u8 auto_pwm_min_hyst[2];
		u8 pwm_ramp_ctl;
		u8 sfc1;
		u8 sfc2;
		u8 sf_tach_to_pwm;
		u8 pwm_override[2];
	} cocci_id/* drivers/hwmon/lm93.c 196 */;
	void cocci_id/* drivers/hwmon/lm93.c 1869 */;
	struct block1_t {
		u8 host_status_1;
		u8 host_status_2;
		u8 host_status_3;
		u8 host_status_4;
		u8 p1_prochot_status;
		u8 p2_prochot_status;
		u8 gpi_status;
		u8 fan_status;
	} cocci_id/* drivers/hwmon/lm93.c 182 */;
	unsigned long cocci_id/* drivers/hwmon/lm93.c 1640 */;
	struct i2c_client *cocci_id/* drivers/hwmon/lm93.c 1639 */;
	size_t cocci_id/* drivers/hwmon/lm93.c 1635 */;
	const char *cocci_id/* drivers/hwmon/lm93.c 1634 */;
	const struct {
		u8 cmd;
		u8 len;
	} cocci_id/* drivers/hwmon/lm93.c 163 */[12];
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/lm93.c 1612 */;
	struct i2c_driver cocci_id/* drivers/hwmon/lm93.c 160 */;
	int cocci_id/* drivers/hwmon/lm93.c 151 */[2];
	struct sensor_device_attribute_2 *cocci_id/* drivers/hwmon/lm93.c 1445 */;
	bool cocci_id/* drivers/hwmon/lm93.c 142 */;
	const unsigned short cocci_id/* drivers/hwmon/lm93.c 138 */[];
}
