cocci_test_suite() {
	dma_addr_t cocci_id/* drivers/virtio/virtio_ring.c 991 */;
	struct vring_packed_desc cocci_id/* drivers/virtio/virtio_ring.c 974 */;
	gfp_t cocci_id/* drivers/virtio/virtio_ring.c 963 */;
	struct vring_packed_desc *cocci_id/* drivers/virtio/virtio_ring.c 962 */;
	struct vring_desc_extra_packed *cocci_id/* drivers/virtio/virtio_ring.c 915 */;
	struct vring_virtqueue {
		struct virtqueue vq;
		bool packed_ring;
		bool use_dma_api;
		bool weak_barriers;
		bool broken;
		bool indirect;
		bool event;
		unsigned int free_head;
		unsigned int num_added;
		u16 last_used_idx;
		union {
			struct {
				struct vring vring;
				u16 avail_flags_shadow;
				u16 avail_idx_shadow;
				struct vring_desc_state_split *desc_state;
				dma_addr_t queue_dma_addr;
				size_t queue_size_in_bytes;
			} split;
			struct {
				struct {
					unsigned int num;
					struct vring_packed_desc *desc;
					struct vring_packed_desc_event *driver;
					struct vring_packed_desc_event *device;
				} vring;
				bool avail_wrap_counter;
				bool used_wrap_counter;
				u16 avail_used_flags;
				u16 next_avail_idx;
				u16 event_flags_shadow;
				struct vring_desc_state_packed *desc_state;
				struct vring_desc_extra_packed *desc_extra;
				dma_addr_t ring_dma_addr;
				dma_addr_t driver_event_dma_addr;
				dma_addr_t device_event_dma_addr;
				size_t ring_size_in_bytes;
				size_t event_size_in_bytes;
			} packed;
		};
		bool (*notify)(struct virtqueue *vq);
		bool we_own_ring;
#ifdef DEBUG
		unsigned int in_use;
		bool last_add_time_valid;
		ktime_t last_add_time;
#endif
	} cocci_id/* drivers/virtio/virtio_ring.c 87 */;
	struct vring_desc_extra_packed {
		dma_addr_t addr;
		u32 len;
		u16 flags;
	} cocci_id/* drivers/virtio/virtio_ring.c 81 */;
	struct vring_desc_state_packed {
		void *data;
		struct vring_packed_desc *indir_desc;
		u16 num;
		u16 next;
		u16 last;
	} cocci_id/* drivers/virtio/virtio_ring.c 73 */;
	struct vring_desc_state_split {
		void *data;
		struct vring_desc *indir_desc;
	} cocci_id/* drivers/virtio/virtio_ring.c 68 */;
	__virtio16 cocci_id/* drivers/virtio/virtio_ring.c 624 */;
	struct vring_desc cocci_id/* drivers/virtio/virtio_ring.c 406 */;
	struct vring_desc *cocci_id/* drivers/virtio/virtio_ring.c 392 */;
	ktime_t cocci_id/* drivers/virtio/virtio_ring.c 36 */;
	enum dma_data_direction cocci_id/* drivers/virtio/virtio_ring.c 327 */;
	struct device *cocci_id/* drivers/virtio/virtio_ring.c 319 */;
	phys_addr_t cocci_id/* drivers/virtio/virtio_ring.c 282 */;
	dma_addr_t *cocci_id/* drivers/virtio/virtio_ring.c 273 */;
	size_t cocci_id/* drivers/virtio/virtio_ring.c 261 */;
	const struct vring *cocci_id/* drivers/virtio/virtio_ring.c 2323 */;
	char *cocci_id/* drivers/virtio/virtio_ring.c 2304 */;
	void (*cocci_id/* drivers/virtio/virtio_ring.c 2164 */)(struct virtqueue *vq);
	bool (*cocci_id/* drivers/virtio/virtio_ring.c 2163 */)(struct virtqueue *vq);
	struct vring_desc_state_split cocci_id/* drivers/virtio/virtio_ring.c 2114 */;
	struct vring_virtqueue *cocci_id/* drivers/virtio/virtio_ring.c 2063 */;
	const char *cocci_id/* drivers/virtio/virtio_ring.c 2060 */;
	void (*cocci_id/* drivers/virtio/virtio_ring.c 2059 */)(struct virtqueue *);
	bool (*cocci_id/* drivers/virtio/virtio_ring.c 2058 */)(struct virtqueue *);
	bool cocci_id/* drivers/virtio/virtio_ring.c 2056 */;
	struct virtio_device *cocci_id/* drivers/virtio/virtio_ring.c 2055 */;
	struct vring cocci_id/* drivers/virtio/virtio_ring.c 2054 */;
	struct virtqueue *cocci_id/* drivers/virtio/virtio_ring.c 2053 */;
	unsigned int cocci_id/* drivers/virtio/virtio_ring.c 2053 */;
	irqreturn_t cocci_id/* drivers/virtio/virtio_ring.c 2032 */;
	struct vring_virtqueue cocci_id/* drivers/virtio/virtio_ring.c 201 */;
	unsigned cocci_id/* drivers/virtio/virtio_ring.c 1982 */;
	unsigned int *cocci_id/* drivers/virtio/virtio_ring.c 1904 */;
	struct scatterlist *cocci_id/* drivers/virtio/virtio_ring.c 1781 */;
	void *cocci_id/* drivers/virtio/virtio_ring.c 1698 */;
	struct scatterlist *cocci_id/* drivers/virtio/virtio_ring.c 1694 */[];
	int cocci_id/* drivers/virtio/virtio_ring.c 1693 */;
	struct vring_desc_extra_packed cocci_id/* drivers/virtio/virtio_ring.c 1657 */;
	struct vring_desc_state_packed cocci_id/* drivers/virtio/virtio_ring.c 1643 */;
	struct vring_packed_desc_event cocci_id/* drivers/virtio/virtio_ring.c 1580 */;
	struct vring_packed_desc_event *cocci_id/* drivers/virtio/virtio_ring.c 1567 */;
	u16 cocci_id/* drivers/virtio/virtio_ring.c 1328 */;
	const struct vring_virtqueue *cocci_id/* drivers/virtio/virtio_ring.c 1327 */;
	u32 cocci_id/* drivers/virtio/virtio_ring.c 1307 */;
	struct vring_desc_state_packed *cocci_id/* drivers/virtio/virtio_ring.c 1284 */;
	void **cocci_id/* drivers/virtio/virtio_ring.c 1282 */;
	void cocci_id/* drivers/virtio/virtio_ring.c 1281 */;
	u32 *cocci_id/* drivers/virtio/virtio_ring.c 1257 */;
	union {
		struct {
			__le16 off_wrap;
			__le16 flags;
		};
		u32 u32;
	} cocci_id/* drivers/virtio/virtio_ring.c 1237 */;
	__le16 cocci_id/* drivers/virtio/virtio_ring.c 1104 */;
}
