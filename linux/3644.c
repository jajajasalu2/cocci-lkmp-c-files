cocci_test_suite() {
	bool *cocci_id/* drivers/firmware/efi/vars.c 959 */;
	unsigned long *cocci_id/* drivers/firmware/efi/vars.c 892 */;
	void *cocci_id/* drivers/firmware/efi/vars.c 892 */;
	u32 *cocci_id/* drivers/firmware/efi/vars.c 891 */;
	u16 cocci_id/* drivers/firmware/efi/vars.c 87 */;
	bool cocci_id/* drivers/firmware/efi/vars.c 815 */;
	efi_guid_t cocci_id/* drivers/firmware/efi/vars.c 814 */;
	efi_status_t cocci_id/* drivers/firmware/efi/vars.c 588 */;
	struct efivar_entry *cocci_id/* drivers/firmware/efi/vars.c 586 */;
	int cocci_id/* drivers/firmware/efi/vars.c 586 */;
	struct efi_generic_dev_path *cocci_id/* drivers/firmware/efi/vars.c 43 */;
	int (*cocci_id/* drivers/firmware/efi/vars.c 426 */)(efi_char16_t *,
							     efi_guid_t,
							     unsigned long,
							     void *);
	char *cocci_id/* drivers/firmware/efi/vars.c 392 */;
	efi_char16_t cocci_id/* drivers/firmware/efi/vars.c 391 */;
	size_t cocci_id/* drivers/firmware/efi/vars.c 391 */;
	efi_guid_t *cocci_id/* drivers/firmware/efi/vars.c 388 */;
	efi_char16_t *cocci_id/* drivers/firmware/efi/vars.c 388 */;
	void cocci_id/* drivers/firmware/efi/vars.c 388 */;
	const struct efivar_operations *cocci_id/* drivers/firmware/efi/vars.c 308 */;
	u32 cocci_id/* drivers/firmware/efi/vars.c 306 */;
	unsigned long cocci_id/* drivers/firmware/efi/vars.c 306 */;
	const char *cocci_id/* drivers/firmware/efi/vars.c 257 */;
	struct efivars *cocci_id/* drivers/firmware/efi/vars.c 25 */;
	u8 *cocci_id/* drivers/firmware/efi/vars.c 241 */;
	char cocci_id/* drivers/firmware/efi/vars.c 216 */;
	int *cocci_id/* drivers/firmware/efi/vars.c 213 */;
	const struct variable_validate cocci_id/* drivers/firmware/efi/vars.c 180 */[];
	struct variable_validate {
		efi_guid_t vendor;
		char *name;
		bool (*validate)(efi_char16_t *var_name, int match, u8 *data,
				 unsigned long len);
	} cocci_id/* drivers/firmware/efi/vars.c 162 */;
	struct kobject *cocci_id/* drivers/firmware/efi/vars.c 1151 */;
	struct efivar_entry **cocci_id/* drivers/firmware/efi/vars.c 1087 */;
	struct list_head *cocci_id/* drivers/firmware/efi/vars.c 1086 */;
	int (*cocci_id/* drivers/firmware/efi/vars.c 1085 */)(struct efivar_entry *,
							      void *);
}
