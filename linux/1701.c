cocci_test_suite() {
	const void *cocci_id/* drivers/iio/buffer/kfifo_buf.c 91 */;
	struct __kfifo *cocci_id/* drivers/iio/buffer/kfifo_buf.c 38 */;
	unsigned int cocci_id/* drivers/iio/buffer/kfifo_buf.c 26 */;
	size_t cocci_id/* drivers/iio/buffer/kfifo_buf.c 26 */;
	struct iio_kfifo *cocci_id/* drivers/iio/buffer/kfifo_buf.c 25 */;
	int cocci_id/* drivers/iio/buffer/kfifo_buf.c 25 */;
	struct iio_kfifo cocci_id/* drivers/iio/buffer/kfifo_buf.c 23 */;
	void cocci_id/* drivers/iio/buffer/kfifo_buf.c 225 */;
	struct iio_buffer **cocci_id/* drivers/iio/buffer/kfifo_buf.c 202 */;
	struct iio_buffer *cocci_id/* drivers/iio/buffer/kfifo_buf.c 200 */;
	struct device *cocci_id/* drivers/iio/buffer/kfifo_buf.c 200 */;
	void *cocci_id/* drivers/iio/buffer/kfifo_buf.c 183 */;
	struct iio_kfifo {
		struct iio_buffer buffer;
		struct kfifo kf;
		struct mutex user_lock;
		int update_needed;
	} cocci_id/* drivers/iio/buffer/kfifo_buf.c 16 */;
	const struct iio_buffer_access_funcs cocci_id/* drivers/iio/buffer/kfifo_buf.c 142 */;
	char __user *cocci_id/* drivers/iio/buffer/kfifo_buf.c 102 */;
}
