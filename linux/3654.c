cocci_test_suite() {
	u8 cocci_id/* drivers/firmware/imx/imx-scu-irq.c 98 */;
	u32 cocci_id/* drivers/firmware/imx/imx-scu-irq.c 98 */;
	struct imx_sc_msg_irq_get_status cocci_id/* drivers/firmware/imx/imx-scu-irq.c 68 */;
	struct work_struct *cocci_id/* drivers/firmware/imx/imx-scu-irq.c 66 */;
	u8 *cocci_id/* drivers/firmware/imx/imx-scu-irq.c 60 */;
	unsigned long cocci_id/* drivers/firmware/imx/imx-scu-irq.c 60 */;
	struct notifier_block *cocci_id/* drivers/firmware/imx/imx-scu-irq.c 46 */;
	struct work_struct cocci_id/* drivers/firmware/imx/imx-scu-irq.c 43 */;
	struct imx_sc_ipc *cocci_id/* drivers/firmware/imx/imx-scu-irq.c 42 */;
	struct imx_sc_msg_irq_enable {
		struct imx_sc_rpc_msg hdr;
		u32 mask;
		u16 resource;
		u8 group;
		u8 enable;
	}__packed cocci_id/* drivers/firmware/imx/imx-scu-irq.c 34 */;
	struct imx_sc_msg_irq_get_status {
		struct imx_sc_rpc_msg hdr;
		union {
			struct {
				u16 resource;
				u8 group;
				u8 reserved;
			}__packed req;
			struct {
				u32 status;
			} resp;
		} data;
	} cocci_id/* drivers/firmware/imx/imx-scu-irq.c 20 */;
	struct mbox_chan *cocci_id/* drivers/firmware/imx/imx-scu-irq.c 135 */;
	struct mbox_client *cocci_id/* drivers/firmware/imx/imx-scu-irq.c 134 */;
	struct of_phandle_args cocci_id/* drivers/firmware/imx/imx-scu-irq.c 133 */;
	struct device *cocci_id/* drivers/firmware/imx/imx-scu-irq.c 131 */;
	int cocci_id/* drivers/firmware/imx/imx-scu-irq.c 131 */;
	void *cocci_id/* drivers/firmware/imx/imx-scu-irq.c 126 */;
	void cocci_id/* drivers/firmware/imx/imx-scu-irq.c 126 */;
	struct imx_sc_rpc_msg *cocci_id/* drivers/firmware/imx/imx-scu-irq.c 101 */;
	struct imx_sc_msg_irq_enable cocci_id/* drivers/firmware/imx/imx-scu-irq.c 100 */;
}
