cocci_test_suite() {
	enum brcmnand_llop_type{LL_OP_CMD, LL_OP_ADDR, LL_OP_WR, LL_OP_RD,} cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 966 */;
	enum flash_dma_reg cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 958 */;
	uintptr_t cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 946 */;
	const void *cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 943 */;
	unsigned long cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 890 */;
	u32 cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 889 */;
	struct brcmnand_controller *cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 888 */;
	int cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 888 */;
	enum{CS_SELECT_NAND_WP=BIT(29), CS_SELECT_AUTO_DEVICE_ID_CFG=BIT(30),} cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 883 */;
	enum{ACC_CONTROL_CACHE_MODE=BIT(22), ACC_CONTROL_PREFETCH=BIT(23), ACC_CONTROL_PAGE_HIT=BIT(24), ACC_CONTROL_WR_PREEMPT=BIT(25), ACC_CONTROL_PARTIAL_PAGE=BIT(26), ACC_CONTROL_RD_ERASED=BIT(27), ACC_CONTROL_FAST_PGM_RDIN=BIT(28), ACC_CONTROL_WR_ECC=BIT(30), ACC_CONTROL_RD_ECC=BIT(31),} cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 776 */;
	u8 cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 713 */;
	enum brcmnand_cs_reg cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 709 */;
	u16 cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 708 */;
	struct brcm_nand_dma_desc {
		u32 next_desc;
		u32 next_desc_ext;
		u32 cmd_irq;
		u32 dram_addr;
		u32 dram_addr_ext;
		u32 tfr_len;
		u32 total_len;
		u32 flash_addr;
		u32 flash_addr_ext;
		u32 cs;
		u32 pad2[5];
		u32 status_valid;
	}__packed cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 68 */;
	void cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 660 */;
	enum brcmnand_reg cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 619 */;
	const unsigned int cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 515 */[];
	enum{INTFC_FLASH_STATUS=GENMASK(7, 0), INTFC_ERASED=BIT(27), INTFC_OOB_VALID=BIT(28), INTFC_CACHE_VALID=BIT(29), INTFC_FLASH_READY=BIT(30), INTFC_CTLR_READY=BIT(31),} cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 492 */;
	enum{CFG_BLK_ADR_BYTES_SHIFT=8, CFG_COL_ADR_BYTES_SHIFT=12, CFG_FUL_ADR_BYTES_SHIFT=16, CFG_BUS_WIDTH_SHIFT=23, CFG_BUS_WIDTH=BIT(CFG_BUS_WIDTH_SHIFT), CFG_DEVICE_SIZE_SHIFT=24, CFG_PAGE_SIZE_SHIFT=20, CFG_BLK_SIZE_SHIFT=28, CFG_EXT_PAGE_SIZE_SHIFT=0, CFG_EXT_BLK_SIZE_SHIFT=4,} cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 474 */;
	const u8 cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 452 */[];
	enum brcmnand_cs_reg{BRCMNAND_CS_CFG_EXT=0, BRCMNAND_CS_CFG, BRCMNAND_CS_ACC_CONTROL, BRCMNAND_CS_TIMING1, BRCMNAND_CS_TIMING2,} cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 434 */;
	const u16 cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 285 */[];
	struct resource *cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 2562 */;
	struct device *cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 2559 */;
	struct brcmnand_soc *cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 2557 */;
	enum brcmnand_reg{BRCMNAND_CMD_START=0, BRCMNAND_CMD_EXT_ADDRESS, BRCMNAND_CMD_ADDRESS, BRCMNAND_INTFC_STATUS, BRCMNAND_CS_SELECT, BRCMNAND_CS_XOR, BRCMNAND_LL_OP, BRCMNAND_CS0_BASE, BRCMNAND_CS1_BASE, BRCMNAND_CORR_THRESHOLD, BRCMNAND_CORR_THRESHOLD_EXT, BRCMNAND_UNCORR_COUNT, BRCMNAND_CORR_COUNT, BRCMNAND_CORR_EXT_ADDR, BRCMNAND_CORR_ADDR, BRCMNAND_UNCORR_EXT_ADDR, BRCMNAND_UNCORR_ADDR, BRCMNAND_SEMAPHORE, BRCMNAND_ID, BRCMNAND_ID_EXT, BRCMNAND_LL_RDATA, BRCMNAND_OOB_READ_BASE, BRCMNAND_OOB_READ_10_BASE, BRCMNAND_OOB_WRITE_BASE, BRCMNAND_OOB_WRITE_10_BASE, BRCMNAND_FC_BASE,} cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 255 */;
	const struct of_device_id cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 2539 */[];
	const struct dev_pm_ops cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 2533 */;
	struct brcmnand_host {
		struct list_head node;
		struct nand_chip chip;
		struct platform_device *pdev;
		int cs;
		unsigned int last_cmd;
		unsigned int last_byte;
		u64 last_addr;
		struct brcmnand_cfg hwcfg;
		struct brcmnand_controller *ctrl;
	} cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 241 */;
	struct platform_device *cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 2387 */;
	struct device_node *cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 2384 */;
	const struct nand_controller_ops cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 2380 */;
	struct brcmnand_host *cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 2353 */;
	struct mtd_info *cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 2352 */;
	struct nand_chip *cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 2350 */;
	char cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 2225 */[128];
	struct brcmnand_cfg {
		u64 device_size;
		unsigned int block_size;
		unsigned int page_size;
		unsigned int spare_area_size;
		unsigned int device_width;
		unsigned int col_adr_bytes;
		unsigned int blk_adr_bytes;
		unsigned int ful_adr_bytes;
		unsigned int sector_size_1k;
		unsigned int ecc_level;
		u32 acc_control;
		u32 config;
		u32 config_ext;
		u32 timing_1;
		u32 timing_2;
	} cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 222 */;
	char *cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 2188 */;
	const u32 *cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 1972 */;
	u8 *cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 1840 */;
	u64 *cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 1744 */;
	struct brcmnand_controller {
		struct device *dev;
		struct nand_controller controller;
		void __iomem *nand_base;
		void __iomem *nand_fc;
		void __iomem *flash_dma_base;
		unsigned int irq;
		unsigned int dma_irq;
		int nand_version;
		struct brcmnand_soc *soc;
		struct clk *clk;
		int cmd_pending;
		bool dma_pending;
		struct completion done;
		struct completion dma_done;
		struct list_head host_list;
		const u16 *flash_dma_offsets;
		struct brcm_nand_dma_desc *dma_desc;
		dma_addr_t dma_pa;
		u8 flash_cache[FC_BYTES];
		const u16 *reg_offsets;
		unsigned int reg_spacing;
		const u8 *cs_offsets;
		const u8 *cs0_offsets;
		unsigned int max_block_size;
		const unsigned int *block_sizes;
		unsigned int max_page_size;
		const unsigned int *page_sizes;
		unsigned int max_oob;
		u32 features;
		u32 nand_cs_nand_select;
		u32 nand_cs_nand_xor;
		u32 corr_stat_threshold;
		u32 flash_dma_mode;
		bool pio_poll_mode;
	} cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 170 */;
	dma_addr_t cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 1683 */;
	bool cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 1656 */;
	struct brcm_nand_dma_desc *cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 1654 */;
	enum{BRCMNAND_HAS_1K_SECTORS=BIT(0), BRCMNAND_HAS_PREFETCH=BIT(1), BRCMNAND_HAS_CACHE_MODE=BIT(2), BRCMNAND_HAS_WP=BIT(3),} cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 163 */;
	const uint8_t *cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 1629 */;
	uint8_t *cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 1621 */;
	uint8_t cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 1565 */;
	u32 *cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 1536 */;
	unsigned long long cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 1480 */;
	u64 cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 1469 */;
	unsigned cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 1463 */;
	enum brcmnand_llop_type cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 1425 */;
	enum{LLOP_RE=BIT(16), LLOP_WE=BIT(17), LLOP_ALE=BIT(18), LLOP_CLE=BIT(19), LLOP_RETURN_IDLE=BIT(31), LLOP_DATA_MASK=GENMASK(15,
																    0),} cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 1414 */;
	unsigned int cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 1360 */;
	irqreturn_t cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 1302 */;
	void *cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 1302 */;
	const u8 *cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 1283 */;
	struct nand_ecc_ctrl *cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 1133 */;
	const struct mtd_ooblayout_ops cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 1119 */;
	enum flash_dma_reg{FLASH_DMA_REVISION=0, FLASH_DMA_FIRST_DESC, FLASH_DMA_FIRST_DESC_EXT, FLASH_DMA_CTRL, FLASH_DMA_MODE, FLASH_DMA_STATUS, FLASH_DMA_INTERRUPT_DESC, FLASH_DMA_INTERRUPT_DESC_EXT, FLASH_DMA_ERROR_STATUS, FLASH_DMA_CURRENT_DESC, FLASH_DMA_CURRENT_DESC_EXT,} cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 106 */;
	struct brcmnand_cfg *cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 1057 */;
	struct mtd_oob_region *cocci_id/* drivers/mtd/nand/raw/brcmnand/brcmnand.c 1053 */;
}
