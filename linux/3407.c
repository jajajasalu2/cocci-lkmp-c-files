cocci_test_suite() {
	u16 cocci_id/* drivers/virtio/virtio_input.c 59 */;
	s32 cocci_id/* drivers/virtio/virtio_input.c 59 */;
	struct virtio_driver cocci_id/* drivers/virtio/virtio_input.c 370 */;
	struct virtio_device_id cocci_id/* drivers/virtio/virtio_input.c 365 */[];
	unsigned int cocci_id/* drivers/virtio/virtio_input.c 362 */[];
	struct virtio_device *cocci_id/* drivers/virtio/virtio_input.c 333 */;
	void *cocci_id/* drivers/virtio/virtio_input.c 317 */;
	struct virtqueue *cocci_id/* drivers/virtio/virtio_input.c 31 */;
	struct scatterlist cocci_id/* drivers/virtio/virtio_input.c 25 */[1];
	struct virtio_input_devids cocci_id/* drivers/virtio/virtio_input.c 245 */;
	struct virtio_input_event *cocci_id/* drivers/virtio/virtio_input.c 23 */;
	size_t cocci_id/* drivers/virtio/virtio_input.c 205 */;
	unsigned long cocci_id/* drivers/virtio/virtio_input.c 188 */;
	const char *constcocci_id/* drivers/virtio/virtio_input.c 174 */[];
	vq_callback_t *cocci_id/* drivers/virtio/virtio_input.c 172 */[];
	struct virtqueue *cocci_id/* drivers/virtio/virtio_input.c 171 */[2];
	struct virtio_input_config cocci_id/* drivers/virtio/virtio_input.c 160 */;
	u32 cocci_id/* drivers/virtio/virtio_input.c 157 */;
	struct virtio_input *cocci_id/* drivers/virtio/virtio_input.c 155 */;
	int cocci_id/* drivers/virtio/virtio_input.c 155 */;
	void cocci_id/* drivers/virtio/virtio_input.c 155 */;
	u8 cocci_id/* drivers/virtio/virtio_input.c 126 */;
	u8 *cocci_id/* drivers/virtio/virtio_input.c 125 */;
	unsigned long *cocci_id/* drivers/virtio/virtio_input.c 122 */;
	unsigned int cocci_id/* drivers/virtio/virtio_input.c 122 */;
	struct input_dev *cocci_id/* drivers/virtio/virtio_input.c 102 */;
	struct virtio_input {
		struct virtio_device *vdev;
		struct input_dev *idev;
		char name[64];
		char serial[64];
		char phys[64];
		struct virtqueue *evt,*sts;
		struct virtio_input_event evts[64];
		spinlock_t lock;
		bool ready;
	} cocci_id/* drivers/virtio/virtio_input.c 10 */;
}
