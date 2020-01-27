cocci_test_suite() {
	struct sfdp_header {
		u32 signature;
		u8 minor;
		u8 major;
		u8 nph;
		u8 unused;
		struct sfdp_parameter_header bfpt_header;
	} cocci_id/* drivers/mtd/spi-nor/spi-nor.c 68 */;
	struct spi_mem_op cocci_id/* drivers/mtd/spi-nor/spi-nor.c 555 */;
	bool cocci_id/* drivers/mtd/spi-nor/spi-nor.c 550 */;
	struct spi_mem_driver cocci_id/* drivers/mtd/spi-nor/spi-nor.c 5361 */;
	const struct of_device_id cocci_id/* drivers/mtd/spi-nor/spi-nor.c 5346 */[];
	const struct spi_device_id cocci_id/* drivers/mtd/spi-nor/spi-nor.c 5301 */[];
	char *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 5217 */;
	const struct spi_nor_hwcaps cocci_id/* drivers/mtd/spi-nor/spi-nor.c 5216 */;
	struct flash_platform_data *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 5210 */;
	struct spi_device *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 5209 */;
	struct spi_mem *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 5207 */;
	const char *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 5023 */;
	const struct flash_info *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 5013 */;
	struct device_node *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 4686 */;
	struct spi_nor_erase_map *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 4684 */;
	struct spi_nor_flash_parameter cocci_id/* drivers/mtd/spi-nor/spi-nor.c 4664 */;
	struct spi_nor *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 4570 */;
	void cocci_id/* drivers/mtd/spi-nor/spi-nor.c 4570 */;
	const u32 cocci_id/* drivers/mtd/spi-nor/spi-nor.c 4413 */;
	const struct spi_nor_pp_command *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 4384 */;
	const struct spi_nor_read_command *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 4353 */;
	struct sfdp_parameter_header {
		u8 id_lsb;
		u8 minor;
		u8 major;
		u8 length;
		u8 parameter_table_pointer[3];
		u8 id_msb;
	} cocci_id/* drivers/mtd/spi-nor/spi-nor.c 43 */;
	struct device *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 4246 */;
	struct sfdp_header cocci_id/* drivers/mtd/spi-nor/spi-nor.c 4245 */;
	struct sfdp_parameter_header *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 4244 */;
	struct spi_nor_read_command *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 4184 */;
	const struct sfdp_4bait *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 4125 */;
	struct spi_nor_pp_command *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 4089 */;
	const struct sfdp_4bait cocci_id/* drivers/mtd/spi-nor/spi-nor.c 4083 */[SNOR_ERASE_TYPE_MAX];
	const struct sfdp_4bait cocci_id/* drivers/mtd/spi-nor/spi-nor.c 4067 */[];
	struct sfdp_4bait {
		u32 hwcaps;
		u32 supported_bit;
	} cocci_id/* drivers/mtd/spi-nor/spi-nor.c 4043 */;
	struct spi_nor_erase_type *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 3912 */;
	const u8 cocci_id/* drivers/mtd/spi-nor/spi-nor.c 3883 */;
	u8 *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 3798 */;
	const u32 *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 3794 */;
	const struct spi_nor *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 3753 */;
	const struct sfdp_bfpt_erase *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 3608 */;
	const struct sfdp_bfpt_read *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 3586 */;
	const u8 *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 355 */;
	u16 cocci_id/* drivers/mtd/spi-nor/spi-nor.c 3531 */;
	struct sfdp_bfpt cocci_id/* drivers/mtd/spi-nor/spi-nor.c 3527 */;
	const void *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 3394 */;
	const struct sfdp_bfpt_erase cocci_id/* drivers/mtd/spi-nor/spi-nor.c 3332 */[];
	struct sfdp_bfpt_erase {
		u32 dword;
		u32 shift;
	} cocci_id/* drivers/mtd/spi-nor/spi-nor.c 3323 */;
	const struct sfdp_bfpt_read cocci_id/* drivers/mtd/spi-nor/spi-nor.c 3273 */[];
	struct sfdp_bfpt_read {
		u32 hwcaps;
		u32 supported_dword;
		u32 supported_bit;
		u32 settings_dword;
		u32 settings_shift;
		enum spi_nor_protocol proto;
	} cocci_id/* drivers/mtd/spi-nor/spi-nor.c 3250 */;
	unsigned int cocci_id/* drivers/mtd/spi-nor/spi-nor.c 3178 */;
	struct spi_mem_op *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 3096 */;
	void *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 3065 */;
	const int cocci_id/* drivers/mtd/spi-nor/spi-nor.c 2966 */[][2];
	enum spi_nor_protocol cocci_id/* drivers/mtd/spi-nor/spi-nor.c 2960 */;
	const struct spi_nor_hwcaps *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 2905 */;
	const u_char *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 2825 */;
	ssize_t cocci_id/* drivers/mtd/spi-nor/spi-nor.c 2698 */;
	u_char *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 2695 */;
	size_t *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 2695 */;
	const struct flash_info cocci_id/* drivers/mtd/spi-nor/spi-nor.c 2300 */[];
	struct spi_nor_fixups cocci_id/* drivers/mtd/spi-nor/spi-nor.c 2285 */;
	struct spi_nor_flash_parameter *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 2231 */;
	const struct sfdp_bfpt *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 2230 */;
	const struct sfdp_parameter_header *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 2229 */;
	int cocci_id/* drivers/mtd/spi-nor/spi-nor.c 2227 */;
	uint64_t cocci_id/* drivers/mtd/spi-nor/spi-nor.c 2064 */;
	const struct spi_nor_locking_ops cocci_id/* drivers/mtd/spi-nor/spi-nor.c 2028 */;
	struct flash_info {
		char *name;
		u8 id[SPI_NOR_MAX_ID_LEN];
		u8 id_len;
		unsigned sector_size;
		u16 n_sectors;
		u16 page_size;
		u16 addr_width;
		u16 flags;
#define SECT_4K BIT(0)SECT_4K
#define SPI_NOR_NO_ERASE BIT(1)SPI_NOR_NO_ERASE
#define SST_WRITE BIT(2)SST_WRITE
#define SPI_NOR_NO_FR BIT(3)SPI_NOR_NO_FR
#define SECT_4K_PMC BIT(4)SECT_4K_PMC
#define SPI_NOR_DUAL_READ BIT(5)SPI_NOR_DUAL_READ
#define SPI_NOR_QUAD_READ BIT(6)SPI_NOR_QUAD_READ
#define USE_FSR BIT(7)USE_FSR
#define SPI_NOR_HAS_LOCK BIT(8)SPI_NOR_HAS_LOCK
#define SPI_NOR_HAS_TB BIT(9)SPI_NOR_HAS_TB
#define SPI_NOR_XSR_RDY BIT(10)
#define SPI_S3AN BIT(10)
#define SPI_NOR_4B_OPCODES BIT(11)SPI_NOR_4B_OPCODES
#define NO_CHIP_ERASE BIT(12)NO_CHIP_ERASE
#define SPI_NOR_SKIP_SFDP BIT(13)
#define USE_CLSR BIT(14)USE_CLSR
#define SPI_NOR_OCTAL_READ BIT(15)SPI_NOR_OCTAL_READ
																			const struct spi_nor_fixups *fixups;
	} cocci_id/* drivers/mtd/spi-nor/spi-nor.c 179 */;
	uint64_t *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 1760 */;
	loff_t *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 1759 */;
	struct spi_nor_fixups {
		void (*default_init)(struct spi_nor *nor);
		int (*post_bfpt)(struct spi_nor *nor, const struct sfdp_parameter_header *bfpt_header, const struct sfdp_bfpt *bfpt, struct spi_nor_flash_parameter *params);
		void (*post_sfdp)(struct spi_nor *nor);
	} cocci_id/* drivers/mtd/spi-nor/spi-nor.c 170 */;
	unsigned long cocci_id/* drivers/mtd/spi-nor/spi-nor.c 1697 */;
	long long cocci_id/* drivers/mtd/spi-nor/spi-nor.c 1679 */;
	uint32_t cocci_id/* drivers/mtd/spi-nor/spi-nor.c 1676 */;
	struct erase_info *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 1672 */;
	struct spi_nor_erase_command *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 1542 */;
	struct list_head *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 1540 */;
	struct sfdp_bfpt {
		u32 dwords[BFPT_DWORD_MAX];
	} cocci_id/* drivers/mtd/spi-nor/spi-nor.c 151 */;
	struct spi_nor_erase_region *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 1487 */;
	const struct spi_nor_erase_region *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 1426 */;
	const struct spi_nor_erase_map *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 1425 */;
	u32 *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 1404 */;
	u64 cocci_id/* drivers/mtd/spi-nor/spi-nor.c 1403 */;
	const struct spi_nor_erase_type *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 1403 */;
	loff_t cocci_id/* drivers/mtd/spi-nor/spi-nor.c 1353 */;
	u32 cocci_id/* drivers/mtd/spi-nor/spi-nor.c 1342 */;
	enum spi_nor_ops cocci_id/* drivers/mtd/spi-nor/spi-nor.c 1310 */;
	const u8 cocci_id/* drivers/mtd/spi-nor/spi-nor.c 1281 */[][2];
	u8 cocci_id/* drivers/mtd/spi-nor/spi-nor.c 1279 */;
	size_t cocci_id/* drivers/mtd/spi-nor/spi-nor.c 1232 */;
	struct mtd_info *cocci_id/* drivers/mtd/spi-nor/spi-nor.c 1227 */;
}
