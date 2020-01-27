cocci_test_suite() {
	struct list_head cocci_id/* net/9p/trans_virtio.c 85 */;
	void __exit cocci_id/* net/9p/trans_virtio.c 782 */;
	void cocci_id/* net/9p/trans_virtio.c 782 */;
	int __init cocci_id/* net/9p/trans_virtio.c 768 */;
	struct p9_trans_module cocci_id/* net/9p/trans_virtio.c 748 */;
	struct virtio_driver cocci_id/* net/9p/trans_virtio.c 738 */;
	unsigned int cocci_id/* net/9p/trans_virtio.c 733 */[];
	struct virtio_device_id cocci_id/* net/9p/trans_virtio.c 728 */[];
	const char *cocci_id/* net/9p/trans_virtio.c 652 */;
	struct virtio_chan {
		bool inuse;
		spinlock_t lock;
		struct p9_client *client;
		struct virtio_device *vdev;
		struct virtqueue *vq;
		int ring_bufs_avail;
		wait_queue_head_t *vc_wq;
		unsigned long p9_max_pages;
		struct scatterlist sg[VIRTQUEUE_NUM];
		char *tag;
		struct list_head chan_list;
	} cocci_id/* net/9p/trans_virtio.c 61 */;
	wait_queue_head_t cocci_id/* net/9p/trans_virtio.c 605 */;
	struct virtio_9p_config cocci_id/* net/9p/trans_virtio.c 587 */;
	struct virtio_chan cocci_id/* net/9p/trans_virtio.c 565 */;
	__u16 cocci_id/* net/9p/trans_virtio.c 554 */;
	struct virtio_device *cocci_id/* net/9p/trans_virtio.c 530 */;
	struct device_attribute *cocci_id/* net/9p/trans_virtio.c 527 */;
	char *cocci_id/* net/9p/trans_virtio.c 527 */;
	struct device *cocci_id/* net/9p/trans_virtio.c 526 */;
	ssize_t cocci_id/* net/9p/trans_virtio.c 526 */;
	atomic_t cocci_id/* net/9p/trans_virtio.c 44 */;
	__le32 cocci_id/* net/9p/trans_virtio.c 404 */;
	struct scatterlist *cocci_id/* net/9p/trans_virtio.c 396 */[4];
	struct page **cocci_id/* net/9p/trans_virtio.c 394 */;
	struct page *cocci_id/* net/9p/trans_virtio.c 357 */;
	unsigned long cocci_id/* net/9p/trans_virtio.c 354 */;
	void *cocci_id/* net/9p/trans_virtio.c 340 */;
	size_t cocci_id/* net/9p/trans_virtio.c 339 */;
	int *cocci_id/* net/9p/trans_virtio.c 309 */;
	size_t *cocci_id/* net/9p/trans_virtio.c 308 */;
	struct iov_iter *cocci_id/* net/9p/trans_virtio.c 306 */;
	struct page ***cocci_id/* net/9p/trans_virtio.c 305 */;
	struct virtio_chan *cocci_id/* net/9p/trans_virtio.c 304 */;
	int cocci_id/* net/9p/trans_virtio.c 304 */;
	struct scatterlist *cocci_id/* net/9p/trans_virtio.c 257 */[2];
	struct p9_req_t *cocci_id/* net/9p/trans_virtio.c 190 */;
	struct p9_client *cocci_id/* net/9p/trans_virtio.c 190 */;
	struct scatterlist *cocci_id/* net/9p/trans_virtio.c 167 */;
	bool cocci_id/* net/9p/trans_virtio.c 130 */;
	unsigned int cocci_id/* net/9p/trans_virtio.c 128 */;
	struct virtqueue *cocci_id/* net/9p/trans_virtio.c 125 */;
}