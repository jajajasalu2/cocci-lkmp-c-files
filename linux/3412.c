cocci_test_suite() {
	struct virtio_mmio_vq_info {
		struct virtqueue *vq;
		struct list_head node;
	} cocci_id/* drivers/virtio/virtio_mmio.c 95 */;
	struct virtio_mmio_device {
		struct virtio_device vdev;
		struct platform_device *pdev;
		void __iomem *base;
		unsigned long version;
		spinlock_t lock;
		struct list_head virtqueues;
	} cocci_id/* drivers/virtio/virtio_mmio.c 83 */;
	struct virtio_mmio_device cocci_id/* drivers/virtio/virtio_mmio.c 81 */;
	void __exit cocci_id/* drivers/virtio/virtio_mmio.c 777 */;
	void cocci_id/* drivers/virtio/virtio_mmio.c 777 */;
	int __init cocci_id/* drivers/virtio/virtio_mmio.c 772 */;
	struct platform_driver cocci_id/* drivers/virtio/virtio_mmio.c 762 */;
	const struct acpi_device_id cocci_id/* drivers/virtio/virtio_mmio.c 755 */[];
	const struct of_device_id cocci_id/* drivers/virtio/virtio_mmio.c 748 */[];
	const struct kernel_param_ops cocci_id/* drivers/virtio/virtio_mmio.c 713 */;
	const struct kernel_param *cocci_id/* drivers/virtio/virtio_mmio.c 705 */;
	char *cocci_id/* drivers/virtio/virtio_mmio.c 705 */;
	unsigned long long cocci_id/* drivers/virtio/virtio_mmio.c 699 */;
	unsigned int cocci_id/* drivers/virtio/virtio_mmio.c 694 */;
	void *cocci_id/* drivers/virtio/virtio_mmio.c 691 */;
	long long int cocci_id/* drivers/virtio/virtio_mmio.c 641 */;
	struct resource cocci_id/* drivers/virtio/virtio_mmio.c 639 */[2];
	struct device cocci_id/* drivers/virtio/virtio_mmio.c 628 */;
	unsigned long cocci_id/* drivers/virtio/virtio_mmio.c 535 */;
	struct resource *cocci_id/* drivers/virtio/virtio_mmio.c 534 */;
	struct virtio_mmio_device *cocci_id/* drivers/virtio/virtio_mmio.c 533 */;
	struct platform_device *cocci_id/* drivers/virtio/virtio_mmio.c 531 */;
	int cocci_id/* drivers/virtio/virtio_mmio.c 531 */;
	struct virtio_device cocci_id/* drivers/virtio/virtio_mmio.c 521 */;
	struct virtio_device *cocci_id/* drivers/virtio/virtio_mmio.c 520 */;
	struct device *cocci_id/* drivers/virtio/virtio_mmio.c 518 */;
	const struct virtio_config_ops cocci_id/* drivers/virtio/virtio_mmio.c 503 */;
	const char *cocci_id/* drivers/virtio/virtio_mmio.c 496 */;
	struct irq_affinity *cocci_id/* drivers/virtio/virtio_mmio.c 463 */;
	const bool *cocci_id/* drivers/virtio/virtio_mmio.c 462 */;
	const char *constcocci_id/* drivers/virtio/virtio_mmio.c 461 */[];
	vq_callback_t *cocci_id/* drivers/virtio/virtio_mmio.c 460 */[];
	struct virtqueue *cocci_id/* drivers/virtio/virtio_mmio.c 459 */[];
	unsigned cocci_id/* drivers/virtio/virtio_mmio.c 458 */;
	void (*cocci_id/* drivers/virtio/virtio_mmio.c 349 */)(struct virtqueue *vq);
	struct virtio_mmio_vq_info *cocci_id/* drivers/virtio/virtio_mmio.c 315 */;
	struct virtqueue *cocci_id/* drivers/virtio/virtio_mmio.c 312 */;
	irqreturn_t cocci_id/* drivers/virtio/virtio_mmio.c 283 */;
	bool cocci_id/* drivers/virtio/virtio_mmio.c 272 */;
	const u8 *cocci_id/* drivers/virtio/virtio_mmio.c 199 */;
	const void *cocci_id/* drivers/virtio/virtio_mmio.c 190 */;
	u8 *cocci_id/* drivers/virtio/virtio_mmio.c 157 */;
	__le32 cocci_id/* drivers/virtio/virtio_mmio.c 154 */;
	__le16 cocci_id/* drivers/virtio/virtio_mmio.c 153 */;
	u8 cocci_id/* drivers/virtio/virtio_mmio.c 152 */;
	void __iomem *cocci_id/* drivers/virtio/virtio_mmio.c 151 */;
	u32 cocci_id/* drivers/virtio/virtio_mmio.c 141 */;
	u64 cocci_id/* drivers/virtio/virtio_mmio.c 107 */;
}
