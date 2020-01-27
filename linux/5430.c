cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/spi/spi-npcm-fiu.c 756 */;
	struct resource *cocci_id/* drivers/spi/spi-npcm-fiu.c 679 */;
	struct spi_controller *cocci_id/* drivers/spi/spi-npcm-fiu.c 676 */;
	struct device *cocci_id/* drivers/spi/spi-npcm-fiu.c 675 */;
	const struct of_device_id *cocci_id/* drivers/spi/spi-npcm-fiu.c 674 */;
	const struct fiu_data *cocci_id/* drivers/spi/spi-npcm-fiu.c 673 */;
	struct platform_device *cocci_id/* drivers/spi/spi-npcm-fiu.c 671 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-npcm-fiu.c 666 */[];
	const struct spi_controller_mem_ops cocci_id/* drivers/spi/spi-npcm-fiu.c 659 */;
	struct spi_device *cocci_id/* drivers/spi/spi-npcm-fiu.c 643 */;
	struct regmap *cocci_id/* drivers/spi/spi-npcm-fiu.c 590 */;
	int cocci_id/* drivers/spi/spi-npcm-fiu.c 585 */;
	u8 cocci_id/* drivers/spi/spi-npcm-fiu.c 564 */[4];
	const struct spi_mem_op *cocci_id/* drivers/spi/spi-npcm-fiu.c 525 */;
	struct spi_mem *cocci_id/* drivers/spi/spi-npcm-fiu.c 525 */;
	u8 cocci_id/* drivers/spi/spi-npcm-fiu.c 370 */;
	u32 cocci_id/* drivers/spi/spi-npcm-fiu.c 321 */[4];
	bool cocci_id/* drivers/spi/spi-npcm-fiu.c 316 */;
	const u8 *cocci_id/* drivers/spi/spi-npcm-fiu.c 302 */;
	const void *cocci_id/* drivers/spi/spi-npcm-fiu.c 295 */;
	u32 cocci_id/* drivers/spi/spi-npcm-fiu.c 276 */;
	u8 *cocci_id/* drivers/spi/spi-npcm-fiu.c 275 */;
	void __iomem *cocci_id/* drivers/spi/spi-npcm-fiu.c 273 */;
	struct npcm_fiu_chip *cocci_id/* drivers/spi/spi-npcm-fiu.c 272 */;
	struct npcm_fiu_spi *cocci_id/* drivers/spi/spi-npcm-fiu.c 270 */;
	u64 cocci_id/* drivers/spi/spi-npcm-fiu.c 268 */;
	void *cocci_id/* drivers/spi/spi-npcm-fiu.c 268 */;
	size_t cocci_id/* drivers/spi/spi-npcm-fiu.c 268 */;
	struct spi_mem_dirmap_desc *cocci_id/* drivers/spi/spi-npcm-fiu.c 267 */;
	ssize_t cocci_id/* drivers/spi/spi-npcm-fiu.c 267 */;
	void cocci_id/* drivers/spi/spi-npcm-fiu.c 245 */;
	const struct regmap_config cocci_id/* drivers/spi/spi-npcm-fiu.c 238 */;
	struct npcm_fiu_spi {
		struct npcm_fiu_chip chip[NPCM_MAX_CHIP_NUM];
		const struct npcm_fiu_info *info;
		struct spi_mem_op drd_op;
		struct resource *res_mem;
		struct regmap *regmap;
		unsigned long clkrate;
		struct device *dev;
		struct clk *clk;
		bool spix_mode;
	} cocci_id/* drivers/spi/spi-npcm-fiu.c 226 */;
	struct npcm_fiu_chip {
		void __iomem *flash_region_mapped_ptr;
		struct npcm_fiu_spi *fiu;
		unsigned long clkrate;
		u32 chipselect;
	} cocci_id/* drivers/spi/spi-npcm-fiu.c 219 */;
	struct npcm_fiu_spi cocci_id/* drivers/spi/spi-npcm-fiu.c 217 */;
	const struct fiu_data cocci_id/* drivers/spi/spi-npcm-fiu.c 212 */;
	const struct npcm_fiu_info cocci_id/* drivers/spi/spi-npcm-fiu.c 204 */[];
	struct fiu_data {
		const struct npcm_fiu_info *npcm_fiu_data_info;
		int fiu_max;
	} cocci_id/* drivers/spi/spi-npcm-fiu.c 199 */;
	struct npcm_fiu_info {
		char *name;
		u32 fiu_id;
		u32 max_map_size;
		u32 max_cs;
	} cocci_id/* drivers/spi/spi-npcm-fiu.c 192 */;
	enum{FIU0=0, FIU3, FIUX,} cocci_id/* drivers/spi/spi-npcm-fiu.c 186 */;
	enum{DWR_DBPCK_BIT_PER_CLK=0, DWR_DBPCK_2_BIT_PER_CLK=1, DWR_DBPCK_4_BIT_PER_CLK=2,} cocci_id/* drivers/spi/spi-npcm-fiu.c 167 */;
	enum{DWR_ABPCK_BIT_PER_CLK=0, DWR_ABPCK_2_BIT_PER_CLK=1, DWR_ABPCK_4_BIT_PER_CLK=2,} cocci_id/* drivers/spi/spi-npcm-fiu.c 161 */;
	enum{DRD_SINGLE_WIRE_MODE=0, DRD_DUAL_IO_MODE=1, DRD_QUAD_IO_MODE=2, DRD_SPI_X_MODE=3,} cocci_id/* drivers/spi/spi-npcm-fiu.c 154 */;
}
