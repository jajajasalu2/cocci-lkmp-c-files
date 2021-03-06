cocci_test_suite() {
	uintptr_t cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 934 */;
	struct cadence_nand_cdma_desc cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 922 */;
	struct cadence_nand_cdma_desc *cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 920 */;
	u16 cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 918 */;
	char *cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 917 */;
	char cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 917 */;
	void cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 915 */;
	u32 *cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 862 */;
	irqreturn_t cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 765 */;
	unsigned long cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 753 */;
	struct cadence_nand_irq_status *cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 722 */;
	struct cdns_nand_ctrl cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 544 */;
	struct nand_controller *cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 542 */;
	struct cdns_nand_chip cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 538 */;
	struct ecc_info {
		int (*calc_ecc_bytes)(int step_size, int strength);
		int max_step_size;
	} cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 530 */;
	struct cdns_nand_chip {
		struct cadence_nand_timings timings;
		struct nand_chip chip;
		u8 nsels;
		struct list_head node;
		u32 avail_oob_size;
		u32 sector_size;
		u32 sector_count;
		u8 bbm_offs;
		u8 bbm_len;
		u8 corr_str_idx;
		u8 cs[];
	} cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 504 */;
	struct cdns_nand_ctrl {
		struct device *dev;
		struct nand_controller controller;
		struct cadence_nand_cdma_desc *cdma_desc;
		const struct cadence_nand_dt_devdata *caps1;
		struct cdns_nand_caps caps2;
		u8 ctrl_rev;
		dma_addr_t dma_cdma_desc;
		u8 *buf;
		u32 buf_size;
		u8 curr_corr_str_idx;
		void __iomem *reg;
		struct {
			void __iomem *virt;
			dma_addr_t dma;
		} io;
		int irq;
		struct cadence_nand_irq_status irq_status;
		struct cadence_nand_irq_status irq_mask;
		struct completion complete;
		spinlock_t irq_lock;
		int ecc_strengths[BCH_MAX_NUM_CORR_CAPS];
		struct nand_ecc_step_info ecc_stepinfos[BCH_MAX_NUM_SECTOR_SIZES];
		struct nand_ecc_caps ecc_caps;
		int curr_trans_type;
		struct dma_chan *dmac;
		u32 nf_clk_rate;
		u32 board_delay;
		struct nand_chip *selected_chip;
		unsigned long assigned_cs;
		struct list_head chips;
	} cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 452 */;
	struct cdns_nand_caps {
		u8 max_banks;
		u8 data_dma_width;
		bool data_control_supp;
		bool is_phy_type_dll;
	} cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 441 */;
	struct cadence_nand_dt_devdata {
		u32 if_skew;
		unsigned int has_dma:1;
	} cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 433 */;
	struct cadence_nand_irq_status {
		u32 trd_status;
		u32 trd_error;
		u32 status;
	} cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 423 */;
	struct cadence_nand_cdma_desc {
		u64 next_pointer;
		u32 flash_pointer;
		u16 bank;
		u16 rsvd0;
		u16 command_type;
		u16 rsvd1;
		u16 command_flags;
		u16 rsvd2;
		u64 memory_pointer;
		u32 status;
		u32 rsvd3;
		u64 sync_flag_pointer;
		u32 sync_arguments;
		u32 rsvd4;
		u64 ctrl_data_ptr;
	} cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 387 */;
	struct cadence_nand_timings {
		u32 async_toggle_timings;
		u32 timings0;
		u32 timings1;
		u32 timings2;
		u32 dll_phy_ctrl;
		u32 phy_ctrl;
		u32 phy_dqs_timing;
		u32 phy_gate_lpbk_ctrl;
	} cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 375 */;
	struct platform_driver cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 3016 */;
	const struct cadence_nand_dt_devdata *cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 2943 */;
	const struct of_device_id *cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 2942 */;
	struct cadence_nand_dt *cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 2939 */;
	struct resource *cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 2938 */;
	struct platform_device *cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 2936 */;
	const struct of_device_id cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 2927 */[];
	const struct cadence_nand_dt_devdata cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 2922 */;
	struct cadence_nand_dt {
		struct cdns_nand_ctrl cdns_ctrl;
		struct clk *clk;
	} cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 2917 */;
	dma_cap_mask_t cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 2820 */;
	struct device_node *cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 2690 */;
	const struct nand_controller_ops cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 2683 */;
	u8 cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 2645 */;
	struct mtd_info *cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 2590 */;
	u32 cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 2589 */;
	struct cdns_nand_chip *cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 2588 */;
	struct cdns_nand_ctrl *cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 2587 */;
	struct nand_chip *cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 2585 */;
	int cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 2585 */;
	const struct nand_sdr_timings *cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 2297 */;
	const struct nand_data_interface *cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 2295 */;
	const struct mtd_ooblayout_ops cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 2256 */;
	struct mtd_oob_region *cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 2242 */;
	const struct nand_operation *cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 2213 */;
	const struct nand_op_parser cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 2188 */;
	const void *cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 2150 */;
	const struct nand_operation cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 2089 */;
	const u8 *cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 2027 */;
	u64 cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 2024 */;
	unsigned int cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 2023 */;
	const struct nand_op_instr *cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 2022 */;
	const struct nand_subop *cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 2018 */;
	dma_cookie_t cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 1810 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 1809 */;
	struct dma_device *cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 1807 */;
	struct dma_chan *cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 1806 */;
	size_t cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 1802 */;
	struct completion *cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 1795 */;
	u16 *cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 1428 */;
	u8 *cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 1378 */;
	struct cadence_nand_timings *cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 1301 */;
	dma_addr_t cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 1253 */;
	bool cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 1251 */;
	enum dma_data_direction cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 1250 */;
	void *cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 1249 */;
	struct nand_ecc_caps *cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 1076 */;
	struct cadence_nand_irq_status cocci_id/* drivers/mtd/nand/raw/cadence-nand-controller.c 1020 */;
}
