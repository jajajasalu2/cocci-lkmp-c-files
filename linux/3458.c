cocci_test_suite() {
	struct hv_uio_private_data *cocci_id/* drivers/uio/uio_hv_generic.c 97 */;
	struct hv_device *cocci_id/* drivers/uio/uio_hv_generic.c 96 */;
	struct vmbus_channel *cocci_id/* drivers/uio/uio_hv_generic.c 95 */;
	void *cocci_id/* drivers/uio/uio_hv_generic.c 93 */;
	void cocci_id/* drivers/uio/uio_hv_generic.c 93 */;
	s32 cocci_id/* drivers/uio/uio_hv_generic.c 79 */;
	struct uio_info *cocci_id/* drivers/uio/uio_hv_generic.c 79 */;
	int cocci_id/* drivers/uio/uio_hv_generic.c 78 */;
	struct hv_uio_private_data {
		struct uio_info info;
		struct hv_device *device;
		atomic_t refcnt;
		void *recv_buf;
		u32 recv_gpadl;
		char recv_name[32];
		void *send_buf;
		u32 send_gpadl;
		char send_name[32];
	} cocci_id/* drivers/uio/uio_hv_generic.c 55 */;
	enum hv_uio_map{TXRX_RING_MAP=0, INT_PAGE_MAP, MON_PAGE_MAP, RECV_BUF_MAP, SEND_BUF_MAP,} cocci_id/* drivers/uio/uio_hv_generic.c 47 */;
	void __exit cocci_id/* drivers/uio/uio_hv_generic.c 386 */;
	int __init cocci_id/* drivers/uio/uio_hv_generic.c 380 */;
	struct hv_driver cocci_id/* drivers/uio/uio_hv_generic.c 373 */;
	uintptr_t cocci_id/* drivers/uio/uio_hv_generic.c 274 */;
	const struct hv_vmbus_device_id *cocci_id/* drivers/uio/uio_hv_generic.c 237 */;
	struct hv_uio_private_data cocci_id/* drivers/uio/uio_hv_generic.c 200 */;
	struct inode *cocci_id/* drivers/uio/uio_hv_generic.c 197 */;
	const size_t cocci_id/* drivers/uio/uio_hv_generic.c 156 */;
	struct device *cocci_id/* drivers/uio/uio_hv_generic.c 155 */;
	const struct bin_attribute cocci_id/* drivers/uio/uio_hv_generic.c 141 */;
	struct vmbus_channel cocci_id/* drivers/uio/uio_hv_generic.c 131 */;
	struct vm_area_struct *cocci_id/* drivers/uio/uio_hv_generic.c 128 */;
	struct bin_attribute *cocci_id/* drivers/uio/uio_hv_generic.c 127 */;
	struct kobject *cocci_id/* drivers/uio/uio_hv_generic.c 126 */;
	struct file *cocci_id/* drivers/uio/uio_hv_generic.c 126 */;
}
