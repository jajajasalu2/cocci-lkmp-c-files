cocci_test_suite() {
	int __maybe_unused cocci_id/* drivers/iio/gyro/fxas21002c_core.c 969 */;
	void cocci_id/* drivers/iio/gyro/fxas21002c_core.c 947 */;
	enum fxas21002c_channel_index{CHANNEL_SCAN_INDEX_X, CHANNEL_SCAN_INDEX_Y, CHANNEL_SCAN_INDEX_Z, CHANNEL_SCAN_MAX,} cocci_id/* drivers/iio/gyro/fxas21002c_core.c 93 */;
	struct regmap_field *cocci_id/* drivers/iio/gyro/fxas21002c_core.c 867 */;
	struct iio_dev *cocci_id/* drivers/iio/gyro/fxas21002c_core.c 866 */;
	const char *cocci_id/* drivers/iio/gyro/fxas21002c_core.c 863 */;
	struct regmap *cocci_id/* drivers/iio/gyro/fxas21002c_core.c 862 */;
	unsigned long cocci_id/* drivers/iio/gyro/fxas21002c_core.c 765 */;
	struct device_node *cocci_id/* drivers/iio/gyro/fxas21002c_core.c 764 */;
	irqreturn_t cocci_id/* drivers/iio/gyro/fxas21002c_core.c 731 */;
	void *cocci_id/* drivers/iio/gyro/fxas21002c_core.c 731 */;
	const struct iio_trigger_ops cocci_id/* drivers/iio/gyro/fxas21002c_core.c 727 */;
	bool cocci_id/* drivers/iio/gyro/fxas21002c_core.c 719 */;
	struct iio_trigger *cocci_id/* drivers/iio/gyro/fxas21002c_core.c 718 */;
	struct fxas21002c_data {
		u8 chip_id;
		enum fxas21002c_mode_state mode;
		enum fxas21002c_mode_state prev_mode;
		struct mutex lock;
		struct regmap *regmap;
		struct regmap_field *regmap_fields[F_MAX_FIELDS];
		struct iio_trigger *dready_trig;
		s64 timestamp;
		int irq;
		struct regulator *vdd;
		struct regulator *vddio;
		s16 buffer[8]____cacheline_aligned;
	} cocci_id/* drivers/iio/gyro/fxas21002c_core.c 71 */;
	unsigned int cocci_id/* drivers/iio/gyro/fxas21002c_core.c 691 */;
	s16 cocci_id/* drivers/iio/gyro/fxas21002c_core.c 673 */;
	struct iio_poll_func *cocci_id/* drivers/iio/gyro/fxas21002c_core.c 666 */;
	const struct iio_info cocci_id/* drivers/iio/gyro/fxas21002c_core.c 658 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/gyro/fxas21002c_core.c 647 */[];
	const int cocci_id/* drivers/iio/gyro/fxas21002c_core.c 63 */[];
	const struct attribute_group cocci_id/* drivers/iio/gyro/fxas21002c_core.c 625 */;
	struct attribute *cocci_id/* drivers/iio/gyro/fxas21002c_core.c 617 */[];
	long cocci_id/* drivers/iio/gyro/fxas21002c_core.c 530 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/gyro/fxas21002c_core.c 529 */;
	__be16 cocci_id/* drivers/iio/gyro/fxas21002c_core.c 357 */;
	struct device *cocci_id/* drivers/iio/gyro/fxas21002c_core.c 356 */;
	int *cocci_id/* drivers/iio/gyro/fxas21002c_core.c 354 */;
	struct fxas21002c_data *cocci_id/* drivers/iio/gyro/fxas21002c_core.c 353 */;
	int cocci_id/* drivers/iio/gyro/fxas21002c_core.c 353 */;
	enum fxas21002c_mode_state{FXAS21002C_MODE_STANDBY, FXAS21002C_MODE_READY, FXAS21002C_MODE_ACTIVE,} cocci_id/* drivers/iio/gyro/fxas21002c_core.c 29 */;
	enum fxas21002c_fields cocci_id/* drivers/iio/gyro/fxas21002c_core.c 272 */;
	enum fxas21002c_mode_state cocci_id/* drivers/iio/gyro/fxas21002c_core.c 236 */;
	u8 cocci_id/* drivers/iio/gyro/fxas21002c_core.c 144 */;
}