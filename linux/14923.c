cocci_test_suite() {
	int cocci_id/* drivers/clk/sunxi/clk-usb.c 97 */;
	void __iomem *cocci_id/* drivers/clk/sunxi/clk-usb.c 96 */;
	const char *cocci_id/* drivers/clk/sunxi/clk-usb.c 94 */;
	struct usb_reset_data *cocci_id/* drivers/clk/sunxi/clk-usb.c 93 */;
	struct clk_onecell_data *cocci_id/* drivers/clk/sunxi/clk-usb.c 92 */;
	spinlock_t *cocci_id/* drivers/clk/sunxi/clk-usb.c 90 */;
	const struct usb_clk_data *cocci_id/* drivers/clk/sunxi/clk-usb.c 89 */;
	struct usb_clk_data {
		u32 clk_mask;
		u32 reset_mask;
		bool reset_needs_clk;
	} cocci_id/* drivers/clk/sunxi/clk-usb.c 82 */;
	const struct reset_control_ops cocci_id/* drivers/clk/sunxi/clk-usb.c 71 */;
	u32 cocci_id/* drivers/clk/sunxi/clk-usb.c 36 */;
	struct usb_reset_data cocci_id/* drivers/clk/sunxi/clk-usb.c 33 */;
	unsigned long cocci_id/* drivers/clk/sunxi/clk-usb.c 30 */;
	struct reset_controller_dev *cocci_id/* drivers/clk/sunxi/clk-usb.c 29 */;
	struct usb_reset_data {
		void __iomem *reg;
		spinlock_t *lock;
		struct clk *clk;
		struct reset_controller_dev rcdev;
	} cocci_id/* drivers/clk/sunxi/clk-usb.c 22 */;
	struct device_node *cocci_id/* drivers/clk/sunxi/clk-usb.c 172 */;
	void __init cocci_id/* drivers/clk/sunxi/clk-usb.c 172 */;
	const struct usb_clk_data cocci_id/* drivers/clk/sunxi/clk-usb.c 165 */;
	struct clk *cocci_id/* drivers/clk/sunxi/clk-usb.c 117 */;
	struct clk_onecell_data cocci_id/* drivers/clk/sunxi/clk-usb.c 113 */;
	unsigned long *cocci_id/* drivers/clk/sunxi/clk-usb.c 110 */;
}
