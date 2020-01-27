cocci_test_suite() {
	struct esre_attribute *cocci_id/* drivers/firmware/efi/esrt.c 96 */;
	struct attribute *cocci_id/* drivers/firmware/efi/esrt.c 93 */;
	char *cocci_id/* drivers/firmware/efi/esrt.c 93 */;
	struct kobject *cocci_id/* drivers/firmware/efi/esrt.c 92 */;
	ssize_t cocci_id/* drivers/firmware/efi/esrt.c 92 */;
	struct esre_entry cocci_id/* drivers/firmware/efi/esrt.c 84 */;
	struct esre_attribute {
		struct attribute attr;
		ssize_t (*show)(struct esre_entry *entry, char *buf);
		ssize_t (*store)(struct esre_entry *entry, const char *buf,
				 size_t count);
	} cocci_id/* drivers/firmware/efi/esrt.c 75 */;
	struct esre_entry {
		union {
			struct efi_system_resource_entry_v1 *esre1;
		} esre;
		struct kobject kobj;
		struct list_head list;
	} cocci_id/* drivers/firmware/efi/esrt.c 62 */;
	struct efi_system_resource_table *cocci_id/* drivers/firmware/efi/esrt.c 60 */;
	struct efi_system_resource_table {
		u32 fw_resource_count;
		u32 fw_resource_count_max;
		u64 fw_resource_version;
		u8 entries[];
	} cocci_id/* drivers/firmware/efi/esrt.c 50 */;
	int __init cocci_id/* drivers/firmware/efi/esrt.c 379 */;
	struct esre_entry *cocci_id/* drivers/firmware/efi/esrt.c 372 */;
	void cocci_id/* drivers/firmware/efi/esrt.c 370 */;
	struct efi_system_resource_entry_v1 {
		efi_guid_t fw_class;
		u32 fw_type;
		u32 fw_version;
		u32 lowest_supported_fw_version;
		u32 capsule_flags;
		u32 last_attempt_version;
		u32 last_attempt_status;
	} cocci_id/* drivers/firmware/efi/esrt.c 31 */;
	phys_addr_t cocci_id/* drivers/firmware/efi/esrt.c 247 */;
	int cocci_id/* drivers/firmware/efi/esrt.c 246 */;
	efi_memory_desc_t cocci_id/* drivers/firmware/efi/esrt.c 245 */;
	size_t cocci_id/* drivers/firmware/efi/esrt.c 244 */;
	struct efi_system_resource_entry_v1 *cocci_id/* drivers/firmware/efi/esrt.c 243 */;
	struct efi_system_resource_table cocci_id/* drivers/firmware/efi/esrt.c 242 */;
	void *cocci_id/* drivers/firmware/efi/esrt.c 241 */;
	void __init cocci_id/* drivers/firmware/efi/esrt.c 239 */;
	const struct attribute_group cocci_id/* drivers/firmware/efi/esrt.c 231 */;
	umode_t cocci_id/* drivers/firmware/efi/esrt.c 223 */;
	struct kset *cocci_id/* drivers/firmware/efi/esrt.c 165 */;
	struct kobj_type cocci_id/* drivers/firmware/efi/esrt.c 157 */;
	struct attribute *cocci_id/* drivers/firmware/efi/esrt.c 139 */[];
	struct esre_attribute cocci_id/* drivers/firmware/efi/esrt.c 121 */;
	const struct sysfs_ops cocci_id/* drivers/firmware/efi/esrt.c 105 */;
}
