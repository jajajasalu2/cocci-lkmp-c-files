cocci_test_suite() {
	unsigned cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 811 */[VB2_MAX_PLANES];
	const unsigned cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 808 */[];
	bool cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 565 */;
	const unsigned cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 336 */[VB2_MAX_PLANES];
	enum vb2_memory cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 334 */;
	struct vb2_plane *cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 311 */;
	const char *cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 2842 */;
	vb2_thread_fnc cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 2841 */;
	struct vb2_threadio_data *cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 2780 */;
	struct vb2_threadio_data {
		struct task_struct *thread;
		vb2_thread_fnc fnc;
		void *priv;
		bool stop;
	} cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 2770 */;
	const char __user *cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 2762 */;
	long cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 2610 */;
	unsigned cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 2606 */;
	struct vb2_fileio_buf *cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 2598 */;
	loff_t *cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 2595 */;
	char __user *cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 2594 */;
	size_t cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 2594 */;
	struct vb2_fileio_data *cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 2572 */;
	struct vb2_fileio_data {
		unsigned int count;
		unsigned int type;
		unsigned int memory;
		struct vb2_fileio_buf bufs[VB2_MAX_FRAME];
		unsigned int cur_index;
		unsigned int initial_index;
		unsigned int q_count;
		unsigned int dq_count;
		unsigned read_once:1;
		unsigned write_immediately:1;
	} cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 2434 */;
	struct vb2_fileio_buf {
		void *vaddr;
		unsigned int size;
		unsigned int pos;
		unsigned int queued:1;
	} cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 2403 */;
	poll_table *cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 2311 */;
	__poll_t cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 2310 */;
	struct file *cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 2310 */;
	int cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 2299 */(struct vb2_queue *q);
	int cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 2298 */(struct vb2_queue *q,
									       int read);
	struct vm_area_struct *cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 2147 */;
	int *cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 2076 */;
	unsigned int *cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 2051 */;
	unsigned long cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 2050 */;
	enum media_request_state cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 1932 */;
	struct media_request *cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 1923 */;
	void cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 191 */(struct vb2_buffer *vb);
	void cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 190 */(struct vb2_queue *q);
	struct vb2_buffer cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 1758 */;
	struct vb2_buffer **cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 1740 */;
	const struct media_request_object_ops cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 1389 */;
	int cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 1357 */(struct vb2_queue *q,
									       unsigned int index,
									       void *pb,
									       struct media_request *req);
	struct media_request_object *cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 1330 */;
	unsigned int cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 1275 */;
	enum vb2_buffer_state cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 1274 */;
	struct vb2_queue *cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 1273 */;
	struct vb2_buffer *cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 1271 */;
	int cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 1271 */;
	void cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 1259 */;
	struct dma_buf *cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 1141 */;
	void *cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 1128 */;
	struct vb2_plane cocci_id/* drivers/media/common/videobuf2/videobuf2-core.c 1126 */[VB2_MAX_PLANES];
}
