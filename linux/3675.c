cocci_test_suite() {
	struct gsmi_device {
		struct platform_device *pdev;
		struct gsmi_buf *name_buf;
		struct gsmi_buf *data_buf;
		struct gsmi_buf *param_buf;
		spinlock_t lock;
		u16 smi_cmd;
		int handshake_type;
		struct dma_pool *dma_pool;
	} cocci_id/* drivers/firmware/google/gsmi.c 91 */;
	struct platform_driver cocci_id/* drivers/firmware/google/gsmi.c 859 */;
	struct platform_device *cocci_id/* drivers/firmware/google/gsmi.c 854 */;
	const struct dev_pm_ops cocci_id/* drivers/firmware/google/gsmi.c 849 */;
	struct gsmi_buf {
		u8 *start;
		size_t length;
		dma_addr_t handle;
		u32 address;
	} cocci_id/* drivers/firmware/google/gsmi.c 84 */;
	struct device *cocci_id/* drivers/firmware/google/gsmi.c 833 */;
	const struct platform_device_info cocci_id/* drivers/firmware/google/gsmi.c 789 */;
	const struct dmi_system_id cocci_id/* drivers/firmware/google/gsmi.c 729 */[]__initconst;
	u64 cocci_id/* drivers/firmware/google/gsmi.c 724 */;
	u32 __init cocci_id/* drivers/firmware/google/gsmi.c 722 */;
	char cocci_id/* drivers/firmware/google/gsmi.c 722 */[8];
	u64 __init cocci_id/* drivers/firmware/google/gsmi.c 699 */;
	unsigned cocci_id/* drivers/firmware/google/gsmi.c 699 */;
	struct notifier_block cocci_id/* drivers/firmware/google/gsmi.c 675 */;
	void *cocci_id/* drivers/firmware/google/gsmi.c 668 */;
	struct notifier_block *cocci_id/* drivers/firmware/google/gsmi.c 667 */;
	struct gsmi_log_entry_type_1 cocci_id/* drivers/firmware/google/gsmi.c 614 */;
	const struct attribute *cocci_id/* drivers/firmware/google/gsmi.c 606 */[];
	struct kobj_attribute cocci_id/* drivers/firmware/google/gsmi.c 601 */;
	const char *cocci_id/* drivers/firmware/google/gsmi.c 582 */;
	struct kobj_attribute *cocci_id/* drivers/firmware/google/gsmi.c 581 */;
	struct {
		u32 percentage;
		u32 data_type;
	} cocci_id/* drivers/firmware/google/gsmi.c 540 */;
	struct bin_attribute cocci_id/* drivers/firmware/google/gsmi.c 528 */;
	u32 *cocci_id/* drivers/firmware/google/gsmi.c 500 */;
	u32 cocci_id/* drivers/firmware/google/gsmi.c 498 */;
	unsigned long cocci_id/* drivers/firmware/google/gsmi.c 495 */;
	int cocci_id/* drivers/firmware/google/gsmi.c 494 */;
	struct gsmi_set_eventlog_param cocci_id/* drivers/firmware/google/gsmi.c 491 */;
	loff_t cocci_id/* drivers/firmware/google/gsmi.c 489 */;
	char *cocci_id/* drivers/firmware/google/gsmi.c 489 */;
	size_t cocci_id/* drivers/firmware/google/gsmi.c 489 */;
	struct bin_attribute *cocci_id/* drivers/firmware/google/gsmi.c 488 */;
	struct kobject *cocci_id/* drivers/firmware/google/gsmi.c 487 */;
	struct file *cocci_id/* drivers/firmware/google/gsmi.c 487 */;
	ssize_t cocci_id/* drivers/firmware/google/gsmi.c 487 */;
	const struct efivar_operations cocci_id/* drivers/firmware/google/gsmi.c 479 */;
	struct gsmi_get_next_var_param cocci_id/* drivers/firmware/google/gsmi.c 376 */;
	efi_guid_t *cocci_id/* drivers/firmware/google/gsmi.c 374 */;
	efi_char16_t *cocci_id/* drivers/firmware/google/gsmi.c 373 */;
	efi_status_t cocci_id/* drivers/firmware/google/gsmi.c 372 */;
	unsigned long *cocci_id/* drivers/firmware/google/gsmi.c 372 */;
	struct gsmi_nvram_var_param cocci_id/* drivers/firmware/google/gsmi.c 313 */;
	struct efivars cocci_id/* drivers/firmware/google/gsmi.c 306 */;
	u16 cocci_id/* drivers/firmware/google/gsmi.c 190 */;
	u8 cocci_id/* drivers/firmware/google/gsmi.c 188 */;
	struct gsmi_buf *cocci_id/* drivers/firmware/google/gsmi.c 148 */;
	void cocci_id/* drivers/firmware/google/gsmi.c 148 */;
	bool cocci_id/* drivers/firmware/google/gsmi.c 145 */;
	unsigned int cocci_id/* drivers/firmware/google/gsmi.c 134 */;
	struct gsmi_log_entry_type_1 {
		u16 type;
		u32 instance;
	}__packed cocci_id/* drivers/firmware/google/gsmi.c 124 */;
	struct gsmi_set_eventlog_param {
		u32 data_ptr;
		u32 data_len;
		u32 type;
	}__packed cocci_id/* drivers/firmware/google/gsmi.c 117 */;
	struct gsmi_get_next_var_param {
		u8 guid[GSMI_GUID_SIZE];
		u32 name_ptr;
		u32 name_len;
	}__packed cocci_id/* drivers/firmware/google/gsmi.c 111 */;
	struct gsmi_nvram_var_param {
		efi_guid_t guid;
		u32 name_ptr;
		u32 attributes;
		u32 data_len;
		u32 data_ptr;
	}__packed cocci_id/* drivers/firmware/google/gsmi.c 103 */;
	void __exit cocci_id/* drivers/firmware/google/gsmi.c 1022 */;
}
