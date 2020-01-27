cocci_test_suite() {
	struct virtio_driver cocci_id/* drivers/net/caif/caif_virtio.c 774 */;
	unsigned int cocci_id/* drivers/net/caif/caif_virtio.c 771 */[];
	struct virtio_device_id cocci_id/* drivers/net/caif/caif_virtio.c 766 */[];
	struct virtio_caif_transf_config cocci_id/* drivers/net/caif/caif_virtio.c 684 */;
	struct cfv_info cocci_id/* drivers/net/caif/caif_virtio.c 657 */;
	const char *cocci_id/* drivers/net/caif/caif_virtio.c 651 */;
	vrh_callback_t *cocci_id/* drivers/net/caif/caif_virtio.c 650 */;
	vq_callback_t *cocci_id/* drivers/net/caif/caif_virtio.c 649 */;
	struct virtio_device *cocci_id/* drivers/net/caif/caif_virtio.c 647 */;
	struct cfv_stats {
		u32 rx_napi_complete;
		u32 rx_napi_resched;
		u32 rx_nomem;
		u32 rx_kicks;
		u32 tx_full_ring;
		u32 tx_no_mem;
		u32 tx_flow_on;
		u32 tx_kicks;
	} cocci_id/* drivers/net/caif/caif_virtio.c 63 */;
	const struct net_device_ops cocci_id/* drivers/net/caif/caif_virtio.c 607 */;
	bool cocci_id/* drivers/net/caif/caif_virtio.c 528 */;
	struct scatterlist cocci_id/* drivers/net/caif/caif_virtio.c 526 */;
	struct buf_info cocci_id/* drivers/net/caif/caif_virtio.c 496 */;
	u8 cocci_id/* drivers/net/caif/caif_virtio.c 485 */;
	struct caif_payload_info *cocci_id/* drivers/net/caif/caif_virtio.c 483 */;
	void *cocci_id/* drivers/net/caif/caif_virtio.c 483 */;
	struct scatterlist *cocci_id/* drivers/net/caif/caif_virtio.c 481 */;
	struct cfv_napi_context {
		struct vringh_kiov riov;
		unsigned short head;
	} cocci_id/* drivers/net/caif/caif_virtio.c 48 */;
	struct buf_info *cocci_id/* drivers/net/caif/caif_virtio.c 479 */;
	struct net_device *cocci_id/* drivers/net/caif/caif_virtio.c 454 */;
	phys_addr_t cocci_id/* drivers/net/caif/caif_virtio.c 414 */;
	int cocci_id/* drivers/net/caif/caif_virtio.c 374 */;
	void cocci_id/* drivers/net/caif/caif_virtio.c 359 */;
	struct vringh *cocci_id/* drivers/net/caif/caif_virtio.c 350 */;
	struct vringh_kiov *cocci_id/* drivers/net/caif/caif_virtio.c 257 */;
	struct napi_struct *cocci_id/* drivers/net/caif/caif_virtio.c 250 */;
	unsigned long cocci_id/* drivers/net/caif/caif_virtio.c 235 */;
	u32 cocci_id/* drivers/net/caif/caif_virtio.c 218 */;
	u8 *cocci_id/* drivers/net/caif/caif_virtio.c 218 */;
	struct cfv_info *cocci_id/* drivers/net/caif/caif_virtio.c 217 */;
	struct sk_buff *cocci_id/* drivers/net/caif/caif_virtio.c 216 */;
	int *cocci_id/* drivers/net/caif/caif_virtio.c 216 */;
	unsigned int cocci_id/* drivers/net/caif/caif_virtio.c 168 */;
	struct virtqueue *cocci_id/* drivers/net/caif/caif_virtio.c 140 */;
	struct buf_info {
		size_t size;
		u8 *vaddr;
	} cocci_id/* drivers/net/caif/caif_virtio.c 134 */;
	struct cfv_info {
		struct caif_dev_common cfdev;
		struct virtio_device *vdev;
		struct vringh *vr_rx;
		struct virtqueue *vq_tx;
		struct net_device *ndev;
		unsigned int watermark_tx;
		spinlock_t tx_lock;
		struct tasklet_struct tx_release_tasklet;
		struct napi_struct napi;
		struct cfv_napi_context ctx;
		u16 tx_hr;
		u16 rx_hr;
		u16 tx_tr;
		u16 rx_tr;
		u32 mtu;
		u32 mru;
		size_t allocsz;
		void *alloc_addr;
		dma_addr_t alloc_dma;
		struct gen_pool *genpool;
		unsigned long reserved_mem;
		size_t reserved_size;
		struct cfv_stats stats;
		struct dentry *debugfs;
	} cocci_id/* drivers/net/caif/caif_virtio.c 101 */;
}