cocci_test_suite() {
	struct zynqmp_ipi_mbox {
		struct zynqmp_ipi_pdata *pdata;
		struct device dev;
		u32 remote_id;
		struct mbox_controller mbox;
		struct zynqmp_ipi_mchan mchans[2];
	} cocci_id/* drivers/mailbox/zynqmp-ipi-mailbox.c 88 */;
	void __exit cocci_id/* drivers/mailbox/zynqmp-ipi-mailbox.c 717 */;
	void cocci_id/* drivers/mailbox/zynqmp-ipi-mailbox.c 717 */;
	int __init cocci_id/* drivers/mailbox/zynqmp-ipi-mailbox.c 711 */;
	struct platform_driver cocci_id/* drivers/mailbox/zynqmp-ipi-mailbox.c 702 */;
	struct zynqmp_ipi_mchan {
		int is_opened;
		void __iomem *req_buf;
		void __iomem *resp_buf;
		void *rx_buf;
		size_t req_buf_size;
		size_t resp_buf_size;
		unsigned int chan_type;
	} cocci_id/* drivers/mailbox/zynqmp-ipi-mailbox.c 67 */;
	char *cocci_id/* drivers/mailbox/zynqmp-ipi-mailbox.c 655 */;
	struct platform_device *cocci_id/* drivers/mailbox/zynqmp-ipi-mailbox.c 631 */;
	int cocci_id/* drivers/mailbox/zynqmp-ipi-mailbox.c 619 */;
	struct zynqmp_ipi_mbox *cocci_id/* drivers/mailbox/zynqmp-ipi-mailbox.c 618 */;
	struct zynqmp_ipi_pdata *cocci_id/* drivers/mailbox/zynqmp-ipi-mailbox.c 616 */;
	struct zynqmp_ipi_message cocci_id/* drivers/mailbox/zynqmp-ipi-mailbox.c 534 */;
	struct resource cocci_id/* drivers/mailbox/zynqmp-ipi-mailbox.c 479 */;
	struct mbox_controller *cocci_id/* drivers/mailbox/zynqmp-ipi-mailbox.c 478 */;
	struct resource *cocci_id/* drivers/mailbox/zynqmp-ipi-mailbox.c 438 */;
	const char *cocci_id/* drivers/mailbox/zynqmp-ipi-mailbox.c 437 */;
	struct device_node *cocci_id/* drivers/mailbox/zynqmp-ipi-mailbox.c 436 */;
	const struct of_device_id cocci_id/* drivers/mailbox/zynqmp-ipi-mailbox.c 421 */[];
	unsigned int cocci_id/* drivers/mailbox/zynqmp-ipi-mailbox.c 408 */;
	const struct of_phandle_args *cocci_id/* drivers/mailbox/zynqmp-ipi-mailbox.c 404 */;
	const struct mbox_chan_ops cocci_id/* drivers/mailbox/zynqmp-ipi-mailbox.c 387 */;
	struct device *cocci_id/* drivers/mailbox/zynqmp-ipi-mailbox.c 229 */;
	bool cocci_id/* drivers/mailbox/zynqmp-ipi-mailbox.c 227 */;
	struct arm_smccc_res cocci_id/* drivers/mailbox/zynqmp-ipi-mailbox.c 154 */;
	u64 cocci_id/* drivers/mailbox/zynqmp-ipi-mailbox.c 153 */;
	struct zynqmp_ipi_message *cocci_id/* drivers/mailbox/zynqmp-ipi-mailbox.c 152 */;
	struct zynqmp_ipi_mchan *cocci_id/* drivers/mailbox/zynqmp-ipi-mailbox.c 151 */;
	struct mbox_chan *cocci_id/* drivers/mailbox/zynqmp-ipi-mailbox.c 149 */;
	irqreturn_t cocci_id/* drivers/mailbox/zynqmp-ipi-mailbox.c 146 */;
	void *cocci_id/* drivers/mailbox/zynqmp-ipi-mailbox.c 146 */;
	struct arm_smccc_res *cocci_id/* drivers/mailbox/zynqmp-ipi-mailbox.c 123 */;
	unsigned long cocci_id/* drivers/mailbox/zynqmp-ipi-mailbox.c 122 */;
	struct device_driver cocci_id/* drivers/mailbox/zynqmp-ipi-mailbox.c 116 */;
	struct zynqmp_ipi_pdata {
		struct device *dev;
		int irq;
		unsigned int method;
		u32 local_id;
		int num_mboxes;
		struct zynqmp_ipi_mbox *ipi_mboxes;
	} cocci_id/* drivers/mailbox/zynqmp-ipi-mailbox.c 107 */;
}
