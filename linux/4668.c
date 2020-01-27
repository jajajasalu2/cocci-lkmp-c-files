cocci_test_suite() {
	u32 *cocci_id/* drivers/misc/cxl/flash.c 71 */;
	struct property *cocci_id/* drivers/misc/cxl/flash.c 70 */;
	const char *cocci_id/* drivers/misc/cxl/flash.c 67 */;
	s32 cocci_id/* drivers/misc/cxl/flash.c 53 */;
	char *cocci_id/* drivers/misc/cxl/flash.c 53 */;
	dev_t cocci_id/* drivers/misc/cxl/flash.c 522 */;
	struct cxl *cocci_id/* drivers/misc/cxl/flash.c 520 */;
	int cocci_id/* drivers/misc/cxl/flash.c 520 */;
	void cocci_id/* drivers/misc/cxl/flash.c 515 */;
	const struct file_operations cocci_id/* drivers/misc/cxl/flash.c 507 */;
	unsigned long cocci_id/* drivers/misc/cxl/flash.c 485 */;
	struct inode *cocci_id/* drivers/misc/cxl/flash.c 476 */;
	struct file *cocci_id/* drivers/misc/cxl/flash.c 476 */;
	struct cxl_adapter_image __user *cocci_id/* drivers/misc/cxl/flash.c 467 */;
	unsigned int cocci_id/* drivers/misc/cxl/flash.c 458 */;
	long cocci_id/* drivers/misc/cxl/flash.c 458 */;
	unsigned long *cocci_id/* drivers/misc/cxl/flash.c 433 */;
	struct sg_list *cocci_id/* drivers/misc/cxl/flash.c 426 */;
	struct update_nodes_workarea {
		__be32 state;
		__be64 unit_address;
		__be32 reserved;
	}__packed cocci_id/* drivers/misc/cxl/flash.c 40 */;
	struct ai_header cocci_id/* drivers/misc/cxl/flash.c 399 */;
	struct cxl_adapter_image cocci_id/* drivers/misc/cxl/flash.c 374 */;
	struct update_props_workarea {
		__be32 phandle;
		__be32 state;
		__be64 reserved;
		__be32 nprops;
	}__packed cocci_id/* drivers/misc/cxl/flash.c 33 */;
	u64 cocci_id/* drivers/misc/cxl/flash.c 30 */;
	unsigned long *cocci_id/* drivers/misc/cxl/flash.c 28 */[CXL_AI_MAX_ENTRIES];
	struct semaphore cocci_id/* drivers/misc/cxl/flash.c 27 */;
	void *cocci_id/* drivers/misc/cxl/flash.c 234 */;
	struct ai_header *cocci_id/* drivers/misc/cxl/flash.c 232 */;
	size_t cocci_id/* drivers/misc/cxl/flash.c 231 */;
	struct cxl_adapter_image *cocci_id/* drivers/misc/cxl/flash.c 229 */;
	long (*cocci_id/* drivers/misc/cxl/flash.c 228 */)(u64, u64, u64,
							   u64 *);
	__be32 *cocci_id/* drivers/misc/cxl/flash.c 178 */;
	u32 cocci_id/* drivers/misc/cxl/flash.c 176 */;
	struct update_nodes_workarea *cocci_id/* drivers/misc/cxl/flash.c 175 */;
	struct ai_header {
		u16 version;
		u8 reserved0[6];
		u16 vendor;
		u16 device;
		u16 subsystem_vendor;
		u16 subsystem;
		u64 image_offset;
		u64 image_length;
		u8 reserved1[96];
	} cocci_id/* drivers/misc/cxl/flash.c 15 */;
	struct device_node *cocci_id/* drivers/misc/cxl/flash.c 109 */;
	struct update_props_workarea *cocci_id/* drivers/misc/cxl/flash.c 108 */;
	__be32 cocci_id/* drivers/misc/cxl/flash.c 106 */;
}
