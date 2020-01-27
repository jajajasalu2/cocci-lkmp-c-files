cocci_test_suite() {
	struct device_attribute cocci_id/* arch/powerpc/platforms/pseries/vio.c 980 */;
	ssize_t cocci_id/* arch/powerpc/platforms/pseries/vio.c 976 */(struct device *dev,
								       struct device_attribute *attr,
								       char *buf);
	ssize_t cocci_id/* arch/powerpc/platforms/pseries/vio.c 975 */(struct device *,
								       struct device_attribute *,
								       char *);
	size_t cocci_id/* arch/powerpc/platforms/pseries/vio.c 948 */;
	struct vio_dev *cocci_id/* arch/powerpc/platforms/pseries/vio.c 943 */;
	struct device_attribute *cocci_id/* arch/powerpc/platforms/pseries/vio.c 941 */;
	char *cocci_id/* arch/powerpc/platforms/pseries/vio.c 941 */;
	struct device *cocci_id/* arch/powerpc/platforms/pseries/vio.c 940 */;
	ssize_t cocci_id/* arch/powerpc/platforms/pseries/vio.c 940 */;
	struct hvcall_mpp_data cocci_id/* arch/powerpc/platforms/pseries/vio.c 889 */;
	struct vio_cmo {
		spinlock_t lock;
		struct delayed_work balance_q;
		struct list_head device_list;
		size_t entitled;
		struct vio_cmo_pool reserve;
		struct vio_cmo_pool excess;
		size_t spare;
		size_t min;
		size_t desired;
		size_t curr;
		size_t high;
	} cocci_id/* arch/powerpc/platforms/pseries/vio.c 86 */;
	struct vio_cmo_dev_entry cocci_id/* arch/powerpc/platforms/pseries/vio.c 738 */;
	bool cocci_id/* arch/powerpc/platforms/pseries/vio.c 703 */;
	struct vio_cmo_dev_entry {
		struct vio_dev *viodev;
		struct list_head list;
	} cocci_id/* arch/powerpc/platforms/pseries/vio.c 66 */;
	const struct dma_map_ops cocci_id/* arch/powerpc/platforms/pseries/vio.c 599 */;
	struct scatterlist *cocci_id/* arch/powerpc/platforms/pseries/vio.c 548 */;
	enum dma_data_direction cocci_id/* arch/powerpc/platforms/pseries/vio.c 514 */;
	struct page *cocci_id/* arch/powerpc/platforms/pseries/vio.c 512 */;
	dma_addr_t cocci_id/* arch/powerpc/platforms/pseries/vio.c 503 */;
	struct vio_cmo_pool {
		size_t size;
		size_t free;
	} cocci_id/* arch/powerpc/platforms/pseries/vio.c 49 */;
	gfp_t cocci_id/* arch/powerpc/platforms/pseries/vio.c 480 */;
	dma_addr_t *cocci_id/* arch/powerpc/platforms/pseries/vio.c 480 */;
	void *cocci_id/* arch/powerpc/platforms/pseries/vio.c 479 */;
	struct vio_cmo cocci_id/* arch/powerpc/platforms/pseries/vio.c 392 */;
	struct vio_cmo_dev_entry *cocci_id/* arch/powerpc/platforms/pseries/vio.c 387 */;
	struct vio_cmo *cocci_id/* arch/powerpc/platforms/pseries/vio.c 385 */;
	struct work_struct *cocci_id/* arch/powerpc/platforms/pseries/vio.c 383 */;
	struct vio_dev cocci_id/* arch/powerpc/platforms/pseries/vio.c 35 */;
	uint32_t cocci_id/* arch/powerpc/platforms/pseries/vio.c 1668 */;
	char cocci_id/* arch/powerpc/platforms/pseries/vio.c 1653 */[20];
	const void *cocci_id/* arch/powerpc/platforms/pseries/vio.c 1623 */;
	int *cocci_id/* arch/powerpc/platforms/pseries/vio.c 1623 */;
	struct bus_type cocci_id/* arch/powerpc/platforms/pseries/vio.c 1605 */;
	struct kobj_uevent_env *cocci_id/* arch/powerpc/platforms/pseries/vio.c 1588 */;
	const struct vio_device_id *cocci_id/* arch/powerpc/platforms/pseries/vio.c 1583 */;
	struct device_driver *cocci_id/* arch/powerpc/platforms/pseries/vio.c 1579 */;
	const struct vio_dev *cocci_id/* arch/powerpc/platforms/pseries/vio.c 1544 */;
	struct device_node *cocci_id/* arch/powerpc/platforms/pseries/vio.c 1535 */;
	int __init cocci_id/* arch/powerpc/platforms/pseries/vio.c 1485 */;
	void cocci_id/* arch/powerpc/platforms/pseries/vio.c 1485 */;
	unsigned int cocci_id/* arch/powerpc/platforms/pseries/vio.c 1377 */;
	enum vio_dev_family cocci_id/* arch/powerpc/platforms/pseries/vio.c 1332 */;
	const char *cocci_id/* arch/powerpc/platforms/pseries/vio.c 1282 */;
	struct vio_driver *cocci_id/* arch/powerpc/platforms/pseries/vio.c 1281 */;
	struct module *cocci_id/* arch/powerpc/platforms/pseries/vio.c 1281 */;
	int cocci_id/* arch/powerpc/platforms/pseries/vio.c 1281 */;
	const __be32 *cocci_id/* arch/powerpc/platforms/pseries/vio.c 1166 */;
	struct iommu_table *cocci_id/* arch/powerpc/platforms/pseries/vio.c 1164 */;
	struct property *cocci_id/* arch/powerpc/platforms/pseries/vio.c 115 */;
	long cocci_id/* arch/powerpc/platforms/pseries/vio.c 1110 */;
	struct vio_pfo_op *cocci_id/* arch/powerpc/platforms/pseries/vio.c 1106 */;
	struct attribute *cocci_id/* arch/powerpc/platforms/pseries/vio.c 1045 */[];
	unsigned long cocci_id/* arch/powerpc/platforms/pseries/vio.c 1035 */;
	struct bus_type *cocci_id/* arch/powerpc/platforms/pseries/vio.c 1027 */;
}
