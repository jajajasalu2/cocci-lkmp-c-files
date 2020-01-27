cocci_test_suite() {
	const struct opt3001_scale cocci_id/* drivers/iio/light/opt3001.c 99 */[];
	struct opt3001_scale {
		int val;
		int val2;
	} cocci_id/* drivers/iio/light/opt3001.c 94 */;
	struct i2c_driver cocci_id/* drivers/iio/light/opt3001.c 840 */;
	const struct of_device_id cocci_id/* drivers/iio/light/opt3001.c 834 */[];
	const struct i2c_device_id cocci_id/* drivers/iio/light/opt3001.c 828 */[];
	struct device *cocci_id/* drivers/iio/light/opt3001.c 740 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/light/opt3001.c 738 */;
	struct i2c_client *cocci_id/* drivers/iio/light/opt3001.c 737 */;
	struct opt3001 {
		struct i2c_client *client;
		struct device *dev;
		struct mutex lock;
		bool ok_to_ignore_lock;
		bool result_ready;
		wait_queue_head_t result_ready_queue;
		u16 result;
		u32 int_time;
		u32 mode;
		u16 high_thresh_mantissa;
		u16 low_thresh_mantissa;
		u8 high_thresh_exp;
		u8 low_thresh_exp;
		bool use_irq;
	} cocci_id/* drivers/iio/light/opt3001.c 72 */;
	bool cocci_id/* drivers/iio/light/opt3001.c 689 */;
	struct iio_dev *cocci_id/* drivers/iio/light/opt3001.c 686 */;
	irqreturn_t cocci_id/* drivers/iio/light/opt3001.c 684 */;
	void *cocci_id/* drivers/iio/light/opt3001.c 684 */;
	u16 cocci_id/* drivers/iio/light/opt3001.c 623 */;
	struct opt3001 *cocci_id/* drivers/iio/light/opt3001.c 620 */;
	int cocci_id/* drivers/iio/light/opt3001.c 620 */;
	char cocci_id/* drivers/iio/light/opt3001.c 591 */[2];
	const struct iio_info cocci_id/* drivers/iio/light/opt3001.c 579 */;
	enum iio_event_direction cocci_id/* drivers/iio/light/opt3001.c 528 */;
	enum iio_event_type cocci_id/* drivers/iio/light/opt3001.c 527 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/light/opt3001.c 527 */;
	enum iio_event_info cocci_id/* drivers/iio/light/opt3001.c 444 */;
	int *cocci_id/* drivers/iio/light/opt3001.c 346 */;
	long cocci_id/* drivers/iio/light/opt3001.c 230 */;
	u8 cocci_id/* drivers/iio/light/opt3001.c 228 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/light/opt3001.c 212 */[];
	const struct iio_event_spec cocci_id/* drivers/iio/light/opt3001.c 197 */[];
	const struct attribute_group cocci_id/* drivers/iio/light/opt3001.c 193 */;
	struct attribute *cocci_id/* drivers/iio/light/opt3001.c 188 */[];
	u16 *cocci_id/* drivers/iio/light/opt3001.c 179 */;
	void cocci_id/* drivers/iio/light/opt3001.c 179 */;
	const struct opt3001_scale *cocci_id/* drivers/iio/light/opt3001.c 152 */;
	u8 *cocci_id/* drivers/iio/light/opt3001.c 147 */;
	const struct opt3001 *cocci_id/* drivers/iio/light/opt3001.c 146 */;
}
