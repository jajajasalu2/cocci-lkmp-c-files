cocci_test_suite() {
	struct opal_msg cocci_id/* drivers/mtd/devices/powernv_flash.c 52 */;
	struct device *cocci_id/* drivers/mtd/devices/powernv_flash.c 50 */;
	struct powernv_flash *cocci_id/* drivers/mtd/devices/powernv_flash.c 49 */;
	loff_t cocci_id/* drivers/mtd/devices/powernv_flash.c 47 */;
	u_char *cocci_id/* drivers/mtd/devices/powernv_flash.c 47 */;
	size_t *cocci_id/* drivers/mtd/devices/powernv_flash.c 47 */;
	size_t cocci_id/* drivers/mtd/devices/powernv_flash.c 47 */;
	enum flash_op cocci_id/* drivers/mtd/devices/powernv_flash.c 46 */;
	struct mtd_info *cocci_id/* drivers/mtd/devices/powernv_flash.c 46 */;
	int cocci_id/* drivers/mtd/devices/powernv_flash.c 46 */;
	enum flash_op{FLASH_OP_READ, FLASH_OP_WRITE, FLASH_OP_ERASE,} cocci_id/* drivers/mtd/devices/powernv_flash.c 35 */;
	struct powernv_flash {
		struct mtd_info mtd;
		u32 id;
	} cocci_id/* drivers/mtd/devices/powernv_flash.c 30 */;
	struct platform_driver cocci_id/* drivers/mtd/devices/powernv_flash.c 278 */;
	const struct of_device_id cocci_id/* drivers/mtd/devices/powernv_flash.c 273 */[];
	struct platform_device *cocci_id/* drivers/mtd/devices/powernv_flash.c 227 */;
	u32 cocci_id/* drivers/mtd/devices/powernv_flash.c 186 */;
	u64 cocci_id/* drivers/mtd/devices/powernv_flash.c 185 */;
	struct erase_info *cocci_id/* drivers/mtd/devices/powernv_flash.c 165 */;
	const u_char *cocci_id/* drivers/mtd/devices/powernv_flash.c 154 */;
}
