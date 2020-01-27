cocci_test_suite() {
	struct virtrng_info cocci_id/* drivers/char/hw_random/virtio-rng.c 92 */;
	struct virtrng_info *cocci_id/* drivers/char/hw_random/virtio-rng.c 90 */;
	struct virtio_device *cocci_id/* drivers/char/hw_random/virtio-rng.c 87 */;
	int cocci_id/* drivers/char/hw_random/virtio-rng.c 87 */;
	struct hwrng *cocci_id/* drivers/char/hw_random/virtio-rng.c 79 */;
	bool cocci_id/* drivers/char/hw_random/virtio-rng.c 53 */;
	void *cocci_id/* drivers/char/hw_random/virtio-rng.c 53 */;
	struct scatterlist cocci_id/* drivers/char/hw_random/virtio-rng.c 43 */;
	u8 *cocci_id/* drivers/char/hw_random/virtio-rng.c 41 */;
	size_t cocci_id/* drivers/char/hw_random/virtio-rng.c 41 */;
	struct virtqueue *cocci_id/* drivers/char/hw_random/virtio-rng.c 29 */;
	void cocci_id/* drivers/char/hw_random/virtio-rng.c 29 */;
	struct virtio_driver cocci_id/* drivers/char/hw_random/virtio-rng.c 202 */;
	struct virtio_device_id cocci_id/* drivers/char/hw_random/virtio-rng.c 197 */[];
	struct virtrng_info {
		struct hwrng hwrng;
		struct virtqueue *vq;
		struct completion have_data;
		char name[25];
		unsigned int data_avail;
		int index;
		bool busy;
		bool hwrng_register_done;
		bool hwrng_removed;
	} cocci_id/* drivers/char/hw_random/virtio-rng.c 17 */;
	unsigned long cocci_id/* drivers/char/hw_random/virtio-rng.c 107 */;
	struct hwrng cocci_id/* drivers/char/hw_random/virtio-rng.c 104 */;
}
