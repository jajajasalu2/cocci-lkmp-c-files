cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/soc/xilinx/xlnx_vcu.c 617 */;
	const struct of_device_id cocci_id/* drivers/soc/xilinx/xlnx_vcu.c 610 */[];
	struct xvcu_device *cocci_id/* drivers/soc/xilinx/xlnx_vcu.c 500 */;
	struct resource *cocci_id/* drivers/soc/xilinx/xlnx_vcu.c 499 */;
	struct platform_device *cocci_id/* drivers/soc/xilinx/xlnx_vcu.c 497 */;
	int cocci_id/* drivers/soc/xilinx/xlnx_vcu.c 497 */;
	unsigned long cocci_id/* drivers/soc/xilinx/xlnx_vcu.c 450 */;
	const struct xvcu_pll_cfg *cocci_id/* drivers/soc/xilinx/xlnx_vcu.c 301 */;
	void cocci_id/* drivers/soc/xilinx/xlnx_vcu.c 255 */;
	u32 cocci_id/* drivers/soc/xilinx/xlnx_vcu.c 244 */;
	void __iomem *cocci_id/* drivers/soc/xilinx/xlnx_vcu.c 244 */;
	const struct xvcu_pll_cfg cocci_id/* drivers/soc/xilinx/xlnx_vcu.c 132 */[];
	struct xvcu_pll_cfg {
		u32 fbdiv;
		u32 cp;
		u32 res;
		u32 lfhf;
		u32 lock_dly;
		u32 lock_cnt;
	} cocci_id/* drivers/soc/xilinx/xlnx_vcu.c 123 */;
	struct xvcu_device {
		struct device *dev;
		struct clk *pll_ref;
		struct clk *aclk;
		void __iomem *logicore_reg_ba;
		void __iomem *vcu_slcr_ba;
		u32 coreclk;
	} cocci_id/* drivers/soc/xilinx/xlnx_vcu.c 105 */;
}
