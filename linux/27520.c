cocci_test_suite() {
	struct virtio_fs cocci_id/* fs/fuse/virtio_fs.c 95 */;
	struct virtio_fs *cocci_id/* fs/fuse/virtio_fs.c 95 */;
	struct kref *cocci_id/* fs/fuse/virtio_fs.c 93 */;
	struct fuse_pqueue *cocci_id/* fs/fuse/virtio_fs.c 894 */;
	struct scatterlist **cocci_id/* fs/fuse/virtio_fs.c 883 */;
	struct scatterlist cocci_id/* fs/fuse/virtio_fs.c 882 */[ARRAY_SIZE(stack_sgs)];
	struct scatterlist *cocci_id/* fs/fuse/virtio_fs.c 881 */[6];
	unsigned int *cocci_id/* fs/fuse/virtio_fs.c 854 */;
	void *cocci_id/* fs/fuse/virtio_fs.c 853 */;
	struct virtio_fs_vq *cocci_id/* fs/fuse/virtio_fs.c 85 */;
	struct scatterlist *cocci_id/* fs/fuse/virtio_fs.c 848 */;
	struct fuse_page_desc *cocci_id/* fs/fuse/virtio_fs.c 830 */;
	struct page **cocci_id/* fs/fuse/virtio_fs.c 829 */;
	typeof(*ap) cocci_id/* fs/fuse/virtio_fs.c 804 */;
	struct fuse_args_pages *cocci_id/* fs/fuse/virtio_fs.c 804 */;
	struct fuse_forget_in cocci_id/* fs/fuse/virtio_fs.c 779 */;
	struct fuse_in_header cocci_id/* fs/fuse/virtio_fs.c 773 */;
	u64 cocci_id/* fs/fuse/virtio_fs.c 760 */;
	struct fuse_forget_link *cocci_id/* fs/fuse/virtio_fs.c 755 */;
	struct virtio_driver cocci_id/* fs/fuse/virtio_fs.c 738 */;
	const unsigned int cocci_id/* fs/fuse/virtio_fs.c 736 */[];
	const struct virtio_device_id cocci_id/* fs/fuse/virtio_fs.c 731 */[];
	struct virtio_device *cocci_id/* fs/fuse/virtio_fs.c 637 */;
	int cocci_id/* fs/fuse/virtio_fs.c 63 */(struct virtio_fs_vq *fsvq,
						 struct fuse_req *req,
						 bool in_flight);
	struct virtio_fs_forget {
		struct list_head list;
		struct virtio_fs_forget_req req;
	} cocci_id/* fs/fuse/virtio_fs.c 57 */;
	const char **cocci_id/* fs/fuse/virtio_fs.c 569 */;
	vq_callback_t **cocci_id/* fs/fuse/virtio_fs.c 568 */;
	struct virtqueue **cocci_id/* fs/fuse/virtio_fs.c 567 */;
	struct virtio_fs_forget_req {
		struct fuse_in_header ih;
		struct fuse_forget_in arg;
	} cocci_id/* fs/fuse/virtio_fs.c 52 */;
	struct page *cocci_id/* fs/fuse/virtio_fs.c 500 */;
	struct fuse_arg *cocci_id/* fs/fuse/virtio_fs.c 461 */;
	unsigned int cocci_id/* fs/fuse/virtio_fs.c 452 */;
	struct fuse_req *cocci_id/* fs/fuse/virtio_fs.c 450 */;
	struct fuse_args *cocci_id/* fs/fuse/virtio_fs.c 450 */;
	void cocci_id/* fs/fuse/virtio_fs.c 450 */;
	struct virtio_fs {
		struct kref refcount;
		struct list_head list;
		char *tag;
		struct virtio_fs_vq *vqs;
		unsigned int nvqs;
		unsigned int num_request_queues;
	} cocci_id/* fs/fuse/virtio_fs.c 43 */;
	int cocci_id/* fs/fuse/virtio_fs.c 421 */;
	struct virtio_fs_forget cocci_id/* fs/fuse/virtio_fs.c 407 */;
	struct virtio_fs_vq cocci_id/* fs/fuse/virtio_fs.c 401 */;
	struct work_struct *cocci_id/* fs/fuse/virtio_fs.c 398 */;
	struct virtio_fs_forget_req *cocci_id/* fs/fuse/virtio_fs.c 349 */;
	struct virtqueue *cocci_id/* fs/fuse/virtio_fs.c 346 */;
	struct scatterlist cocci_id/* fs/fuse/virtio_fs.c 345 */;
	bool cocci_id/* fs/fuse/virtio_fs.c 343 */;
	struct virtio_fs_forget *cocci_id/* fs/fuse/virtio_fs.c 342 */;
	struct fuse_req cocci_id/* fs/fuse/virtio_fs.c 292 */;
	struct virtio_fs_vq {
		spinlock_t lock;
		struct virtqueue *vq;
		struct work_struct done_work;
		struct list_head queued_reqs;
		struct list_head end_reqs;
		struct delayed_work dispatch_work;
		struct fuse_dev *fud;
		bool connected;
		long in_flight;
		struct completion in_flight_zero;
		char name[24];
	}____cacheline_aligned_in_smp cocci_id/* fs/fuse/virtio_fs.c 28 */;
	struct virtio_fs_config cocci_id/* fs/fuse/virtio_fs.c 241 */;
	size_t cocci_id/* fs/fuse/virtio_fs.c 239 */;
	char *cocci_id/* fs/fuse/virtio_fs.c 238 */;
	char cocci_id/* fs/fuse/virtio_fs.c 237 */[sizeof_field(struct virtio_fs_config,
								tag)];
	enum{VQ_HIPRIO, VQ_REQUEST,} cocci_id/* fs/fuse/virtio_fs.c 22 */;
	const char *cocci_id/* fs/fuse/virtio_fs.c 198 */;
	void __exit cocci_id/* fs/fuse/virtio_fs.c 1243 */;
	int __init cocci_id/* fs/fuse/virtio_fs.c 1225 */;
	struct file_system_type cocci_id/* fs/fuse/virtio_fs.c 1218 */;
	const struct fs_context_operations cocci_id/* fs/fuse/virtio_fs.c 1208 */;
	struct fuse_conn cocci_id/* fs/fuse/virtio_fs.c 1174 */;
	struct fs_context *cocci_id/* fs/fuse/virtio_fs.c 1157 */;
	void **cocci_id/* fs/fuse/virtio_fs.c 1078 */;
	struct fuse_iqueue *cocci_id/* fs/fuse/virtio_fs.c 107 */;
	struct fuse_fs_context cocci_id/* fs/fuse/virtio_fs.c 1044 */;
	struct fuse_conn *cocci_id/* fs/fuse/virtio_fs.c 1040 */;
	struct super_block *cocci_id/* fs/fuse/virtio_fs.c 1038 */;
	const struct fuse_iqueue_ops cocci_id/* fs/fuse/virtio_fs.c 1031 */;
}
