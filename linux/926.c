cocci_test_suite() {
	struct mtd_info *cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 979 */;
	bool cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 976 */;
	const u8 *cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 960 */;
	struct mtd_oob_region cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 784 */;
	struct atmel_hsmc_nand_controller *cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 603 */;
	struct atmel_nand *cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 602 */;
	unsigned int cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 600 */;
	struct nand_chip *cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 599 */;
	int cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 599 */;
	void cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 599 */;
	u32 cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 509 */;
	u8 cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 417 */;
	dma_cookie_t cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 370 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 369 */;
	enum dma_data_direction cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 365 */;
	dma_addr_t cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 364 */;
	size_t cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 364 */;
	struct completion *cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 358 */;
	irqreturn_t cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 283 */;
	struct atmel_nfc_op *cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 275 */;
	struct nand_controller *cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 269 */;
	struct platform_driver cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 2582 */;
	struct atmel_hsmc_nand_controller {
		struct atmel_nand_controller base;
		struct {
			struct gen_pool *pool;
			void __iomem *virt;
			dma_addr_t dma;
		} sram;
		const struct atmel_hsmc_reg_layout *hsmc_layout;
		struct regmap *io;
		struct atmel_nfc_op op;
		struct completion complete;
		int irq;
		struct clk *clk;
	} cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 251 */;
	void *cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 2505 */;
	struct atmel_smc_nand_controller cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 248 */;
	const struct atmel_nand_controller_caps cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 2436 */;
	const struct atmel_nand_controller_ops cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 2383 */;
	struct atmel_smc_nand_controller {
		struct atmel_nand_controller base;
		struct regmap *ebi_csa_regmap;
		struct atmel_smc_nand_ebi_csa_cfg *ebi_csa;
	} cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 238 */;
	struct atmel_smc_nand_ebi_csa_cfg {
		u32 offs;
		u32 nfd0_on_d16;
	} cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 233 */;
	const struct atmel_nand_controller_caps *cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 2267 */;
	struct platform_device *cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 2266 */;
	unsigned long cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 2253 */;
	struct atmel_hsmc_nand_controller cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 2250 */;
	struct atmel_nand_controller *cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 2241 */;
	void __iomem *cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 2228 */;
	struct device_node *cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 2186 */;
	struct device *cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 2185 */;
	struct atmel_nand_controller {
		struct nand_controller base;
		const struct atmel_nand_controller_caps *caps;
		struct device *dev;
		struct regmap *smc;
		struct dma_chan *dmac;
		struct atmel_pmecc *pmecc;
		struct list_head chips;
		struct clk *mck;
	} cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 216 */;
	struct resource cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 2081 */;
	struct regmap_config cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 2072 */;
	struct atmel_nand_controller_caps {
		bool has_dma;
		bool legacy_of_bindings;
		u32 ale_offs;
		u32 cle_offs;
		const char *ebi_csa_regmap_name;
		const struct atmel_nand_controller_ops *ops;
	} cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 207 */;
	struct atmel_smc_nand_ebi_csa_cfg *cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 2056 */;
	const struct of_device_id *cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 2029 */;
	struct atmel_smc_nand_controller *cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 2026 */;
	dma_cap_mask_t cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 1988 */;
	struct atmel_nand_controller_ops {
		int (*probe)(struct platform_device *pdev,
			     const struct atmel_nand_controller_caps *caps);
		int (*remove)(struct atmel_nand_controller *nc);
		void (*nand_init)(struct atmel_nand_controller *nc,
				  struct atmel_nand *nand);
		int (*ecc_init)(struct nand_chip *chip);
		int (*setup_data_interface)(struct atmel_nand *nand,
					    int csline,
					    const struct nand_data_interface *conf);
	} cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 196 */;
	const struct nand_controller_ops cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 1957 */;
	struct atmel_nand_controller_caps cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 194 */;
	struct atmel_nand_controller cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 193 */;
	const struct of_device_id cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 1880 */[];
	const struct atmel_smc_nand_ebi_csa_cfg cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 1847 */;
	struct atmel_nfc_op {
		u8 cs;
		u8 ncmds;
		u8 cmds[2];
		u8 naddrs;
		u8 addrs[5];
		enum atmel_nfc_data_xfer data;
		u32 wait;
		u32 errors;
	} cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 182 */;
	enum atmel_nfc_data_xfer{ATMEL_NFC_NO_DATA, ATMEL_NFC_READ_DATA, ATMEL_NFC_WRITE_DATA,} cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 176 */;
	struct atmel_nand cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 173 */;
	struct resource *cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 1719 */;
	struct gpio_desc *cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 1718 */;
	struct atmel_nand {
		struct list_head node;
		struct device *dev;
		struct nand_chip base;
		struct atmel_nand_cs *activecs;
		struct atmel_pmecc_user *pmecc;
		struct gpio_desc *cdgpio;
		int numcs;
		struct atmel_nand_cs cs[];
	} cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 160 */;
	struct atmel_nand_cs {
		int id;
		struct atmel_nand_rb rb;
		struct gpio_desc *csgpio;
		struct {
			void __iomem *virt;
			dma_addr_t dma;
		} io;
		struct atmel_smc_cs_conf smcconf;
	} cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 148 */;
	struct atmel_nand_cs *cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 1431 */;
	struct atmel_smc_cs_conf cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 1430 */;
	const struct nand_data_interface *cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 1427 */;
	struct atmel_nand_rb {
		enum atmel_nand_rb_type type;
		union {
			struct gpio_desc *gpio;
			int id;
		};
	} cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 140 */;
	enum atmel_nand_rb_type{ATMEL_NAND_NO_RB, ATMEL_NAND_NATIVE_RB, ATMEL_NAND_GPIO_RB,} cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 134 */;
	struct atmel_smc_cs_conf *cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 1172 */;
	struct atmel_pmecc_user_req cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 1049 */;
	u8 *cocci_id/* drivers/mtd/nand/raw/atmel/nand-controller.c 1029 */;
}
