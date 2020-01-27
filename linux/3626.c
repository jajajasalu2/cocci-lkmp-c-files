cocci_test_suite() {
	struct efivar_entry *cocci_id/* drivers/firmware/efi/efivars.c 83 */;
	char *cocci_id/* drivers/firmware/efi/efivars.c 83 */;
	ssize_t cocci_id/* drivers/firmware/efi/efivars.c 82 */;
	void *cocci_id/* drivers/firmware/efi/efivars.c 631 */;
	int cocci_id/* drivers/firmware/efi/efivars.c 63 */(struct efivar_entry *new_var);
	struct work_struct *cocci_id/* drivers/firmware/efi/efivars.c 592 */;
	struct efivar_entry cocci_id/* drivers/firmware/efi/efivars.c 58 */;
	struct bin_attribute *cocci_id/* drivers/firmware/efi/efivars.c 526 */;
	int cocci_id/* drivers/firmware/efi/efivars.c 523 */;
	struct efivar_attribute cocci_id/* drivers/firmware/efi/efivars.c 51 */;
	struct efivar_attribute {
		struct attribute attr;
		ssize_t (*show)(struct efivar_entry *entry, char *buf);
		ssize_t (*store)(struct efivar_entry *entry, const char *buf,
				 size_t count);
	} cocci_id/* drivers/firmware/efi/efivars.c 44 */;
	efi_guid_t cocci_id/* drivers/firmware/efi/efivars.c 428 */;
	u8 *cocci_id/* drivers/firmware/efi/efivars.c 361 */;
	u32 cocci_id/* drivers/firmware/efi/efivars.c 360 */;
	unsigned long cocci_id/* drivers/firmware/efi/efivars.c 359 */;
	efi_char16_t *cocci_id/* drivers/firmware/efi/efivars.c 358 */;
	bool cocci_id/* drivers/firmware/efi/efivars.c 357 */;
	loff_t cocci_id/* drivers/firmware/efi/efivars.c 352 */;
	struct file *cocci_id/* drivers/firmware/efi/efivars.c 350 */;
	struct compat_efi_variable {
		efi_char16_t VariableName[EFI_VAR_NAME_LEN / sizeof(efi_char16_t)];
		efi_guid_t VendorGuid;
		__u32 DataSize;
		__u8 Data[1024];
		__u32 Status;
		__u32 Attributes;
	}__packed cocci_id/* drivers/firmware/efi/efivars.c 35 */;
	struct kobj_type cocci_id/* drivers/firmware/efi/efivars.c 344 */;
	struct attribute *cocci_id/* drivers/firmware/efi/efivars.c 335 */[];
	const struct sysfs_ops cocci_id/* drivers/firmware/efi/efivars.c 318 */;
	const char *cocci_id/* drivers/firmware/efi/efivars.c 303 */;
	size_t cocci_id/* drivers/firmware/efi/efivars.c 303 */;
	struct kset *cocci_id/* drivers/firmware/efi/efivars.c 30 */;
	struct efivar_attribute *cocci_id/* drivers/firmware/efi/efivars.c 290 */;
	struct kobject *cocci_id/* drivers/firmware/efi/efivars.c 286 */;
	struct attribute *cocci_id/* drivers/firmware/efi/efivars.c 286 */;
	struct efi_variable cocci_id/* drivers/firmware/efi/efivars.c 221 */;
	struct efi_variable *cocci_id/* drivers/firmware/efi/efivars.c 177 */;
	struct compat_efi_variable *cocci_id/* drivers/firmware/efi/efivars.c 177 */;
	void cocci_id/* drivers/firmware/efi/efivars.c 176 */;
}
