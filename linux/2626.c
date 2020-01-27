cocci_test_suite() {
	u32 cocci_id/* drivers/ptp/ptp_dte.c 82 */;
	s64 cocci_id/* drivers/ptp/ptp_dte.c 80 */;
	void __iomem *cocci_id/* drivers/ptp/ptp_dte.c 80 */;
	void cocci_id/* drivers/ptp/ptp_dte.c 62 */;
	struct ptp_dte {
		void __iomem *regs;
		struct ptp_clock *ptp_clk;
		struct ptp_clock_info caps;
		struct device *dev;
		u32 ts_ovf_last;
		u32 ts_wrap_cnt;
		spinlock_t lock;
		u32 reg_val[DTE_NUM_REGS_TO_RESTORE];
	} cocci_id/* drivers/ptp/ptp_dte.c 51 */;
	u64 cocci_id/* drivers/ptp/ptp_dte.c 47 */;
	struct platform_driver cocci_id/* drivers/ptp/ptp_dte.c 334 */;
	const struct of_device_id cocci_id/* drivers/ptp/ptp_dte.c 328 */[];
	const struct dev_pm_ops cocci_id/* drivers/ptp/ptp_dte.c 318 */;
	u8 cocci_id/* drivers/ptp/ptp_dte.c 273 */;
	struct device *cocci_id/* drivers/ptp/ptp_dte.c 242 */;
	struct platform_device *cocci_id/* drivers/ptp/ptp_dte.c 239 */;
	const struct ptp_clock_info cocci_id/* drivers/ptp/ptp_dte.c 225 */;
	struct ptp_clock_request *cocci_id/* drivers/ptp/ptp_dte.c 220 */;
	const struct timespec64 *cocci_id/* drivers/ptp/ptp_dte.c 195 */;
	struct timespec64 *cocci_id/* drivers/ptp/ptp_dte.c 182 */;
	struct ptp_dte cocci_id/* drivers/ptp/ptp_dte.c 151 */;
	unsigned long cocci_id/* drivers/ptp/ptp_dte.c 150 */;
	s32 cocci_id/* drivers/ptp/ptp_dte.c 147 */;
	struct ptp_clock_info *cocci_id/* drivers/ptp/ptp_dte.c 147 */;
	int cocci_id/* drivers/ptp/ptp_dte.c 147 */;
	struct ptp_dte *cocci_id/* drivers/ptp/ptp_dte.c 125 */;
}
