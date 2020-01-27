cocci_test_suite() {
	void *cocci_id/* drivers/iio/buffer/industrialio-buffer-cb.c 51 */;
	int (*cocci_id/* drivers/iio/buffer/industrialio-buffer-cb.c 49 */)(const void *data,
									    void *private);
	struct device *cocci_id/* drivers/iio/buffer/industrialio-buffer-cb.c 48 */;
	const struct iio_buffer_access_funcs cocci_id/* drivers/iio/buffer/industrialio-buffer-cb.c 41 */;
	void cocci_id/* drivers/iio/buffer/industrialio-buffer-cb.c 33 */;
	const void *cocci_id/* drivers/iio/buffer/industrialio-buffer-cb.c 27 */;
	int cocci_id/* drivers/iio/buffer/industrialio-buffer-cb.c 27 */;
	struct iio_cb_buffer cocci_id/* drivers/iio/buffer/industrialio-buffer-cb.c 24 */;
	struct iio_cb_buffer *cocci_id/* drivers/iio/buffer/industrialio-buffer-cb.c 22 */;
	struct iio_buffer *cocci_id/* drivers/iio/buffer/industrialio-buffer-cb.c 22 */;
	struct iio_dev *cocci_id/* drivers/iio/buffer/industrialio-buffer-cb.c 142 */;
	struct iio_cb_buffer {
		struct iio_buffer buffer;
		int (*cb)(const void *data, void *private);
		void *private;
		struct iio_channel *channels;
		struct iio_dev *indio_dev;
	} cocci_id/* drivers/iio/buffer/industrialio-buffer-cb.c 14 */;
	const struct iio_cb_buffer *cocci_id/* drivers/iio/buffer/industrialio-buffer-cb.c 136 */;
	struct iio_channel *cocci_id/* drivers/iio/buffer/industrialio-buffer-cb.c 135 */;
	size_t cocci_id/* drivers/iio/buffer/industrialio-buffer-cb.c 105 */;
}
