cocci_test_suite() {
	u8 cocci_id/* drivers/s390/virtio/virtio_ccw.c 949 */;
	struct vq_info_block {
		__u64 desc;
		__u32 res0;
		__u16 index;
		__u16 num;
		__u64 avail;
		__u64 used;
	}__packed cocci_id/* drivers/s390/virtio/virtio_ccw.c 92 */;
	const void *cocci_id/* drivers/s390/virtio/virtio_ccw.c 913 */;
	struct vq_info_block_legacy {
		__u64 queue;
		__u32 align;
		__u16 index;
		__u16 num;
	}__packed cocci_id/* drivers/s390/virtio/virtio_ccw.c 85 */;
	u32 cocci_id/* drivers/s390/virtio/virtio_ccw.c 843 */;
	struct virtio_feature_desc *cocci_id/* drivers/s390/virtio/virtio_ccw.c 816 */;
	struct virtio_device *cocci_id/* drivers/s390/virtio/virtio_ccw.c 806 */;
	void cocci_id/* drivers/s390/virtio/virtio_ccw.c 806 */;
	u64 cocci_id/* drivers/s390/virtio/virtio_ccw.c 756 */;
	unsigned long *cocci_id/* drivers/s390/virtio/virtio_ccw.c 75 */;
	struct irq_affinity *cocci_id/* drivers/s390/virtio/virtio_ccw.c 657 */;
	const bool *cocci_id/* drivers/s390/virtio/virtio_ccw.c 656 */;
	const char *const cocci_id/* drivers/s390/virtio/virtio_ccw.c 655 */[];
	vq_callback_t *cocci_id/* drivers/s390/virtio/virtio_ccw.c 654 */[];
	unsigned cocci_id/* drivers/s390/virtio/virtio_ccw.c 652 */;
	__u64 cocci_id/* drivers/s390/virtio/virtio_ccw.c 569 */;
	struct virtio_ccw_device {
		struct virtio_device vdev;
		__u8 config[VIRTIO_CCW_CONFIG_SIZE];
		struct ccw_device *cdev;
		__u32 curr_io;
		int err;
		unsigned int revision;
		wait_queue_head_t wait_q;
		spinlock_t lock;
		struct mutex io_lock;
		struct list_head virtqueues;
		bool is_thinint;
		bool going_away;
		bool device_lost;
		unsigned int config_ready;
		void *airq_info;
		struct vcdev_dma_area *dma_area;
	} cocci_id/* drivers/s390/virtio/virtio_ccw.c 56 */;
	struct virtio_ccw_vq_info cocci_id/* drivers/s390/virtio/virtio_ccw.c 525 */;
	vq_callback_t *cocci_id/* drivers/s390/virtio/virtio_ccw.c 512 */;
	struct vcdev_dma_area {
		unsigned long indicators;
		unsigned long indicators2;
		struct vq_config_block config_block;
		__u8 status;
	} cocci_id/* drivers/s390/virtio/virtio_ccw.c 49 */;
	struct virtio_ccw_vq_info *cocci_id/* drivers/s390/virtio/virtio_ccw.c 449 */;
	struct vq_config_block cocci_id/* drivers/s390/virtio/virtio_ccw.c 438 */;
	struct vq_config_block {
		__u16 index;
		__u16 num;
	}__packed cocci_id/* drivers/s390/virtio/virtio_ccw.c 41 */;
	unsigned long cocci_id/* drivers/s390/virtio/virtio_ccw.c 392 */;
	struct subchannel_id cocci_id/* drivers/s390/virtio/virtio_ccw.c 391 */;
	long cocci_id/* drivers/s390/virtio/virtio_ccw.c 391 */;
	struct virtio_thinint_area *cocci_id/* drivers/s390/virtio/virtio_ccw.c 350 */;
	__u32 cocci_id/* drivers/s390/virtio/virtio_ccw.c 321 */;
	struct ccw1 *cocci_id/* drivers/s390/virtio/virtio_ccw.c 321 */;
	struct virtio_ccw_device *cocci_id/* drivers/s390/virtio/virtio_ccw.c 320 */;
	int cocci_id/* drivers/s390/virtio/virtio_ccw.c 320 */;
	u64 *cocci_id/* drivers/s390/virtio/virtio_ccw.c 262 */;
	void **cocci_id/* drivers/s390/virtio/virtio_ccw.c 262 */;
	struct virtqueue *cocci_id/* drivers/s390/virtio/virtio_ccw.c 261 */[];
	struct airq_info cocci_id/* drivers/s390/virtio/virtio_ccw.c 208 */;
	bool cocci_id/* drivers/s390/virtio/virtio_ccw.c 206 */;
	struct airq_struct *cocci_id/* drivers/s390/virtio/virtio_ccw.c 206 */;
	void *cocci_id/* drivers/s390/virtio/virtio_ccw.c 197 */;
	struct virtqueue *cocci_id/* drivers/s390/virtio/virtio_ccw.c 191 */;
	struct airq_info *cocci_id/* drivers/s390/virtio/virtio_ccw.c 191 */;
	struct virtio_ccw_device cocci_id/* drivers/s390/virtio/virtio_ccw.c 188 */;
	u8 *cocci_id/* drivers/s390/virtio/virtio_ccw.c 152 */;
	unsigned int cocci_id/* drivers/s390/virtio/virtio_ccw.c 1470 */;
	struct airq_info *cocci_id/* drivers/s390/virtio/virtio_ccw.c 147 */[MAX_AIRQ_AREAS];
	void __init cocci_id/* drivers/s390/virtio/virtio_ccw.c 1468 */;
	unsigned int *cocci_id/* drivers/s390/virtio/virtio_ccw.c 1439 */;
	int __init cocci_id/* drivers/s390/virtio/virtio_ccw.c 1439 */;
	char **cocci_id/* drivers/s390/virtio/virtio_ccw.c 1415 */;
	struct airq_info {
		rwlock_t lock;
		u8 summary_indicator_idx;
		struct airq_struct airq;
		struct airq_iv *aiv;
	} cocci_id/* drivers/s390/virtio/virtio_ccw.c 141 */;
	struct ccw_driver cocci_id/* drivers/s390/virtio/virtio_ccw.c 1396 */;
	struct ccw_device_id cocci_id/* drivers/s390/virtio/virtio_ccw.c 1370 */[];
	struct virtio_rev_info *cocci_id/* drivers/s390/virtio/virtio_ccw.c 1237 */;
	struct virtio_ccw_vq_info {
		struct virtqueue *vq;
		int num;
		union {
			struct vq_info_block s;
			struct vq_info_block_legacy l;
		} *info_block;
		int bit_nr;
		struct list_head node;
		long cookie;
	} cocci_id/* drivers/s390/virtio/virtio_ccw.c 122 */;
	struct ccw_device *cocci_id/* drivers/s390/virtio/virtio_ccw.c 1170 */;
	async_cookie_t cocci_id/* drivers/s390/virtio/virtio_ccw.c 1168 */;
	struct ccw_dev_id cocci_id/* drivers/s390/virtio/virtio_ccw.c 1160 */;
	char *cocci_id/* drivers/s390/virtio/virtio_ccw.c 1153 */;
	unsigned long cocci_id/* drivers/s390/virtio/virtio_ccw.c 1151 */[__MAX_SSID + 1][__DEV_WORDS];
	struct virtio_rev_info {
		__u16 revision;
		__u16 length;
		__u8 data[];
	} cocci_id/* drivers/s390/virtio/virtio_ccw.c 113 */;
	struct virtio_thinint_area {
		unsigned long summary_indicator;
		unsigned long indicator;
		u64 bit_nr;
		u8 isc;
	}__packed cocci_id/* drivers/s390/virtio/virtio_ccw.c 106 */;
	struct irb *cocci_id/* drivers/s390/virtio/virtio_ccw.c 1037 */;
	struct device *cocci_id/* drivers/s390/virtio/virtio_ccw.c 1027 */;
	struct virtio_feature_desc {
		__le32 features;
		__u8 index;
	}__packed cocci_id/* drivers/s390/virtio/virtio_ccw.c 101 */;
	const struct virtio_config_ops cocci_id/* drivers/s390/virtio/virtio_ccw.c 1009 */;
	const char *cocci_id/* drivers/s390/virtio/virtio_ccw.c 1002 */;
}
