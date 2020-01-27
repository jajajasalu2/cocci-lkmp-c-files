cocci_test_suite() {
	struct iio_channel *cocci_id/* drivers/iio/buffer/industrialio-hw-consumer.c 87 */;
	long cocci_id/* drivers/iio/buffer/industrialio-hw-consumer.c 55 */;
	size_t cocci_id/* drivers/iio/buffer/industrialio-hw-consumer.c 55 */;
	struct iio_dev *cocci_id/* drivers/iio/buffer/industrialio-hw-consumer.c 53 */;
	const struct iio_buffer_access_funcs cocci_id/* drivers/iio/buffer/industrialio-hw-consumer.c 47 */;
	struct hw_consumer_buffer cocci_id/* drivers/iio/buffer/industrialio-hw-consumer.c 37 */;
	struct iio_buffer *cocci_id/* drivers/iio/buffer/industrialio-hw-consumer.c 35 */;
	struct hw_consumer_buffer *cocci_id/* drivers/iio/buffer/industrialio-hw-consumer.c 34 */;
	struct hw_consumer_buffer {
		struct list_head head;
		struct iio_dev *indio_dev;
		struct iio_buffer buffer;
		long scan_mask[];
	} cocci_id/* drivers/iio/buffer/industrialio-hw-consumer.c 27 */;
	struct iio_hw_consumer {
		struct list_head buffers;
		struct iio_channel *channels;
	} cocci_id/* drivers/iio/buffer/industrialio-hw-consumer.c 22 */;
	int cocci_id/* drivers/iio/buffer/industrialio-hw-consumer.c 198 */;
	void cocci_id/* drivers/iio/buffer/industrialio-hw-consumer.c 196 */;
	struct iio_hw_consumer **cocci_id/* drivers/iio/buffer/industrialio-hw-consumer.c 170 */;
	struct iio_hw_consumer *cocci_id/* drivers/iio/buffer/industrialio-hw-consumer.c 168 */;
	struct device *cocci_id/* drivers/iio/buffer/industrialio-hw-consumer.c 168 */;
	void *cocci_id/* drivers/iio/buffer/industrialio-hw-consumer.c 145 */;
}
