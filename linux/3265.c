cocci_test_suite() {
	int __maybe_unused cocci_id/* drivers/hwmon/ina3221.c 957 */;
	enum ina3221_channels{INA3221_CHANNEL1, INA3221_CHANNEL2, INA3221_CHANNEL3, INA3221_NUM_CHANNELS,} cocci_id/* drivers/hwmon/ina3221.c 90 */;
	struct device *cocci_id/* drivers/hwmon/ina3221.c 828 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/ina3221.c 826 */;
	struct i2c_client *cocci_id/* drivers/hwmon/ina3221.c 825 */;
	const struct device_node *cocci_id/* drivers/hwmon/ina3221.c 804 */;
	const struct reg_field cocci_id/* drivers/hwmon/ina3221.c 77 */[];
	struct ina3221_input *cocci_id/* drivers/hwmon/ina3221.c 765 */;
	struct device_node *cocci_id/* drivers/hwmon/ina3221.c 762 */;
	const struct regmap_config cocci_id/* drivers/hwmon/ina3221.c 753 */;
	const struct regmap_access_table cocci_id/* drivers/hwmon/ina3221.c 748 */;
	const struct regmap_range cocci_id/* drivers/hwmon/ina3221.c 742 */[];
	struct attribute *cocci_id/* drivers/hwmon/ina3221.c 734 */[];
	const char *cocci_id/* drivers/hwmon/ina3221.c 706 */;
	size_t cocci_id/* drivers/hwmon/ina3221.c 706 */;
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/ina3221.c 696 */;
	struct device_attribute *cocci_id/* drivers/hwmon/ina3221.c 694 */;
	char *cocci_id/* drivers/hwmon/ina3221.c 694 */;
	ssize_t cocci_id/* drivers/hwmon/ina3221.c 693 */;
	const struct hwmon_chip_info cocci_id/* drivers/hwmon/ina3221.c 687 */;
	const struct hwmon_ops cocci_id/* drivers/hwmon/ina3221.c 680 */;
	const struct hwmon_channel_info *cocci_id/* drivers/hwmon/ina3221.c 653 */[];
	const struct ina3221_input *cocci_id/* drivers/hwmon/ina3221.c 601 */;
	const struct ina3221_data *cocci_id/* drivers/hwmon/ina3221.c 600 */;
	enum ina3221_fields{F_RST, F_CVRF, F_WF3, F_WF2, F_WF1, F_SF, F_CF3, F_CF2, F_CF1, F_MAX_FIELDS,} cocci_id/* drivers/hwmon/ina3221.c 60 */;
	enum hwmon_sensor_types cocci_id/* drivers/hwmon/ina3221.c 597 */;
	umode_t cocci_id/* drivers/hwmon/ina3221.c 596 */;
	const void *cocci_id/* drivers/hwmon/ina3221.c 596 */;
	const char **cocci_id/* drivers/hwmon/ina3221.c 583 */;
	long cocci_id/* drivers/hwmon/ina3221.c 554 */;
	long *cocci_id/* drivers/hwmon/ina3221.c 525 */;
	u8 cocci_id/* drivers/hwmon/ina3221.c 332 */;
	const u8 cocci_id/* drivers/hwmon/ina3221.c 317 */[][INA3221_NUM_CHANNELS + 1];
	const bool cocci_id/* drivers/hwmon/ina3221.c 273 */;
	const u8 cocci_id/* drivers/hwmon/ina3221.c 241 */[];
	int *cocci_id/* drivers/hwmon/ina3221.c 220 */;
	unsigned int cocci_id/* drivers/hwmon/ina3221.c 219 */;
	u32 cocci_id/* drivers/hwmon/ina3221.c 183 */;
	u16 cocci_id/* drivers/hwmon/ina3221.c 183 */;
	int cocci_id/* drivers/hwmon/ina3221.c 183 */;
	const int cocci_id/* drivers/hwmon/ina3221.c 178 */[];
	const u16 cocci_id/* drivers/hwmon/ina3221.c 173 */[];
	bool cocci_id/* drivers/hwmon/ina3221.c 132 */;
	struct ina3221_data *cocci_id/* drivers/hwmon/ina3221.c 132 */;
	struct ina3221_data {
		struct device *pm_dev;
		struct regmap *regmap;
		struct regmap_field *fields[F_MAX_FIELDS];
		struct ina3221_input inputs[INA3221_NUM_CHANNELS];
		struct mutex lock;
		u32 reg_config;
		int summation_shunt_resistor;
		bool single_shot;
	} cocci_id/* drivers/hwmon/ina3221.c 120 */;
	struct ina3221_input {
		const char *label;
		int shunt_resistor;
		bool disconnected;
	} cocci_id/* drivers/hwmon/ina3221.c 103 */;
	struct i2c_driver cocci_id/* drivers/hwmon/ina3221.c 1018 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/ina3221.c 1012 */[];
	const struct of_device_id cocci_id/* drivers/hwmon/ina3221.c 1006 */[];
}
