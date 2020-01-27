cocci_test_suite() {
	struct scatterlist cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 934 */;
	bool cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 879 */;
	size_t cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 878 */;
	struct virtqueue *cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 874 */[2];
	const char *constcocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 873 */[];
	vq_callback_t *cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 872 */[];
	struct virtio_device *cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 870 */;
	struct rpmsg_hdr {
		u32 src;
		u32 dst;
		u32 reserved;
		u16 len;
		u16 flags;
		u8 data[0];
	}__packed cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 86 */;
	struct rpmsg_channel_info cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 820 */;
	struct rpmsg_ns_msg *cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 818 */;
	struct rpmsg_hdr *cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 770 */;
	struct virtqueue *cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 766 */;
	struct rpmsg_hdr cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 721 */;
	struct virtproc_info {
		struct virtio_device *vdev;
		struct virtqueue *rvq,*svq;
		void *rbufs,*sbufs;
		unsigned int num_bufs;
		unsigned int buf_size;
		int last_sbuf;
		dma_addr_t bufs_dma;
		struct mutex tx_lock;
		struct idr endpoints;
		struct mutex endpoints_lock;
		wait_queue_head_t sendq;
		atomic_t sleepers;
		struct rpmsg_endpoint *ns_ept;
	} cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 56 */;
	unsigned int cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 443 */;
	struct virtio_rpmsg_channel *cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 395 */;
	struct rpmsg_channel_info *cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 393 */;
	const struct rpmsg_device_ops cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 373 */;
	struct rpmsg_ns_msg cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 335 */;
	struct device *cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 239 */;
	int cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 237 */;
	u32 cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 235 */;
	void *cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 235 */;
	rpmsg_rx_cb_t cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 234 */;
	struct rpmsg_device *cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 233 */;
	struct virtproc_info *cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 232 */;
	struct rpmsg_endpoint cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 222 */;
	struct rpmsg_endpoint *cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 222 */;
	struct kref *cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 220 */;
	void cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 220 */;
	struct scatterlist *cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 199 */;
	const struct rpmsg_endpoint_ops cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 179 */;
	int cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 171 */(struct rpmsg_endpoint *ept,
							       u32 src,
							       u32 dst,
							       void *data,
							       int len);
	int cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 169 */(struct rpmsg_endpoint *ept,
							       void *data,
							       int len,
							       u32 dst);
	int cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 168 */(struct rpmsg_endpoint *ept,
							       void *data,
							       int len);
	void cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 167 */(struct rpmsg_endpoint *ept);
	struct virtio_rpmsg_channel cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 134 */;
	struct virtio_rpmsg_channel {
		struct rpmsg_device rpdev;
		struct virtproc_info *vrp;
	} cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 127 */;
	enum rpmsg_ns_flags{RPMSG_NS_CREATE=0, RPMSG_NS_DESTROY=1,} cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 119 */;
	struct rpmsg_ns_msg {
		char name[RPMSG_NAME_SIZE];
		u32 addr;
		u32 flags;
	}__packed cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 107 */;
	void __exit cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 1055 */;
	int __init cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 1043 */;
	struct virtio_driver cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 1033 */;
	unsigned int cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 1029 */[];
	struct virtio_device_id cocci_id/* drivers/rpmsg/virtio_rpmsg_bus.c 1024 */[];
}
