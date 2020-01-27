cocci_test_suite() {
	struct brcmstb_pm_control cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-mips.c 89 */;
	u32 cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-mips.c 84 */[MAX_GP_REGS];
	struct brcmstb_mem_transfer {
		struct brcmstb_mem_transfer *next;
		void *src;
		void *dst;
		dma_addr_t pa_src;
		dma_addr_t pa_dst;
		u32 len;
		u8 key;
		u8 mode;
		u8 src_remapped;
		u8 dst_remapped;
		u8 src_dst_remapped;
	} cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-mips.c 66 */;
	struct brcmstb_mem_transfer cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-mips.c 64 */;
	struct brcm_pm_s3_context {
		u32 cp0_regs[MAX_CP0_REGS];
		u32 memc0_rts[NUM_MEMC_CLIENTS];
		u32 sc_boot_vec;
	} cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-mips.c 58 */;
	struct brcmstb_pm_control {
		void __iomem *aon_ctrl_base;
		void __iomem *aon_sram_base;
		void __iomem *timers_base;
		struct brcmstb_memc memcs[MAX_NUM_MEMC];
		int num_memc;
	} cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-mips.c 50 */;
	struct brcmstb_memc {
		void __iomem *ddr_phy_base;
		void __iomem *arb_base;
	} cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-mips.c 45 */;
	struct device_node *cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-mips.c 367 */;
	const void **cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-mips.c 365 */;
	int cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-mips.c 365 */;
	const struct of_device_id *cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-mips.c 364 */;
	void __iomem *cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-mips.c 364 */;
	const struct of_device_id cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-mips.c 338 */[];
	const struct platform_suspend_ops cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-mips.c 333 */;
	suspend_state_t cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-mips.c 305 */;
	bool cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-mips.c 281 */;
	u32 cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-mips.c 264 */[6];
	unsigned long cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-mips.c 184 */;
	struct brcm_pm_s3_context cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-mips.c 182 */;
	u32 cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-mips.c 135 */;
	struct brcm_pm_s3_context *cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-mips.c 111 */;
	void cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-mips.c 111 */;
}
