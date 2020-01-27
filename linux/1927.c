cocci_test_suite() {
	struct vz89x_chip_data {
		bool (*valid)(struct vz89x_data *data);
		const struct iio_chan_spec *channels;
		u8 num_channels;
		u8 cmd;
		u8 read_size;
		u8 write_size;
	} cocci_id/* drivers/iio/chemical/vz89x.c 54 */;
	struct vz89x_data {
		struct i2c_client *client;
		const struct vz89x_chip_data *chip;
		struct mutex lock;
		int (*xfer)(struct vz89x_data *data, u8 cmd);
		bool is_valid;
		unsigned long last_update;
		u8 buffer[VZ89TE_REG_MEASUREMENT_RD_SIZE];
	} cocci_id/* drivers/iio/chemical/vz89x.c 43 */;
	struct vz89x_chip_data cocci_id/* drivers/iio/chemical/vz89x.c 41 */;
	struct i2c_driver cocci_id/* drivers/iio/chemical/vz89x.c 403 */;
	const struct i2c_device_id cocci_id/* drivers/iio/chemical/vz89x.c 396 */[];
	unsigned long cocci_id/* drivers/iio/chemical/vz89x.c 377 */;
	enum{VZ89X, VZ89TE,} cocci_id/* drivers/iio/chemical/vz89x.c 36 */;
	const struct of_device_id *cocci_id/* drivers/iio/chemical/vz89x.c 357 */;
	struct iio_dev *cocci_id/* drivers/iio/chemical/vz89x.c 355 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/chemical/vz89x.c 353 */;
	void *cocci_id/* drivers/iio/chemical/vz89x.c 346 */;
	const struct of_device_id cocci_id/* drivers/iio/chemical/vz89x.c 345 */[];
	const struct vz89x_chip_data cocci_id/* drivers/iio/chemical/vz89x.c 322 */[];
	const struct iio_info cocci_id/* drivers/iio/chemical/vz89x.c 317 */;
	long cocci_id/* drivers/iio/chemical/vz89x.c 264 */;
	__be32 *cocci_id/* drivers/iio/chemical/vz89x.c 253 */;
	__le32 *cocci_id/* drivers/iio/chemical/vz89x.c 250 */;
	u8 *cocci_id/* drivers/iio/chemical/vz89x.c 246 */;
	int *cocci_id/* drivers/iio/chemical/vz89x.c 244 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/chemical/vz89x.c 243 */;
	const struct vz89x_chip_data *cocci_id/* drivers/iio/chemical/vz89x.c 219 */;
	char *cocci_id/* drivers/iio/chemical/vz89x.c 185 */;
	u8 cocci_id/* drivers/iio/chemical/vz89x.c 180 */[6];
	struct i2c_msg cocci_id/* drivers/iio/chemical/vz89x.c 178 */[2];
	struct i2c_client *cocci_id/* drivers/iio/chemical/vz89x.c 177 */;
	int cocci_id/* drivers/iio/chemical/vz89x.c 163 */;
	u8 cocci_id/* drivers/iio/chemical/vz89x.c 162 */;
	bool cocci_id/* drivers/iio/chemical/vz89x.c 160 */;
	struct vz89x_data *cocci_id/* drivers/iio/chemical/vz89x.c 160 */;
	const struct attribute_group cocci_id/* drivers/iio/chemical/vz89x.c 140 */;
	struct attribute *cocci_id/* drivers/iio/chemical/vz89x.c 134 */[];
	const struct iio_chan_spec cocci_id/* drivers/iio/chemical/vz89x.c 101 */[];
}
