cocci_test_suite() {
	struct efi_boot_memmap cocci_id/* drivers/firmware/efi/libstub/random.c 95 */;
	int cocci_id/* drivers/firmware/efi/libstub/random.c 94 */;
	efi_memory_desc_t *cocci_id/* drivers/firmware/efi/libstub/random.c 93 */;
	unsigned long *cocci_id/* drivers/firmware/efi/libstub/random.c 87 */;
	u64 cocci_id/* drivers/firmware/efi/libstub/random.c 56 */;
	void **cocci_id/* drivers/firmware/efi/libstub/random.c 39 */;
	struct efi_rng_protocol *cocci_id/* drivers/firmware/efi/libstub/random.c 36 */;
	efi_guid_t cocci_id/* drivers/firmware/efi/libstub/random.c 34 */;
	u8 *cocci_id/* drivers/firmware/efi/libstub/random.c 32 */;
	unsigned long cocci_id/* drivers/firmware/efi/libstub/random.c 32 */;
	efi_status_t cocci_id/* drivers/firmware/efi/libstub/random.c 31 */;
	efi_system_table_t *cocci_id/* drivers/firmware/efi/libstub/random.c 31 */;
	struct efi_rng_protocol {
		efi_status_t (*get_info)(struct efi_rng_protocol *,
					 unsigned long *, efi_guid_t *);
		efi_status_t (*get_rng)(struct efi_rng_protocol *,
					efi_guid_t *, unsigned long, u8 *out);
	} cocci_id/* drivers/firmware/efi/libstub/random.c 24 */;
	struct {
		u64 get_info;
		u64 get_rng;
	} cocci_id/* drivers/firmware/efi/libstub/random.c 19 */;
	struct linux_efi_random_seed *cocci_id/* drivers/firmware/efi/libstub/random.c 166 */;
	struct {
		u32 get_info;
		u32 get_rng;
	} cocci_id/* drivers/firmware/efi/libstub/random.c 14 */;
	efi_physical_addr_t cocci_id/* drivers/firmware/efi/libstub/random.c 137 */;
	u16 cocci_id/* drivers/firmware/efi/libstub/random.c 122 */;
	struct efi_rng_protocol cocci_id/* drivers/firmware/efi/libstub/random.c 12 */;
	void *cocci_id/* drivers/firmware/efi/libstub/random.c 113 */;
}
