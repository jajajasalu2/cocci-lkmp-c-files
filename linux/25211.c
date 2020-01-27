cocci_test_suite() {
	struct desc cocci_id/* tools/virtio/ringtest/ring.c 98 */;
	void **cocci_id/* tools/virtio/ringtest/ring.c 82 */;
	void cocci_id/* tools/virtio/ringtest/ring.c 77 */;
	struct host {
		unsigned used_idx;
		unsigned called_used_idx;
		unsigned char reserved[HOST_GUEST_PADDING - 4];
	} cocci_id/* tools/virtio/ringtest/ring.c 67 */;
	struct guest {
		unsigned avail_idx;
		unsigned last_used_idx;
		unsigned num_free;
		unsigned kicked_avail_idx;
		unsigned char reserved[HOST_GUEST_PADDING - 12];
	} cocci_id/* tools/virtio/ringtest/ring.c 59 */;
	struct event *cocci_id/* tools/virtio/ringtest/ring.c 57 */;
	struct desc *cocci_id/* tools/virtio/ringtest/ring.c 56 */;
	struct data {
		void *buf;
		void *data;
	} *cocci_id/* tools/virtio/ringtest/ring.c 51 */;
	struct event {
		unsigned short kick_index;
		unsigned char reserved0[HOST_GUEST_PADDING - 2];
		unsigned short call_index;
		unsigned char reserved1[HOST_GUEST_PADDING - 2];
	} cocci_id/* tools/virtio/ringtest/ring.c 44 */;
	struct desc {
		unsigned short flags;
		unsigned short index;
		unsigned len;
		unsigned long long addr;
	} cocci_id/* tools/virtio/ringtest/ring.c 33 */;
	bool cocci_id/* tools/virtio/ringtest/ring.c 219 */;
	unsigned short cocci_id/* tools/virtio/ringtest/ring.c 19 */;
	unsigned *cocci_id/* tools/virtio/ringtest/ring.c 143 */;
	unsigned long cocci_id/* tools/virtio/ringtest/ring.c 125 */;
	void *cocci_id/* tools/virtio/ringtest/ring.c 112 */;
	unsigned cocci_id/* tools/virtio/ringtest/ring.c 112 */;
	int cocci_id/* tools/virtio/ringtest/ring.c 112 */;
}
