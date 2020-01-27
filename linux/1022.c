cocci_test_suite() {
	const struct amd_flash_info cocci_id/* drivers/mtd/chips/jedec_probe.c 296 */[];
	struct amd_flash_info {
		const char *name;
		const uint16_t mfr_id;
		const uint16_t dev_id;
		const uint8_t dev_size;
		const uint8_t nr_regions;
		const uint16_t cmd_set;
		const uint32_t regions[6];
		const uint8_t devtypes;
		const uint8_t uaddr;
	} cocci_id/* drivers/mtd/chips/jedec_probe.c 267 */;
	void __exit cocci_id/* drivers/mtd/chips/jedec_probe.c 2305 */;
	void cocci_id/* drivers/mtd/chips/jedec_probe.c 2305 */;
	int __init cocci_id/* drivers/mtd/chips/jedec_probe.c 2299 */;
	struct mtd_chip_driver cocci_id/* drivers/mtd/chips/jedec_probe.c 2293 */;
	struct mtd_info *cocci_id/* drivers/mtd/chips/jedec_probe.c 2284 */;
	struct chip_probe cocci_id/* drivers/mtd/chips/jedec_probe.c 2279 */;
	unsigned long cocci_id/* drivers/mtd/chips/jedec_probe.c 2230 */;
	const struct unlock_addr cocci_id/* drivers/mtd/chips/jedec_probe.c 220 */[];
	enum uaddr cocci_id/* drivers/mtd/chips/jedec_probe.c 2153 */;
	unsigned long *cocci_id/* drivers/mtd/chips/jedec_probe.c 2150 */;
	__u32 cocci_id/* drivers/mtd/chips/jedec_probe.c 2149 */;
	uint16_t cocci_id/* drivers/mtd/chips/jedec_probe.c 2064 */;
	struct unlock_addr {
		uint32_t addr1;
		uint32_t addr2;
	} cocci_id/* drivers/mtd/chips/jedec_probe.c 204 */;
	u32 cocci_id/* drivers/mtd/chips/jedec_probe.c 2036 */;
	const struct amd_flash_info *cocci_id/* drivers/mtd/chips/jedec_probe.c 2033 */;
	uint32_t cocci_id/* drivers/mtd/chips/jedec_probe.c 2030 */;
	struct cfi_ident cocci_id/* drivers/mtd/chips/jedec_probe.c 1987 */;
	uint8_t cocci_id/* drivers/mtd/chips/jedec_probe.c 1975 */;
	struct map_info *cocci_id/* drivers/mtd/chips/jedec_probe.c 1972 */;
	struct cfi_private *cocci_id/* drivers/mtd/chips/jedec_probe.c 1972 */;
	int cocci_id/* drivers/mtd/chips/jedec_probe.c 1972 */;
	map_word cocci_id/* drivers/mtd/chips/jedec_probe.c 1936 */;
	enum uaddr{MTD_UADDR_NOT_SUPPORTED=0, MTD_UADDR_0x0555_0x02AA, MTD_UADDR_0x0555_0x0AAA, MTD_UADDR_0x5555_0x2AAA, MTD_UADDR_0x0AAA_0x0554, MTD_UADDR_0x0AAA_0x0555, MTD_UADDR_0xAAAA_0x5555, MTD_UADDR_DONT_CARE, MTD_UADDR_UNNECESSARY,} cocci_id/* drivers/mtd/chips/jedec_probe.c 191 */;
}
