cocci_test_suite() {
	void cocci_id/* drivers/mfd/ssbi.c 80 */;
	struct ssbi {
		struct device *slave;
		void __iomem *base;
		spinlock_t lock;
		enum ssbi_controller_type controller_type;
		int (*read)(struct ssbi *, u16 addr, u8 *buf, int len);
		int (*write)(struct ssbi *, u16 addr, const u8 *buf, int len);
	} cocci_id/* drivers/mfd/ssbi.c 66 */;
	enum ssbi_controller_type{MSM_SBI_CTRL_SSBI=0, MSM_SBI_CTRL_SSBI2, MSM_SBI_CTRL_PMIC_ARBITER,} cocci_id/* drivers/mfd/ssbi.c 60 */;
	struct platform_driver cocci_id/* drivers/mfd/ssbi.c 316 */;
	const struct of_device_id cocci_id/* drivers/mfd/ssbi.c 310 */[];
	const char *cocci_id/* drivers/mfd/ssbi.c 267 */;
	struct resource *cocci_id/* drivers/mfd/ssbi.c 265 */;
	struct device_node *cocci_id/* drivers/mfd/ssbi.c 264 */;
	struct platform_device *cocci_id/* drivers/mfd/ssbi.c 262 */;
	unsigned long cocci_id/* drivers/mfd/ssbi.c 237 */;
	struct device *cocci_id/* drivers/mfd/ssbi.c 234 */;
	const u8 *cocci_id/* drivers/mfd/ssbi.c 216 */;
	u32 cocci_id/* drivers/mfd/ssbi.c 198 */;
	u16 cocci_id/* drivers/mfd/ssbi.c 196 */;
	u8 *cocci_id/* drivers/mfd/ssbi.c 196 */;
	struct ssbi *cocci_id/* drivers/mfd/ssbi.c 196 */;
	int cocci_id/* drivers/mfd/ssbi.c 195 */;
}
