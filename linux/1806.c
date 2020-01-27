cocci_test_suite() {
	enum rpr0521_channel{RPR0521_CHAN_PXS, RPR0521_CHAN_ALS_DATA0, RPR0521_CHAN_ALS_DATA1,} cocci_id/* drivers/iio/light/rpr0521.c 97 */;
	struct regmap *cocci_id/* drivers/iio/light/rpr0521.c 931 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/light/rpr0521.c 927 */;
	struct i2c_client *cocci_id/* drivers/iio/light/rpr0521.c 926 */;
	const struct regmap_config cocci_id/* drivers/iio/light/rpr0521.c 915 */;
	const struct rpr0521_gain cocci_id/* drivers/iio/light/rpr0521.c 91 */[3];
	struct device *cocci_id/* drivers/iio/light/rpr0521.c 903 */;
	unsigned int cocci_id/* drivers/iio/light/rpr0521.c 903 */;
	const struct rpr0521_gain cocci_id/* drivers/iio/light/rpr0521.c 84 */[4];
	const struct iio_info cocci_id/* drivers/iio/light/rpr0521.c 828 */;
	struct rpr0521_gain {
		int scale;
		int uscale;
	} cocci_id/* drivers/iio/light/rpr0521.c 79 */;
	long cocci_id/* drivers/iio/light/rpr0521.c 717 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/light/rpr0521.c 716 */;
	__le16 cocci_id/* drivers/iio/light/rpr0521.c 684 */;
	enum iio_chan_type cocci_id/* drivers/iio/light/rpr0521.c 616 */;
	int *cocci_id/* drivers/iio/light/rpr0521.c 579 */;
	const struct iio_buffer_setup_ops cocci_id/* drivers/iio/light/rpr0521.c 571 */;
	struct iio_dev *cocci_id/* drivers/iio/light/rpr0521.c 556 */;
	const struct iio_trigger_ops cocci_id/* drivers/iio/light/rpr0521.c 536 */;
	struct iio_trigger *cocci_id/* drivers/iio/light/rpr0521.c 519 */;
	u8 cocci_id/* drivers/iio/light/rpr0521.c 452 */[16];
	struct iio_poll_func *cocci_id/* drivers/iio/light/rpr0521.c 447 */;
	irqreturn_t cocci_id/* drivers/iio/light/rpr0521.c 405 */;
	void *cocci_id/* drivers/iio/light/rpr0521.c 405 */;
	bool cocci_id/* drivers/iio/light/rpr0521.c 388 */;
	u8 cocci_id/* drivers/iio/light/rpr0521.c 282 */;
	struct rpr0521_data *cocci_id/* drivers/iio/light/rpr0521.c 282 */;
	int cocci_id/* drivers/iio/light/rpr0521.c 282 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/light/rpr0521.c 232 */[];
	const unsigned long cocci_id/* drivers/iio/light/rpr0521.c 226 */[];
	enum rpr0521_scan_index_order{RPR0521_CHAN_INDEX_PXS, RPR0521_CHAN_INDEX_BOTH, RPR0521_CHAN_INDEX_IR,} cocci_id/* drivers/iio/light/rpr0521.c 220 */;
	const struct attribute_group cocci_id/* drivers/iio/light/rpr0521.c 215 */;
	struct attribute *cocci_id/* drivers/iio/light/rpr0521.c 208 */[];
	struct rpr0521_data {
		struct i2c_client *client;
		struct mutex lock;
		bool als_dev_en;
		bool pxs_dev_en;
		struct iio_trigger *drdy_trigger0;
		s64 irq_timestamp;
		bool als_ps_need_en;
		bool pxs_ps_need_en;
		bool als_need_dis;
		bool pxs_need_dis;
		struct regmap *regmap;
	} cocci_id/* drivers/iio/light/rpr0521.c 177 */;
	const struct rpr0521_samp_freq cocci_id/* drivers/iio/light/rpr0521.c 160 */[13];
	struct rpr0521_samp_freq {
		int als_hz;
		int als_uhz;
		int pxs_hz;
		int pxs_uhz;
	} cocci_id/* drivers/iio/light/rpr0521.c 153 */;
	const struct rpr0521_gain_info {
		u8 reg;
		u8 mask;
		u8 shift;
		const struct rpr0521_gain *gain;
		int size;
	} cocci_id/* drivers/iio/light/rpr0521.c 123 */[];
	struct i2c_driver cocci_id/* drivers/iio/light/rpr0521.c 1124 */;
	const struct i2c_device_id cocci_id/* drivers/iio/light/rpr0521.c 1117 */[];
	const struct acpi_device_id cocci_id/* drivers/iio/light/rpr0521.c 1111 */[];
	const struct dev_pm_ops cocci_id/* drivers/iio/light/rpr0521.c 1106 */;
	const struct rpr0521_reg_desc cocci_id/* drivers/iio/light/rpr0521.c 108 */[];
	struct rpr0521_reg_desc {
		u8 address;
		u8 device_mask;
	} cocci_id/* drivers/iio/light/rpr0521.c 103 */;
}
