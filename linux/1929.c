cocci_test_suite() {
	struct sgp_data {
		struct i2c_client *client;
		struct task_struct *iaq_thread;
		struct mutex data_lock;
		unsigned long iaq_init_start_jiffies;
		unsigned long iaq_defval_skip_jiffies;
		u16 product_id;
		u16 feature_set;
		unsigned long measure_interval_jiffies;
		enum sgp_cmd iaq_init_cmd;
		enum sgp_cmd measure_iaq_cmd;
		enum sgp_cmd measure_gas_signals_cmd;
		union sgp_reading buffer;
		union sgp_reading iaq_buffer;
		enum _iaq_buffer_state iaq_buffer_state;
	} cocci_id/* drivers/iio/chemical/sgp30.c 99 */;
	enum _iaq_buffer_state{IAQ_BUFFER_EMPTY=0, IAQ_BUFFER_DEFAULT_VALS, IAQ_BUFFER_VALID,} cocci_id/* drivers/iio/chemical/sgp30.c 93 */;
	union sgp_reading {
		u8 start;
		struct sgp_crc_word raw_words[4];
	} cocci_id/* drivers/iio/chemical/sgp30.c 88 */;
	struct sgp_crc_word {
		__be16 value;
		u8 crc8;
	}__attribute__((__packed__)) cocci_id/* drivers/iio/chemical/sgp30.c 83 */;
	struct sgp_version {
		u8 major;
		u8 minor;
	} cocci_id/* drivers/iio/chemical/sgp30.c 78 */;
	enum sgp_cmd{SGP_CMD_IAQ_INIT=SGP_CMD(0x2003), SGP_CMD_IAQ_MEASURE=SGP_CMD(0x2008), SGP_CMD_GET_FEATURE_SET=SGP_CMD(0x202f), SGP_CMD_GET_SERIAL_ID=SGP_CMD(0x3682), SGP30_CMD_MEASURE_SIGNAL=SGP_CMD(0x2050), SGPC3_CMD_MEASURE_RAW=SGP_CMD(0x2046),} cocci_id/* drivers/iio/chemical/sgp30.c 67 */;
	enum sgpc3_channel_idx{SGPC3_IAQ_TVOC_IDX=10, SGPC3_SIG_ETOH_IDX,} cocci_id/* drivers/iio/chemical/sgp30.c 62 */;
	struct i2c_driver cocci_id/* drivers/iio/chemical/sgp30.c 577 */;
	const struct i2c_device_id cocci_id/* drivers/iio/chemical/sgp30.c 568 */[];
	enum sgp30_channel_idx{SGP30_IAQ_TVOC_IDX=0, SGP30_IAQ_CO2EQ_IDX, SGP30_SIG_ETOH_IDX, SGP30_SIG_H2_IDX,} cocci_id/* drivers/iio/chemical/sgp30.c 55 */;
	const struct of_device_id *cocci_id/* drivers/iio/chemical/sgp30.c 504 */;
	struct iio_dev *cocci_id/* drivers/iio/chemical/sgp30.c 502 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/chemical/sgp30.c 500 */;
	enum sgp_product_id{SGP30=0, SGPC3,} cocci_id/* drivers/iio/chemical/sgp30.c 50 */;
	struct i2c_client *cocci_id/* drivers/iio/chemical/sgp30.c 499 */;
	void *cocci_id/* drivers/iio/chemical/sgp30.c 494 */;
	const struct of_device_id cocci_id/* drivers/iio/chemical/sgp30.c 493 */[];
	const struct iio_info cocci_id/* drivers/iio/chemical/sgp30.c 489 */;
	u16 cocci_id/* drivers/iio/chemical/sgp30.c 413 */;
	const struct sgp_version *cocci_id/* drivers/iio/chemical/sgp30.c 412 */;
	unsigned int cocci_id/* drivers/iio/chemical/sgp30.c 410 */;
	struct sgp_data *cocci_id/* drivers/iio/chemical/sgp30.c 409 */;
	int cocci_id/* drivers/iio/chemical/sgp30.c 409 */;
	struct sgp_crc_word *cocci_id/* drivers/iio/chemical/sgp30.c 338 */;
	long cocci_id/* drivers/iio/chemical/sgp30.c 335 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/chemical/sgp30.c 334 */;
	int *cocci_id/* drivers/iio/chemical/sgp30.c 334 */;
	const long cocci_id/* drivers/iio/chemical/sgp30.c 294 */;
	unsigned long cocci_id/* drivers/iio/chemical/sgp30.c 292 */;
	const struct sgp_data *cocci_id/* drivers/iio/chemical/sgp30.c 291 */;
	void cocci_id/* drivers/iio/chemical/sgp30.c 291 */;
	bool cocci_id/* drivers/iio/chemical/sgp30.c 273 */;
	const char *cocci_id/* drivers/iio/chemical/sgp30.c 242 */;
	u8 *cocci_id/* drivers/iio/chemical/sgp30.c 240 */;
	union sgp_reading *cocci_id/* drivers/iio/chemical/sgp30.c 234 */;
	size_t cocci_id/* drivers/iio/chemical/sgp30.c 234 */;
	enum sgp_cmd cocci_id/* drivers/iio/chemical/sgp30.c 233 */;
	u8 cocci_id/* drivers/iio/chemical/sgp30.c 208 */;
	const struct sgp_device cocci_id/* drivers/iio/chemical/sgp30.c 183 */[];
	const struct iio_chan_spec cocci_id/* drivers/iio/chemical/sgp30.c 135 */[];
	const struct sgp_version cocci_id/* drivers/iio/chemical/sgp30.c 121 */[];
	struct sgp_device {
		const struct iio_chan_spec *channels;
		int num_channels;
	} cocci_id/* drivers/iio/chemical/sgp30.c 116 */;
}
