cocci_test_suite() {
	const struct of_device_id cocci_id/* drivers/memory/tegra/tegra124-emc.c 977 */[];
	const struct emc_timing *cocci_id/* drivers/memory/tegra/tegra124-emc.c 934 */;
	const void *cocci_id/* drivers/memory/tegra/tegra124-emc.c 932 */;
	int cocci_id/* drivers/memory/tegra/tegra124-emc.c 932 */;
	struct device_node *cocci_id/* drivers/memory/tegra/tegra124-emc.c 876 */;
	bool cocci_id/* drivers/memory/tegra/tegra124-emc.c 565 */;
	enum emc_dll_change cocci_id/* drivers/memory/tegra/tegra124-emc.c 562 */;
	unsigned long cocci_id/* drivers/memory/tegra/tegra124-emc.c 481 */;
	u32 cocci_id/* drivers/memory/tegra/tegra124-emc.c 480 */;
	struct tegra_emc *cocci_id/* drivers/memory/tegra/tegra124-emc.c 480 */;
	void cocci_id/* drivers/memory/tegra/tegra124-emc.c 480 */;
	struct tegra_emc {
		struct device *dev;
		struct tegra_mc *mc;
		void __iomem *regs;
		enum emc_dram_type dram_type;
		unsigned int dram_num;
		struct emc_timing last_timing;
		struct emc_timing *timings;
		unsigned int num_timings;
	} cocci_id/* drivers/memory/tegra/tegra124-emc.c 463 */;
	struct emc_timing {
		unsigned long rate;
		u32 emc_burst_data[ARRAY_SIZE(emc_burst_regs)];
		u32 emc_auto_cal_config;
		u32 emc_auto_cal_config2;
		u32 emc_auto_cal_config3;
		u32 emc_auto_cal_interval;
		u32 emc_bgbias_ctl0;
		u32 emc_cfg;
		u32 emc_cfg_2;
		u32 emc_ctt_term_ctrl;
		u32 emc_mode_1;
		u32 emc_mode_2;
		u32 emc_mode_4;
		u32 emc_mode_reset;
		u32 emc_mrs_wait_cnt;
		u32 emc_sel_dpd_ctrl;
		u32 emc_xm2dqspadctrl2;
		u32 emc_zcal_cnt_long;
		u32 emc_zcal_interval;
	} cocci_id/* drivers/memory/tegra/tegra124-emc.c 439 */;
	const unsigned long cocci_id/* drivers/memory/tegra/tegra124-emc.c 293 */[];
	enum emc_dll_change{DLL_CHANGE_NONE, DLL_CHANGE_ON, DLL_CHANGE_OFF,} cocci_id/* drivers/memory/tegra/tegra124-emc.c 287 */;
	enum emc_dram_type{DRAM_TYPE_DDR3=0, DRAM_TYPE_DDR1=1, DRAM_TYPE_LPDDR3=2, DRAM_TYPE_DDR2=3,} cocci_id/* drivers/memory/tegra/tegra124-emc.c 280 */;
	struct platform_driver cocci_id/* drivers/memory/tegra/tegra124-emc.c 1154 */;
	struct resource *cocci_id/* drivers/memory/tegra/tegra124-emc.c 1088 */;
	struct platform_device *cocci_id/* drivers/memory/tegra/tegra124-emc.c 1083 */;
	struct dentry *cocci_id/* drivers/memory/tegra/tegra124-emc.c 1057 */;
	struct device *cocci_id/* drivers/memory/tegra/tegra124-emc.c 1055 */;
	const struct file_operations cocci_id/* drivers/memory/tegra/tegra124-emc.c 1048 */;
	struct file *cocci_id/* drivers/memory/tegra/tegra124-emc.c 1042 */;
	struct inode *cocci_id/* drivers/memory/tegra/tegra124-emc.c 1041 */;
	struct emc_timing *cocci_id/* drivers/memory/tegra/tegra124-emc.c 1029 */;
	unsigned int cocci_id/* drivers/memory/tegra/tegra124-emc.c 1026 */;
	const char *cocci_id/* drivers/memory/tegra/tegra124-emc.c 1025 */;
	struct seq_file *cocci_id/* drivers/memory/tegra/tegra124-emc.c 1022 */;
	u64 cocci_id/* drivers/memory/tegra/tegra124-emc.c 1012 */;
	struct clk *cocci_id/* drivers/memory/tegra/tegra124-emc.c 1005 */;
	u64 *cocci_id/* drivers/memory/tegra/tegra124-emc.c 1003 */;
	void *cocci_id/* drivers/memory/tegra/tegra124-emc.c 1003 */;
}
