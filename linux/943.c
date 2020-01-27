cocci_test_suite() {
	resource_size_t *cocci_id/* drivers/mtd/devices/slram.c 93 */;
	void **cocci_id/* drivers/mtd/devices/slram.c 93 */;
	size_t *cocci_id/* drivers/mtd/devices/slram.c 93 */;
	loff_t cocci_id/* drivers/mtd/devices/slram.c 92 */;
	size_t cocci_id/* drivers/mtd/devices/slram.c 92 */;
	struct mtd_info *cocci_id/* drivers/mtd/devices/slram.c 83 */;
	struct erase_info *cocci_id/* drivers/mtd/devices/slram.c 83 */;
	int cocci_id/* drivers/mtd/devices/slram.c 81 */(struct mtd_info *,
							 loff_t, size_t,
							 size_t *,
							 const u_char *);
	int cocci_id/* drivers/mtd/devices/slram.c 80 */(struct mtd_info *,
							 loff_t, size_t,
							 size_t *, u_char *);
	int cocci_id/* drivers/mtd/devices/slram.c 79 */(struct mtd_info *,
							 loff_t, size_t);
	int cocci_id/* drivers/mtd/devices/slram.c 77 */(struct mtd_info *,
							 loff_t, size_t,
							 size_t *, void **,
							 resource_size_t *);
	int cocci_id/* drivers/mtd/devices/slram.c 76 */(struct mtd_info *,
							 struct erase_info *);
	slram_mtd_list_t *cocci_id/* drivers/mtd/devices/slram.c 74 */;
	char *cocci_id/* drivers/mtd/devices/slram.c 66 */[SLRAM_MAX_DEVICES_PARAMS];
	struct slram_mtd_list {
		struct mtd_info *mtdinfo;
		struct slram_mtd_list *next;
	} cocci_id/* drivers/mtd/devices/slram.c 60 */;
	struct slram_priv {
		u_char *start;
		u_char *end;
	} cocci_id/* drivers/mtd/devices/slram.c 55 */;
	void __exit cocci_id/* drivers/mtd/devices/slram.c 334 */;
	void cocci_id/* drivers/mtd/devices/slram.c 334 */;
	int cocci_id/* drivers/mtd/devices/slram.c 310 */;
	int __init cocci_id/* drivers/mtd/devices/slram.c 277 */;
	char *cocci_id/* drivers/mtd/devices/slram.c 214 */;
	unsigned long cocci_id/* drivers/mtd/devices/slram.c 214 */;
	slram_priv_t *cocci_id/* drivers/mtd/devices/slram.c 161 */;
	slram_priv_t cocci_id/* drivers/mtd/devices/slram.c 148 */;
	struct mtd_info cocci_id/* drivers/mtd/devices/slram.c 143 */;
	slram_mtd_list_t cocci_id/* drivers/mtd/devices/slram.c 138 */;
	slram_mtd_list_t **cocci_id/* drivers/mtd/devices/slram.c 131 */;
	const u_char *cocci_id/* drivers/mtd/devices/slram.c 118 */;
	u_char *cocci_id/* drivers/mtd/devices/slram.c 108 */;
}
