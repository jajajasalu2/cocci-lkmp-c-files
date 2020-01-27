cocci_test_suite() {
	void cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 99 */(struct map_info *map,
								  struct flchip *chip,
								  unsigned long adr);
	int cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 97 */(struct map_info *map,
								 struct flchip *chip,
								 unsigned long adr,
								 int mode);
	int cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 95 */(struct mtd_info *mtd,
								 loff_t from,
								 size_t len);
	int cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 93 */(struct mtd_info *mtd,
								 loff_t from,
								 size_t len,
								 size_t *retlen,
								 void **virt,
								 resource_size_t *phys);
	int cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 91 */(struct mtd_info *,
								 struct cfi_private **);
	struct mtd_info *cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 90 */(struct mtd_info *);
	struct mtd_info *cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 88 */(struct map_info *,
									      int);
	void cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 86 */(struct mtd_info *);
	int cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 84 */(struct notifier_block *,
								 unsigned long,
								 void *);
	int cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 82 */(struct mtd_info *);
	struct cfi_private cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 770 */;
	int cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 77 */(struct mtd_info *,
								 size_t,
								 size_t *,
								 struct otp_info *);
	struct flchip_shared cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 764 */;
	int cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 76 */(struct mtd_info *,
								 loff_t,
								 size_t);
	struct cfi_intelext_programming_regioninfo *cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 734 */;
	struct cfi_intelext_blockinfo cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 726 */;
	struct cfi_intelext_regioninfo *cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 721 */;
	struct cfi_intelext_otpinfo cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 705 */;
	struct flchip_shared *cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 700 */;
	int cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 70 */(struct mtd_info *mtd,
								 loff_t ofs,
								 uint64_t len);
	struct cfi_private **cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 679 */;
	int cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 66 */(struct mtd_info *,
								 struct erase_info *);
	int cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 65 */(struct mtd_info *,
								 const struct kvec *,
								 unsigned long,
								 loff_t,
								 size_t *);
	unsigned long long cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 644 */;
	int cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 64 */(struct mtd_info *,
								 loff_t,
								 size_t,
								 size_t *,
								 const u_char *);
	int cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 62 */(struct mtd_info *,
								 loff_t,
								 size_t,
								 size_t *,
								 u_char *);
	struct mtd_erase_region_info cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 612 */;
	struct mtd_info *cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 592 */(struct map_info *map,
									       int primary)__attribute__((alias("cfi_cmdset_0001")));
	struct cfi_pri_intelext *cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 515 */;
	__u16 cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 514 */;
	struct cfi_private *cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 481 */;
	struct mtd_info *cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 479 */;
	struct map_info *cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 479 */;
	int cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 479 */;
	struct cfi_intelext_programming_regioninfo cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 460 */;
	void cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 371 */;
	struct cfi_fixup cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 332 */[];
	struct mtd_erase_region_info *cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 2668 */;
	struct mtd_info cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 2659 */;
	void *cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 2655 */;
	struct notifier_block *cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 2654 */;
	u_char *cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 2465 */;
	struct otp_info *cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 2462 */;
	size_t *cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 2462 */;
	size_t cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 2461 */;
	struct otp_info cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 2371 */;
	map_word cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 2370 */;
	u_int cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 2305 */;
	u_long cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 2304 */;
	struct cfi_intelext_otpinfo *cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 2303 */;
	struct flchip *cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 2302 */;
	otp_op_t cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 2297 */;
	int __xipram cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 2221 */;
	int (*cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 2217 */)(struct map_info *map,
								      struct flchip *chip,
								      u_long data_offset,
								      u_char *buf,
								      u_int size,
								      u_long prot_offset,
								      u_int groupno,
								      u_int groupsize);
	uint64_t cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 2209 */;
	loff_t cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 2208 */;
	struct erase_info *cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 2021 */;
	int __xipram cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 1931 */;
	struct kvec cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 1923 */;
	const u_char *cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 1921 */;
	const struct kvec *cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 1868 */;
	char *cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 184 */;
	uint32_t cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 176 */;
	struct cfi_pri_atmel cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 175 */;
	unsigned long *cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 1704 */;
	const struct kvec **cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 1703 */;
	unsigned long cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 1384 */;
	resource_size_t *cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 1380 */;
	void **cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 1380 */;
	unsigned int cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 1271 */;
	flstate_t cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 1145 */;
	void __xipram cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 1111 */;
	struct mtd_chip_driver cocci_id/* drivers/mtd/chips/cfi_cmdset_0001.c 108 */;
}
