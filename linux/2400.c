cocci_test_suite() {
	struct dmatest_chan cocci_id/* drivers/dma/dmatest.c 993 */;
	struct dma_device *cocci_id/* drivers/dma/dmatest.c 989 */;
	struct dmatest_chan *cocci_id/* drivers/dma/dmatest.c 988 */;
	struct dma_chan *cocci_id/* drivers/dma/dmatest.c 986 */;
	struct dmatest_thread cocci_id/* drivers/dma/dmatest.c 955 */;
	char *cocci_id/* drivers/dma/dmatest.c 940 */;
	struct dmatest_thread *cocci_id/* drivers/dma/dmatest.c 938 */;
	enum dma_transaction_type cocci_id/* drivers/dma/dmatest.c 935 */;
	int cocci_id/* drivers/dma/dmatest.c 83 */;
	struct page *cocci_id/* drivers/dma/dmatest.c 729 */;
	struct dmaengine_unmap_data *cocci_id/* drivers/dma/dmatest.c 668 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/dma/dmatest.c 667 */;
	dma_addr_t cocci_id/* drivers/dma/dmatest.c 648 */;
	dma_addr_t *cocci_id/* drivers/dma/dmatest.c 580 */;
	bool cocci_id/* drivers/dma/dmatest.c 579 */;
	ktime_t cocci_id/* drivers/dma/dmatest.c 572 */;
	enum dma_ctrl_flags cocci_id/* drivers/dma/dmatest.c 565 */;
	enum dma_status cocci_id/* drivers/dma/dmatest.c 564 */;
	dma_cookie_t cocci_id/* drivers/dma/dmatest.c 563 */;
	u8 *cocci_id/* drivers/dma/dmatest.c 512 */;
	u8 cocci_id/* drivers/dma/dmatest.c 508 */;
	struct dmatest_data *cocci_id/* drivers/dma/dmatest.c 491 */;
	unsigned int cocci_id/* drivers/dma/dmatest.c 491 */;
	void cocci_id/* drivers/dma/dmatest.c 491 */;
	s64 cocci_id/* drivers/dma/dmatest.c 486 */;
	unsigned long long cocci_id/* drivers/dma/dmatest.c 486 */;
	unsigned long cocci_id/* drivers/dma/dmatest.c 453 */;
	const char *cocci_id/* drivers/dma/dmatest.c 451 */;
	struct dmatest_done *cocci_id/* drivers/dma/dmatest.c 419 */;
	void *cocci_id/* drivers/dma/dmatest.c 417 */;
	u8 **cocci_id/* drivers/dma/dmatest.c 343 */;
	char cocci_id/* drivers/dma/dmatest.c 27 */[32];
	struct dmatest_chan {
		struct list_head node;
		struct dma_chan *chan;
		struct list_head threads;
	} cocci_id/* drivers/dma/dmatest.c 226 */;
	struct dmatest_thread {
		struct list_head node;
		struct dmatest_info *info;
		struct task_struct *task;
		struct dma_chan *chan;
		struct dmatest_data src;
		struct dmatest_data dst;
		enum dma_transaction_type type;
		wait_queue_head_t done_wait;
		struct dmatest_done test_done;
		bool done;
		bool pending;
	} cocci_id/* drivers/dma/dmatest.c 212 */;
	struct dmatest_data {
		u8 **raw;
		u8 **aligned;
		unsigned int cnt;
		unsigned int off;
	} cocci_id/* drivers/dma/dmatest.c 205 */;
	struct dmatest_done {
		bool done;
		wait_queue_head_t *wait;
	} cocci_id/* drivers/dma/dmatest.c 200 */;
	struct kparam_string cocci_id/* drivers/dma/dmatest.c 157 */;
	const struct kernel_param_ops cocci_id/* drivers/dma/dmatest.c 151 */;
	int cocci_id/* drivers/dma/dmatest.c 150 */(char *val,
						    const struct kernel_param *kp);
	int cocci_id/* drivers/dma/dmatest.c 149 */(const char *val,
						    const struct kernel_param *kp);
	void __exit cocci_id/* drivers/dma/dmatest.c 1312 */;
	int __init cocci_id/* drivers/dma/dmatest.c 1287 */;
	const struct kernel_param *cocci_id/* drivers/dma/dmatest.c 1253 */;
	struct dmatest_info {
		struct dmatest_params params;
		struct list_head channels;
		unsigned int nr_channels;
		struct mutex lock;
		bool did_init;
	} cocci_id/* drivers/dma/dmatest.c 125 */;
	char cocci_id/* drivers/dma/dmatest.c 1186 */[20];
	struct dmatest_params *cocci_id/* drivers/dma/dmatest.c 1072 */;
	struct dmatest_info *cocci_id/* drivers/dma/dmatest.c 1070 */;
	dma_cap_mask_t cocci_id/* drivers/dma/dmatest.c 1048 */;
	struct dmatest_params {
		unsigned int buf_size;
		char channel[20];
		char device[32];
		unsigned int threads_per_chan;
		unsigned int max_channels;
		unsigned int iterations;
		unsigned int xor_sources;
		unsigned int pq_sources;
		unsigned int timeout;
		bool noverify;
		bool norandom;
		int alignment;
		unsigned int transfer_size;
		bool polled;
	} cocci_id/* drivers/dma/dmatest.c 103 */;
}
