cocci_test_suite() {
	struct image_header_t {
		uint16_t magic;
		uint16_t version;
		uint32_t size;
	} cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 94 */;
	struct image_data_t {
		int status;
		void *data;
		uint32_t size;
	} cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 87 */;
	enum{IMAGE_INVALID, IMAGE_LOADING, IMAGE_READY,} cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 80 */;
	void __init cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 519 */;
	struct attribute_group cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 515 */;
	struct attribute *cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 508 */[];
	struct kobj_attribute cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 502 */;
	const struct bin_attribute cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 493 */;
	loff_t cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 436 */;
	struct bin_attribute *cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 435 */;
	struct kobject *cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 434 */;
	struct file *cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 434 */;
	ssize_t cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 434 */;
	void *cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 388 */;
	char *cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 386 */;
	int cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 386 */;
	size_t cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 386 */;
	void cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 366 */;
	struct update_flash_t *const cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 323 */;
	int64_t cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 280 */;
	unsigned long cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 279 */;
	struct opal_sg_list *cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 278 */;
	uint8_t cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 256 */;
	const char *cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 254 */;
	struct manage_flash_t *const cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 238 */;
	struct kobj_attribute *cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 236 */;
	struct validate_flash_t *cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 153 */;
	__be32 cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 134 */;
	long cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 132 */;
	struct update_flash_t cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 121 */;
	struct manage_flash_t cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 118 */;
	struct validate_flash_t cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 117 */;
	struct image_data_t cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 116 */;
	struct image_header_t cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 115 */;
	struct update_flash_t {
		int status;
	} cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 111 */;
	struct manage_flash_t {
		int status;
	} cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 107 */;
	struct validate_flash_t {
		int status;
		void *buf;
		uint32_t buf_size;
		uint32_t result;
	} cocci_id/* arch/powerpc/platforms/powernv/opal-flash.c 100 */;
}
