cocci_test_suite() {
	struct coreboot_device *cocci_id/* drivers/firmware/google/memconsole-coreboot.c 69 */;
	struct seg cocci_id/* drivers/firmware/google/memconsole-coreboot.c 55 */;
	int cocci_id/* drivers/firmware/google/memconsole-coreboot.c 50 */;
	struct seg {
		u32 phys;
		u32 len;
	} cocci_id/* drivers/firmware/google/memconsole-coreboot.c 45 */[2];
	loff_t cocci_id/* drivers/firmware/google/memconsole-coreboot.c 40 */;
	char *cocci_id/* drivers/firmware/google/memconsole-coreboot.c 40 */;
	ssize_t cocci_id/* drivers/firmware/google/memconsole-coreboot.c 40 */;
	size_t cocci_id/* drivers/firmware/google/memconsole-coreboot.c 40 */;
	u32 cocci_id/* drivers/firmware/google/memconsole-coreboot.c 31 */;
	struct cbmem_cons *cocci_id/* drivers/firmware/google/memconsole-coreboot.c 30 */;
	struct cbmem_cons {
		u32 size_dont_access_after_boot;
		u32 cursor;
		u8 body[0];
	}__packed cocci_id/* drivers/firmware/google/memconsole-coreboot.c 21 */;
	struct coreboot_driver cocci_id/* drivers/firmware/google/memconsole-coreboot.c 101 */;
}
