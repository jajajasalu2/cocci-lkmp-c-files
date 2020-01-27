cocci_test_suite() {
	const u8 *cocci_id/* drivers/iio/chemical/pms7003.c 95 */;
	enum pms7003_cmd cocci_id/* drivers/iio/chemical/pms7003.c 78 */;
	struct pms7003_state *cocci_id/* drivers/iio/chemical/pms7003.c 78 */;
	struct pms7003_state {
		struct serdev_device *serdev;
		struct pms7003_frame frame;
		struct completion frame_ready;
		struct mutex lock;
	} cocci_id/* drivers/iio/chemical/pms7003.c 71 */;
	struct pms7003_frame {
		u8 data[PMS7003_MAX_DATA_LENGTH];
		u16 expected_length;
		u16 length;
	} cocci_id/* drivers/iio/chemical/pms7003.c 65 */;
	const u8 cocci_id/* drivers/iio/chemical/pms7003.c 58 */[][PMS7003_CMD_LENGTH];
	enum pms7003_cmd{CMD_WAKEUP, CMD_ENTER_PASSIVE_MODE, CMD_READ_PASSIVE, CMD_SLEEP,} cocci_id/* drivers/iio/chemical/pms7003.c 44 */;
	enum{PM1, PM2P5, PM10,} cocci_id/* drivers/iio/chemical/pms7003.c 38 */;
	struct serdev_device_driver cocci_id/* drivers/iio/chemical/pms7003.c 334 */;
	const struct of_device_id cocci_id/* drivers/iio/chemical/pms7003.c 323 */[];
	struct iio_dev *cocci_id/* drivers/iio/chemical/pms7003.c 266 */;
	struct serdev_device *cocci_id/* drivers/iio/chemical/pms7003.c 263 */;
	const unsigned long cocci_id/* drivers/iio/chemical/pms7003.c 261 */[];
	void *cocci_id/* drivers/iio/chemical/pms7003.c 254 */;
	void cocci_id/* drivers/iio/chemical/pms7003.c 254 */;
	const struct serdev_device_ops cocci_id/* drivers/iio/chemical/pms7003.c 249 */;
	const unsigned char *cocci_id/* drivers/iio/chemical/pms7003.c 208 */;
	size_t cocci_id/* drivers/iio/chemical/pms7003.c 208 */;
	bool cocci_id/* drivers/iio/chemical/pms7003.c 199 */;
	int cocci_id/* drivers/iio/chemical/pms7003.c 191 */;
	u8 cocci_id/* drivers/iio/chemical/pms7003.c 189 */;
	u16 cocci_id/* drivers/iio/chemical/pms7003.c 187 */;
	struct pms7003_frame *cocci_id/* drivers/iio/chemical/pms7003.c 187 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/chemical/pms7003.c 180 */[];
	const struct iio_info cocci_id/* drivers/iio/chemical/pms7003.c 161 */;
	int *cocci_id/* drivers/iio/chemical/pms7003.c 132 */;
	long cocci_id/* drivers/iio/chemical/pms7003.c 132 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/chemical/pms7003.c 131 */;
	u16 cocci_id/* drivers/iio/chemical/pms7003.c 107 */[3 + 1 + 4];
	struct iio_poll_func *cocci_id/* drivers/iio/chemical/pms7003.c 103 */;
	irqreturn_t cocci_id/* drivers/iio/chemical/pms7003.c 101 */;
}
