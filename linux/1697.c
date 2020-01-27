cocci_test_suite() {
	struct iio_dma_buffer_queue *cocci_id/* drivers/iio/buffer/industrialio-buffer-dmaengine.c 91 */;
	void cocci_id/* drivers/iio/buffer/industrialio-buffer-dmaengine.c 91 */;
	dma_cookie_t cocci_id/* drivers/iio/buffer/industrialio-buffer-dmaengine.c 63 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/iio/buffer/industrialio-buffer-dmaengine.c 62 */;
	unsigned long cocci_id/* drivers/iio/buffer/industrialio-buffer-dmaengine.c 49 */;
	struct iio_dma_buffer_block *cocci_id/* drivers/iio/buffer/industrialio-buffer-dmaengine.c 48 */;
	void *cocci_id/* drivers/iio/buffer/industrialio-buffer-dmaengine.c 46 */;
	struct dmaengine_buffer cocci_id/* drivers/iio/buffer/industrialio-buffer-dmaengine.c 43 */;
	struct iio_buffer *cocci_id/* drivers/iio/buffer/industrialio-buffer-dmaengine.c 41 */;
	struct dmaengine_buffer *cocci_id/* drivers/iio/buffer/industrialio-buffer-dmaengine.c 40 */;
	struct dmaengine_buffer {
		struct iio_dma_buffer_queue queue;
		struct dma_chan *chan;
		struct list_head active;
		size_t align;
		size_t max_size;
	} cocci_id/* drivers/iio/buffer/industrialio-buffer-dmaengine.c 30 */;
	int cocci_id/* drivers/iio/buffer/industrialio-buffer-dmaengine.c 147 */;
	struct dma_chan *cocci_id/* drivers/iio/buffer/industrialio-buffer-dmaengine.c 146 */;
	struct dma_slave_caps cocci_id/* drivers/iio/buffer/industrialio-buffer-dmaengine.c 145 */;
	unsigned int cocci_id/* drivers/iio/buffer/industrialio-buffer-dmaengine.c 144 */;
	const char *cocci_id/* drivers/iio/buffer/industrialio-buffer-dmaengine.c 141 */;
	struct device *cocci_id/* drivers/iio/buffer/industrialio-buffer-dmaengine.c 140 */;
	const struct iio_dma_buffer_ops cocci_id/* drivers/iio/buffer/industrialio-buffer-dmaengine.c 123 */;
	const struct iio_buffer_access_funcs cocci_id/* drivers/iio/buffer/industrialio-buffer-dmaengine.c 109 */;
}
