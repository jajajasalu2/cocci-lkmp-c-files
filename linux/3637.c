cocci_test_suite() {
	struct kobj_type __refdata cocci_id/* drivers/firmware/efi/runtime-map.c 95 */;
	const struct sysfs_ops cocci_id/* drivers/firmware/efi/runtime-map.c 83 */;
	struct attribute *cocci_id/* drivers/firmware/efi/runtime-map.c 74 */[];
	struct map_attribute cocci_id/* drivers/firmware/efi/runtime-map.c 69 */;
	struct map_attribute *cocci_id/* drivers/firmware/efi/runtime-map.c 60 */;
	char *cocci_id/* drivers/firmware/efi/runtime-map.c 57 */;
	struct attribute *cocci_id/* drivers/firmware/efi/runtime-map.c 56 */;
	ssize_t cocci_id/* drivers/firmware/efi/runtime-map.c 56 */;
	struct efi_runtime_map_entry cocci_id/* drivers/firmware/efi/runtime-map.c 53 */;
	struct map_attribute {
		struct attribute attr;
		ssize_t (*show)(struct efi_runtime_map_entry *entry,
				char *buf);
	} cocci_id/* drivers/firmware/efi/runtime-map.c 23 */;
	struct efi_runtime_map_entry **cocci_id/* drivers/firmware/efi/runtime-map.c 21 */;
	struct efi_runtime_map_entry {
		efi_memory_desc_t md;
		struct kobject kobj;
	} cocci_id/* drivers/firmware/efi/runtime-map.c 16 */;
	int __init cocci_id/* drivers/firmware/efi/runtime-map.c 159 */;
	void *cocci_id/* drivers/firmware/efi/runtime-map.c 148 */;
	size_t cocci_id/* drivers/firmware/efi/runtime-map.c 148 */;
	void cocci_id/* drivers/firmware/efi/runtime-map.c 143 */;
	efi_memory_desc_t cocci_id/* drivers/firmware/efi/runtime-map.c 123 */;
	efi_memory_desc_t *cocci_id/* drivers/firmware/efi/runtime-map.c 105 */;
	struct kobject *cocci_id/* drivers/firmware/efi/runtime-map.c 104 */;
	int cocci_id/* drivers/firmware/efi/runtime-map.c 104 */;
	struct efi_runtime_map_entry *cocci_id/* drivers/firmware/efi/runtime-map.c 103 */;
	struct kset *cocci_id/* drivers/firmware/efi/runtime-map.c 101 */;
}
