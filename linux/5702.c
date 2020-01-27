cocci_test_suite() {
	struct slim_ctrl_buf {
		void *base;
		spinlock_t lock;
		int head;
		int tail;
		int sl_sz;
		int n;
	} cocci_id/* drivers/slimbus/qcom-ctrl.c 93 */;
	struct platform_driver cocci_id/* drivers/slimbus/qcom-ctrl.c 730 */;
	const struct of_device_id cocci_id/* drivers/slimbus/qcom-ctrl.c 724 */[];
	struct device *cocci_id/* drivers/slimbus/qcom-ctrl.c 697 */;
	struct completion *cocci_id/* drivers/slimbus/qcom-ctrl.c 541 */;
	struct resource *cocci_id/* drivers/slimbus/qcom-ctrl.c 475 */;
	struct platform_device *cocci_id/* drivers/slimbus/qcom-ctrl.c 472 */;
	void cocci_id/* drivers/slimbus/qcom-ctrl.c 472 */;
	__be16 *cocci_id/* drivers/slimbus/qcom-ctrl.c 455 */;
	struct slim_eaddr cocci_id/* drivers/slimbus/qcom-ctrl.c 452 */;
	struct qcom_slim_ctrl cocci_id/* drivers/slimbus/qcom-ctrl.c 444 */;
	u8 cocci_id/* drivers/slimbus/qcom-ctrl.c 441 */[SLIM_MSGQ_BUF_LEN];
	struct work_struct *cocci_id/* drivers/slimbus/qcom-ctrl.c 439 */;
	void *cocci_id/* drivers/slimbus/qcom-ctrl.c 411 */;
	struct slim_val_inf cocci_id/* drivers/slimbus/qcom-ctrl.c 400 */;
	struct {
		__be16 manf_id;
		__be16 prod_code;
		u8 dev_index;
		u8 instance;
		u8 laddr;
	}__packed cocci_id/* drivers/slimbus/qcom-ctrl.c 393 */;
	u8 cocci_id/* drivers/slimbus/qcom-ctrl.c 390 */;
	struct slim_eaddr *cocci_id/* drivers/slimbus/qcom-ctrl.c 390 */;
	unsigned long cocci_id/* drivers/slimbus/qcom-ctrl.c 331 */;
	struct slim_msg_txn *cocci_id/* drivers/slimbus/qcom-ctrl.c 326 */;
	struct qcom_slim_ctrl *cocci_id/* drivers/slimbus/qcom-ctrl.c 280 */;
	struct slim_controller *cocci_id/* drivers/slimbus/qcom-ctrl.c 278 */;
	int cocci_id/* drivers/slimbus/qcom-ctrl.c 278 */;
	u8 *cocci_id/* drivers/slimbus/qcom-ctrl.c 246 */;
	bool cocci_id/* drivers/slimbus/qcom-ctrl.c 211 */;
	u32 *cocci_id/* drivers/slimbus/qcom-ctrl.c 210 */;
	u32 cocci_id/* drivers/slimbus/qcom-ctrl.c 208 */;
	irqreturn_t cocci_id/* drivers/slimbus/qcom-ctrl.c 207 */;
	struct qcom_slim_ctrl {
		struct slim_controller ctrl;
		struct slim_framer framer;
		struct device *dev;
		void __iomem *base;
		void __iomem *slew_reg;
		struct slim_ctrl_buf rx;
		struct slim_ctrl_buf tx;
		struct completion **wr_comp;
		int irq;
		struct workqueue_struct *rxwq;
		struct work_struct wd;
		struct clk *rclk;
		struct clk *hclk;
	} cocci_id/* drivers/slimbus/qcom-ctrl.c 102 */;
}
