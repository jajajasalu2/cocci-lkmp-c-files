cocci_test_suite() {
	struct ltr501_gain {
		int scale;
		int uscale;
	} cocci_id/* drivers/iio/light/ltr501.c 99 */;
	enum iio_event_info cocci_id/* drivers/iio/light/ltr501.c 978 */;
	enum iio_event_direction cocci_id/* drivers/iio/light/ltr501.c 977 */;
	enum iio_event_type cocci_id/* drivers/iio/light/ltr501.c 976 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/light/ltr501.c 975 */;
	enum{ltr501=0, ltr559, ltr301,} cocci_id/* drivers/iio/light/ltr501.c 93 */;
	struct ltr501_samp_table {
		int freq_val;
		int time_val;
	} cocci_id/* drivers/iio/light/ltr501.c 86 */;
	const struct reg_field cocci_id/* drivers/iio/light/ltr501.c 73 */;
	struct ltr501_gain *cocci_id/* drivers/iio/light/ltr501.c 719 */;
	const int cocci_id/* drivers/iio/light/ltr501.c 69 */[];
	long cocci_id/* drivers/iio/light/ltr501.c 623 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/light/ltr501.c 608 */[];
	const struct iio_event_spec cocci_id/* drivers/iio/light/ltr501.c 520 */[];
	enum iio_chan_type cocci_id/* drivers/iio/light/ltr501.c 423 */;
	__le16 cocci_id/* drivers/iio/light/ltr501.c 403 */;
	__le16 cocci_id/* drivers/iio/light/ltr501.c 394 */[2];
	u8 cocci_id/* drivers/iio/light/ltr501.c 324 */;
	u16 cocci_id/* drivers/iio/light/ltr501.c 302 */;
	unsigned long cocci_id/* drivers/iio/light/ltr501.c 302 */;
	int *cocci_id/* drivers/iio/light/ltr501.c 196 */;
	struct ltr501_data *cocci_id/* drivers/iio/light/ltr501.c 195 */;
	int cocci_id/* drivers/iio/light/ltr501.c 195 */;
	const struct ltr501_samp_table *cocci_id/* drivers/iio/light/ltr501.c 180 */;
	const struct ltr501_samp_table cocci_id/* drivers/iio/light/ltr501.c 165 */[];
	struct i2c_driver cocci_id/* drivers/iio/light/ltr501.c 1574 */;
	const struct i2c_device_id cocci_id/* drivers/iio/light/ltr501.c 1566 */[];
	const struct acpi_device_id cocci_id/* drivers/iio/light/ltr501.c 1558 */[];
	struct ltr501_data {
		struct i2c_client *client;
		struct mutex lock_als,lock_ps;
		struct ltr501_chip_info *chip_info;
		u8 als_contr,ps_contr;
		int als_period,ps_period;
		struct regmap *regmap;
		struct regmap_field *reg_it;
		struct regmap_field *reg_als_intr;
		struct regmap_field *reg_ps_intr;
		struct regmap_field *reg_als_rate;
		struct regmap_field *reg_ps_rate;
		struct regmap_field *reg_als_prst;
		struct regmap_field *reg_ps_prst;
	} cocci_id/* drivers/iio/light/ltr501.c 149 */;
	struct regmap *cocci_id/* drivers/iio/light/ltr501.c 1394 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/light/ltr501.c 1390 */;
	struct i2c_client *cocci_id/* drivers/iio/light/ltr501.c 1389 */;
	const struct acpi_device_id *cocci_id/* drivers/iio/light/ltr501.c 1380 */;
	const char *cocci_id/* drivers/iio/light/ltr501.c 1378 */;
	struct regmap_config cocci_id/* drivers/iio/light/ltr501.c 1362 */;
	bool cocci_id/* drivers/iio/light/ltr501.c 1349 */;
	struct device *cocci_id/* drivers/iio/light/ltr501.c 1349 */;
	unsigned int cocci_id/* drivers/iio/light/ltr501.c 1349 */;
	struct ltr501_chip_info {
		u8 partid;
		struct ltr501_gain *als_gain;
		int als_gain_tbl_size;
		struct ltr501_gain *ps_gain;
		int ps_gain_tbl_size;
		u8 als_mode_active;
		u8 als_gain_mask;
		u8 als_gain_shift;
		const struct iio_chan_spec *channels;
		const int no_channels;
		const struct iio_info *info;
		const struct iio_info *info_no_irq;
	} cocci_id/* drivers/iio/light/ltr501.c 134 */;
	struct iio_dev *cocci_id/* drivers/iio/light/ltr501.c 1294 */;
	irqreturn_t cocci_id/* drivers/iio/light/ltr501.c 1292 */;
	void *cocci_id/* drivers/iio/light/ltr501.c 1292 */;
	u8 *cocci_id/* drivers/iio/light/ltr501.c 1266 */;
	u16 cocci_id/* drivers/iio/light/ltr501.c 1245 */[8];
	struct iio_poll_func *cocci_id/* drivers/iio/light/ltr501.c 1242 */;
	struct ltr501_chip_info cocci_id/* drivers/iio/light/ltr501.c 1186 */[];
	const struct iio_info cocci_id/* drivers/iio/light/ltr501.c 1176 */;
	const struct attribute_group cocci_id/* drivers/iio/light/ltr501.c 1150 */;
	struct attribute *cocci_id/* drivers/iio/light/ltr501.c 1139 */[];
	struct ltr501_chip_info *cocci_id/* drivers/iio/light/ltr501.c 1106 */;
	char *cocci_id/* drivers/iio/light/ltr501.c 1103 */;
	struct device_attribute *cocci_id/* drivers/iio/light/ltr501.c 1102 */;
	ssize_t cocci_id/* drivers/iio/light/ltr501.c 1101 */;
	struct ltr501_gain cocci_id/* drivers/iio/light/ltr501.c 104 */[];
}
