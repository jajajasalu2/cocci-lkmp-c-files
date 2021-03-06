cocci_test_suite() {
	u8 cocci_id/* drivers/iio/proximity/as3935.c 87 */;
	int *cocci_id/* drivers/iio/proximity/as3935.c 85 */;
	unsigned int cocci_id/* drivers/iio/proximity/as3935.c 85 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/proximity/as3935.c 68 */[];
	struct as3935_state {
		struct spi_device *spi;
		struct iio_trigger *trig;
		struct mutex lock;
		struct delayed_work work;
		unsigned long noise_tripped;
		u32 tune_cap;
		u32 nflwdth_reg;
		u8 buffer[16];
		u8 buf[2]____cacheline_aligned;
	} cocci_id/* drivers/iio/proximity/as3935.c 55 */;
	struct spi_driver cocci_id/* drivers/iio/proximity/as3935.c 477 */;
	const struct spi_device_id cocci_id/* drivers/iio/proximity/as3935.c 471 */[];
	const struct of_device_id cocci_id/* drivers/iio/proximity/as3935.c 465 */[];
	struct device_node *cocci_id/* drivers/iio/proximity/as3935.c 361 */;
	struct iio_trigger *cocci_id/* drivers/iio/proximity/as3935.c 359 */;
	struct spi_device *cocci_id/* drivers/iio/proximity/as3935.c 356 */;
	struct iio_dev *cocci_id/* drivers/iio/proximity/as3935.c 274 */;
	irqreturn_t cocci_id/* drivers/iio/proximity/as3935.c 272 */;
	void *cocci_id/* drivers/iio/proximity/as3935.c 272 */;
	struct as3935_state cocci_id/* drivers/iio/proximity/as3935.c 248 */;
	int cocci_id/* drivers/iio/proximity/as3935.c 245 */;
	struct as3935_state *cocci_id/* drivers/iio/proximity/as3935.c 244 */;
	struct work_struct *cocci_id/* drivers/iio/proximity/as3935.c 242 */;
	void cocci_id/* drivers/iio/proximity/as3935.c 242 */;
	const struct iio_trigger_ops cocci_id/* drivers/iio/proximity/as3935.c 239 */;
	struct iio_poll_func *cocci_id/* drivers/iio/proximity/as3935.c 221 */;
	const struct iio_info cocci_id/* drivers/iio/proximity/as3935.c 214 */;
	long cocci_id/* drivers/iio/proximity/as3935.c 180 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/proximity/as3935.c 177 */;
	const struct attribute_group cocci_id/* drivers/iio/proximity/as3935.c 172 */;
	struct attribute *cocci_id/* drivers/iio/proximity/as3935.c 166 */[];
	char *cocci_id/* drivers/iio/proximity/as3935.c 148 */;
	struct device_attribute *cocci_id/* drivers/iio/proximity/as3935.c 147 */;
	struct device *cocci_id/* drivers/iio/proximity/as3935.c 146 */;
	ssize_t cocci_id/* drivers/iio/proximity/as3935.c 146 */;
	unsigned long cocci_id/* drivers/iio/proximity/as3935.c 131 */;
	const char *cocci_id/* drivers/iio/proximity/as3935.c 128 */;
	size_t cocci_id/* drivers/iio/proximity/as3935.c 128 */;
	u8 *cocci_id/* drivers/iio/proximity/as3935.c 103 */;
}
