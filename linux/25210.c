cocci_test_suite() {
	void *cocci_id/* tools/virtio/ringtest/virtio_ring_0_9.c 99 */;
	unsigned cocci_id/* tools/virtio/ringtest/virtio_ring_0_9.c 99 */;
	int cocci_id/* tools/virtio/ringtest/virtio_ring_0_9.c 99 */;
	void cocci_id/* tools/virtio/ringtest/virtio_ring_0_9.c 64 */;
	struct host {
		unsigned short used_idx;
		unsigned short called_used_idx;
		unsigned char reserved[HOST_GUEST_PADDING - 4];
	} cocci_id/* tools/virtio/ringtest/virtio_ring_0_9.c 54 */;
	struct guest {
		unsigned short avail_idx;
		unsigned short last_used_idx;
		unsigned short num_free;
		unsigned short kicked_avail_idx;
#ifndef INORDER
		unsigned short free_head;
#else
		unsigned short reserved_free_head;
#endif
		unsigned char reserved[HOST_GUEST_PADDING - 10];
	} cocci_id/* tools/virtio/ringtest/virtio_ring_0_9.c 41 */;
	bool cocci_id/* tools/virtio/ringtest/virtio_ring_0_9.c 258 */;
	struct vring cocci_id/* tools/virtio/ringtest/virtio_ring_0_9.c 22 */;
	unsigned short cocci_id/* tools/virtio/ringtest/virtio_ring_0_9.c 199 */;
	struct data {
		void *data;
	} *cocci_id/* tools/virtio/ringtest/virtio_ring_0_9.c 18 */;
	void **cocci_id/* tools/virtio/ringtest/virtio_ring_0_9.c 152 */;
	unsigned *cocci_id/* tools/virtio/ringtest/virtio_ring_0_9.c 152 */;
	unsigned long cocci_id/* tools/virtio/ringtest/virtio_ring_0_9.c 119 */;
	struct vring_desc *cocci_id/* tools/virtio/ringtest/virtio_ring_0_9.c 105 */;
}
