cocci_test_suite() {
	int cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 98 */(struct mtd_info *mtd,
								 loff_t ofs,
								 uint64_t len);
	void cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 95 */(struct map_info *map,
								  struct flchip *chip,
								  unsigned long adr);
	int cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 94 */(struct map_info *map,
								 struct flchip *chip,
								 unsigned long adr,
								 int mode);
	struct mtd_info *cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 92 */(struct mtd_info *);
	struct mtd_info *cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 91 */(struct map_info *,
									      int);
	void cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 89 */(struct mtd_info *);
	int cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 86 */(struct mtd_info *mtd,
								 loff_t to,
								 size_t len,
								 size_t *retlen,
								 const u_char *buf);
	int __xipram cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 851 */;
	int cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 84 */(struct mtd_info *,
								 loff_t,
								 size_t);
	struct mtd_erase_region_info cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 763 */;
	struct mtd_info *cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 742 */(struct map_info *map,
									       int primary)__attribute__((alias("cfi_cmdset_0002")));
	int cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 73 */(struct mtd_info *,
								 size_t,
								 size_t *,
								 struct otp_info *);
	int cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 72 */(struct notifier_block *,
								 unsigned long,
								 void *);
	int cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 70 */(struct mtd_info *);
	int cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 67 */(struct mtd_info *,
								 struct erase_info *);
	int cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 65 */(struct mtd_info *,
								 loff_t,
								 size_t,
								 size_t *,
								 const u_char *);
	struct cfi_pri_amdstd *cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 623 */;
	__u16 cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 622 */;
	unsigned char cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 621 */;
	int cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 62 */(struct mtd_info *,
								 loff_t,
								 size_t,
								 size_t *,
								 u_char *);
	struct device_node __maybe_unused *cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 586 */;
	struct cfi_fixup cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 448 */[];
	struct cfi_private *cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 3101 */;
	struct map_info *cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 3100 */;
	struct mtd_info *cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 3098 */;
	void cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 3098 */;
	struct mtd_info cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 3092 */;
	void *cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 3088 */;
	struct notifier_block *cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 3087 */;
	char *cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 291 */;
	int __maybe_unused cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 2905 */;
	struct cfi_pri_atmel cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 288 */;
	struct ppb_lock cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 2826 */;
	struct ppb_lock *cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 2806 */;
	struct mtd_erase_region_info *cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 2803 */;
	struct ppb_lock {
		struct flchip *chip;
		unsigned long adr;
		int locked;
	} cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 2710 */;
	uint64_t cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 2696 */;
	struct erase_info *cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 2620 */;
	int cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 2620 */;
	unsigned long int cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 2419 */;
	map_word cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 2329 */;
	const u_char *cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 2312 */;
	__u8 cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 226 */;
	const unsigned long cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 2204 */;
	void __xipram cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 1998 */;
	const char *cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 175 */[6];
	const char *cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 172 */[3];
	loff_t cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 1640 */;
	u_char *cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 1605 */;
	struct otp_info *cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 1603 */;
	size_t *cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 1603 */;
	size_t cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 1602 */;
	uint8_t cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 1494 */;
	struct flchip *cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 1493 */;
	unsigned long cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 1491 */;
	otp_op_t cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 1486 */;
	int __xipram cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 1386 */(struct map_info *map,
									    struct flchip *chip,
									    unsigned long adr,
									    map_word datum,
									    int mode);
	int (*cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 1276 */)(struct map_info *map,
								      struct flchip *chip,
								      loff_t adr,
								      size_t len,
								      u_char *buf,
								      size_t grouplen);
	u8 cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 120 */;
	flstate_t cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 1067 */;
	struct mtd_chip_driver cocci_id/* drivers/mtd/chips/cfi_cmdset_0002.c 105 */;
}
