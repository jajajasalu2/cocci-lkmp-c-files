cocci_test_suite() {
	const struct of_device_id *cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 955 */;
	const struct of_device_id cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 926 */[];
	struct atmel_pmecc_caps cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 906 */;
	const int cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 904 */[];
	struct device_node *cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 872 */;
	struct atmel_pmecc **cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 866 */;
	struct resource *cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 837 */;
	struct device *cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 835 */;
	const struct atmel_pmecc_caps *cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 832 */;
	struct platform_device *cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 831 */;
	bool cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 746 */;
	struct atmel_pmecc_user *cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 746 */;
	u8 *cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 713 */;
	u32 cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 712 */;
	const char *cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 710 */;
	struct atmel_pmecc *cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 693 */;
	void *cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 691 */;
	s16 cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 516 */;
	const int *cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 419 */;
	void cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 411 */;
	s32 *cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 375 */;
	s16 *cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 371 */;
	s32 cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 362 */;
	struct atmel_pmecc_user_req *cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 344 */;
	const struct atmel_pmecc_gf_tables **cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 257 */;
	u16 cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 237 */;
	const struct atmel_pmecc_user_req *cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 220 */;
	const struct atmel_pmecc_gf_tables *cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 219 */;
	const unsigned int cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 196 */;
	struct atmel_pmecc_gf_tables *cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 193 */;
	unsigned int cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 192 */;
	int cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 192 */;
	struct atmel_pmecc_user {
		struct atmel_pmecc_user_conf_cache cache;
		struct atmel_pmecc *pmecc;
		const struct atmel_pmecc_gf_tables *gf_tables;
		int eccbytes;
		s16 *partial_syn;
		s16 *si;
		s16 *lmu;
		s16 *smu;
		s32 *mu;
		s32 *dmu;
		s32 *delta;
		u32 isr;
	} cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 167 */;
	struct atmel_pmecc_user_conf_cache {
		u32 cfg;
		u32 sarea;
		u32 saddr;
		u32 eaddr;
	} cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 160 */;
	struct atmel_pmecc {
		struct device *dev;
		const struct atmel_pmecc_caps *caps;
		struct {
			void __iomem *base;
			void __iomem *errloc;
		} regs;
		struct mutex lock;
	} cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 148 */;
	struct atmel_pmecc_caps {
		const int *strengths;
		int nstrengths;
		int el_offset;
		bool correct_erased_chunks;
	} cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 141 */;
	struct atmel_pmecc_gf_tables {
		u16 *alpha_to;
		u16 *index_of;
	} cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 136 */;
	struct platform_driver cocci_id/* drivers/mtd/nand/raw/atmel/pmecc.c 1006 */;
}
