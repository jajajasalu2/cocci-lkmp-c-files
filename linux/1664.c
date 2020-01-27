cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/iio/magnetometer/ak8974.c 939 */;
	const struct of_device_id cocci_id/* drivers/iio/magnetometer/ak8974.c 933 */[];
	const struct i2c_device_id cocci_id/* drivers/iio/magnetometer/ak8974.c 925 */[];
	int __maybe_unused cocci_id/* drivers/iio/magnetometer/ak8974.c 890 */;
	unsigned long cocci_id/* drivers/iio/magnetometer/ak8974.c 723 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/magnetometer/ak8974.c 719 */;
	struct i2c_client *cocci_id/* drivers/iio/magnetometer/ak8974.c 718 */;
	const struct regmap_config cocci_id/* drivers/iio/magnetometer/ak8974.c 710 */;
	bool cocci_id/* drivers/iio/magnetometer/ak8974.c 705 */;
	struct device *cocci_id/* drivers/iio/magnetometer/ak8974.c 705 */;
	const struct iio_info cocci_id/* drivers/iio/magnetometer/ak8974.c 660 */;
	const unsigned long cocci_id/* drivers/iio/magnetometer/ak8974.c 658 */[];
	const struct iio_chan_spec cocci_id/* drivers/iio/magnetometer/ak8974.c 651 */[];
	const struct iio_chan_spec_ext_info cocci_id/* drivers/iio/magnetometer/ak8974.c 629 */[];
	const struct iio_chan_spec *cocci_id/* drivers/iio/magnetometer/ak8974.c 622 */;
	const struct iio_dev *cocci_id/* drivers/iio/magnetometer/ak8974.c 621 */;
	const struct iio_mount_matrix *cocci_id/* drivers/iio/magnetometer/ak8974.c 620 */;
	const struct iio_poll_func *cocci_id/* drivers/iio/magnetometer/ak8974.c 611 */;
	__le16 cocci_id/* drivers/iio/magnetometer/ak8974.c 584 */[8];
	struct iio_dev *cocci_id/* drivers/iio/magnetometer/ak8974.c 580 */;
	void cocci_id/* drivers/iio/magnetometer/ak8974.c 580 */;
	__le16 cocci_id/* drivers/iio/magnetometer/ak8974.c 543 */[3];
	long cocci_id/* drivers/iio/magnetometer/ak8974.c 540 */;
	int *cocci_id/* drivers/iio/magnetometer/ak8974.c 539 */;
	unsigned cocci_id/* drivers/iio/magnetometer/ak8974.c 519 */;
	const char cocci_id/* drivers/iio/magnetometer/ak8974.c 518 */[6];
	const char cocci_id/* drivers/iio/magnetometer/ak8974.c 517 */[3];
	__le16 cocci_id/* drivers/iio/magnetometer/ak8974.c 508 */[9];
	u16 cocci_id/* drivers/iio/magnetometer/ak8974.c 469 */;
	const char *cocci_id/* drivers/iio/magnetometer/ak8974.c 466 */;
	size_t cocci_id/* drivers/iio/magnetometer/ak8974.c 450 */;
	irqreturn_t cocci_id/* drivers/iio/magnetometer/ak8974.c 370 */;
	void *cocci_id/* drivers/iio/magnetometer/ak8974.c 370 */;
	__le16 *cocci_id/* drivers/iio/magnetometer/ak8974.c 344 */;
	unsigned int cocci_id/* drivers/iio/magnetometer/ak8974.c 316 */;
	struct ak8974 *cocci_id/* drivers/iio/magnetometer/ak8974.c 313 */;
	int cocci_id/* drivers/iio/magnetometer/ak8974.c 313 */;
	__le16 cocci_id/* drivers/iio/magnetometer/ak8974.c 196 */;
	u8 cocci_id/* drivers/iio/magnetometer/ak8974.c 193 */;
	u16 *cocci_id/* drivers/iio/magnetometer/ak8974.c 193 */;
	const char cocci_id/* drivers/iio/magnetometer/ak8974.c 190 */[];
	struct ak8974 {
		struct i2c_client *i2c;
		struct iio_mount_matrix orientation;
		struct regmap *map;
		struct regulator_bulk_data regs[2];
		const char *name;
		u8 variant;
		struct mutex lock;
		bool drdy_irq;
		struct completion drdy_complete;
		bool drdy_active_low;
	} cocci_id/* drivers/iio/magnetometer/ak8974.c 177 */;
}