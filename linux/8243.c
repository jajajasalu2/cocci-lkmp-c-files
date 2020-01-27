cocci_test_suite() {
	const u16 cocci_id/* drivers/net/ethernet/ti/cpsw_sl.c 60 */[];
	void cocci_id/* drivers/net/ethernet/ti/cpsw_sl.c 308 */;
	u32 cocci_id/* drivers/net/ethernet/ti/cpsw_sl.c 291 */;
	struct cpsw_sl *cocci_id/* drivers/net/ethernet/ti/cpsw_sl.c 291 */;
	unsigned long cocci_id/* drivers/net/ethernet/ti/cpsw_sl.c 256 */;
	struct cpsw_sl cocci_id/* drivers/net/ethernet/ti/cpsw_sl.c 237 */;
	const struct cpsw_sl_dev_id *cocci_id/* drivers/net/ethernet/ti/cpsw_sl.c 234 */;
	void __iomem *cocci_id/* drivers/net/ethernet/ti/cpsw_sl.c 232 */;
	const char *cocci_id/* drivers/net/ethernet/ti/cpsw_sl.c 231 */;
	struct device *cocci_id/* drivers/net/ethernet/ti/cpsw_sl.c 231 */;
	int cocci_id/* drivers/net/ethernet/ti/cpsw_sl.c 191 */;
	enum cpsw_sl_regs cocci_id/* drivers/net/ethernet/ti/cpsw_sl.c 189 */;
	const struct cpsw_sl_dev_id cocci_id/* drivers/net/ethernet/ti/cpsw_sl.c 120 */[];
	struct cpsw_sl_dev_id {
		const char *device_id;
		const u16 *regs;
		const u32 control_features;
		const u32 regs_offset;
		const u32 idle_mask;
	} cocci_id/* drivers/net/ethernet/ti/cpsw_sl.c 112 */;
	struct cpsw_sl {
		struct device *dev;
		void __iomem *sl_base;
		const u16 *regs;
		u32 control_features;
		u32 idle_mask;
	} cocci_id/* drivers/net/ethernet/ti/cpsw_sl.c 104 */;
}
