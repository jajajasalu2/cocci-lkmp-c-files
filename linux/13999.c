cocci_test_suite() {
	struct mtk_field_type {
		u32 reg;
		u8 offset;
		u32 mask;
	} cocci_id/* drivers/media/rc/mtk-cir.c 90 */;
	const u32 cocci_id/* drivers/media/rc/mtk-cir.c 83 */[];
	enum mtk_regs{MTK_IRCLR_REG, MTK_CHKDATA_REG, MTK_IRINT_EN_REG, MTK_IRINT_CLR_REG,} cocci_id/* drivers/media/rc/mtk-cir.c 65 */;
	enum mtk_fields{MTK_CHK_PERIOD, MTK_HW_PERIOD,} cocci_id/* drivers/media/rc/mtk-cir.c 58 */;
	struct platform_driver cocci_id/* drivers/media/rc/mtk-cir.c 445 */;
	struct mtk_ir cocci_id/* drivers/media/rc/mtk-cir.c 304 */;
	const char *cocci_id/* drivers/media/rc/mtk-cir.c 302 */;
	struct resource *cocci_id/* drivers/media/rc/mtk-cir.c 298 */;
	struct device_node *cocci_id/* drivers/media/rc/mtk-cir.c 297 */;
	struct device *cocci_id/* drivers/media/rc/mtk-cir.c 296 */;
	struct platform_device *cocci_id/* drivers/media/rc/mtk-cir.c 294 */;
	const struct of_device_id cocci_id/* drivers/media/rc/mtk-cir.c 287 */[];
	const struct mtk_ir_data cocci_id/* drivers/media/rc/mtk-cir.c 279 */;
	struct ir_raw_event cocci_id/* drivers/media/rc/mtk-cir.c 211 */;
	u8 cocci_id/* drivers/media/rc/mtk-cir.c 209 */;
	irqreturn_t cocci_id/* drivers/media/rc/mtk-cir.c 206 */;
	void *cocci_id/* drivers/media/rc/mtk-cir.c 206 */;
	int cocci_id/* drivers/media/rc/mtk-cir.c 206 */;
	void cocci_id/* drivers/media/rc/mtk-cir.c 190 */;
	unsigned int cocci_id/* drivers/media/rc/mtk-cir.c 185 */;
	u32 cocci_id/* drivers/media/rc/mtk-cir.c 150 */;
	struct mtk_ir *cocci_id/* drivers/media/rc/mtk-cir.c 150 */;
	struct mtk_ir {
		struct device *dev;
		struct rc_dev *rc;
		void __iomem *base;
		int irq;
		struct clk *clk;
		struct clk *bus;
		const struct mtk_ir_data *data;
	} cocci_id/* drivers/media/rc/mtk-cir.c 135 */;
	const struct mtk_field_type cocci_id/* drivers/media/rc/mtk-cir.c 119 */[];
	struct mtk_ir_data {
		const u32 *regs;
		const struct mtk_field_type *fields;
		u8 div;
		u8 ok_count;
		u32 hw_period;
	} cocci_id/* drivers/media/rc/mtk-cir.c 106 */;
}
