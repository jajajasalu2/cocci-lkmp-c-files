cocci_test_suite() {
	void *cocci_id/* drivers/firmware/google/vpd.c 97 */;
	u32 cocci_id/* drivers/firmware/google/vpd.c 95 */;
	const u8 *cocci_id/* drivers/firmware/google/vpd.c 95 */;
	s32 cocci_id/* drivers/firmware/google/vpd.c 81 */;
	struct vpd_attrib_info *cocci_id/* drivers/firmware/google/vpd.c 62 */;
	loff_t cocci_id/* drivers/firmware/google/vpd.c 60 */;
	size_t cocci_id/* drivers/firmware/google/vpd.c 60 */;
	struct bin_attribute *cocci_id/* drivers/firmware/google/vpd.c 59 */;
	char *cocci_id/* drivers/firmware/google/vpd.c 59 */;
	struct kobject *cocci_id/* drivers/firmware/google/vpd.c 58 */;
	struct file *cocci_id/* drivers/firmware/google/vpd.c 58 */;
	ssize_t cocci_id/* drivers/firmware/google/vpd.c 58 */;
	struct vpd_section cocci_id/* drivers/firmware/google/vpd.c 55 */;
	struct vpd_attrib_info {
		char *key;
		const char *value;
		struct bin_attribute bin_attr;
		struct list_head list;
	} cocci_id/* drivers/firmware/google/vpd.c 48 */;
	struct vpd_section {
		bool enabled;
		const char *name;
		char *raw_name;
		struct kobject *kobj;
		char *baseaddr;
		struct bin_attribute bin_attr;
		struct list_head attribs;
	} cocci_id/* drivers/firmware/google/vpd.c 38 */;
	struct coreboot_driver cocci_id/* drivers/firmware/google/vpd.c 311 */;
	struct vpd_cbmem {
		u32 magic;
		u32 version;
		u32 ro_size;
		u32 rw_size;
		u8 blob[0];
	} cocci_id/* drivers/firmware/google/vpd.c 30 */;
	struct coreboot_device *cocci_id/* drivers/firmware/google/vpd.c 284 */;
	int cocci_id/* drivers/firmware/google/vpd.c 284 */;
	struct vpd_cbmem cocci_id/* drivers/firmware/google/vpd.c 250 */;
	struct vpd_cbmem *cocci_id/* drivers/firmware/google/vpd.c 249 */;
	phys_addr_t cocci_id/* drivers/firmware/google/vpd.c 183 */;
	const char *cocci_id/* drivers/firmware/google/vpd.c 182 */;
	void cocci_id/* drivers/firmware/google/vpd.c 146 */;
	struct vpd_section *cocci_id/* drivers/firmware/google/vpd.c 100 */;
}
