cocci_test_suite() {
	struct cmdq {
		struct mbox_controller mbox;
		void __iomem *base;
		u32 irq;
		u32 thread_nr;
		u32 irq_mask;
		struct cmdq_thread *thread;
		struct clk *clock;
		bool suspended;
	} cocci_id/* drivers/mailbox/mtk-cmdq-mailbox.c 70 */;
	struct cmdq_task {
		struct cmdq *cmdq;
		struct list_head list_entry;
		dma_addr_t pa_base;
		struct cmdq_thread *thread;
		struct cmdq_pkt *pkt;
	} cocci_id/* drivers/mailbox/mtk-cmdq-mailbox.c 62 */;
	void __exit cocci_id/* drivers/mailbox/mtk-cmdq-mailbox.c 566 */;
	void cocci_id/* drivers/mailbox/mtk-cmdq-mailbox.c 566 */;
	int __init cocci_id/* drivers/mailbox/mtk-cmdq-mailbox.c 561 */;
	struct platform_driver cocci_id/* drivers/mailbox/mtk-cmdq-mailbox.c 551 */;
	const struct of_device_id cocci_id/* drivers/mailbox/mtk-cmdq-mailbox.c 545 */[];
	const struct dev_pm_ops cocci_id/* drivers/mailbox/mtk-cmdq-mailbox.c 540 */;
	struct cmdq_thread {
		struct mbox_chan *chan;
		void __iomem *base;
		struct list_head task_busy_list;
		u32 priority;
		bool atomic_exec;
	} cocci_id/* drivers/mailbox/mtk-cmdq-mailbox.c 54 */;
	u32 cocci_id/* drivers/mailbox/mtk-cmdq-mailbox.c 482 */;
	struct resource *cocci_id/* drivers/mailbox/mtk-cmdq-mailbox.c 461 */;
	struct device *cocci_id/* drivers/mailbox/mtk-cmdq-mailbox.c 460 */;
	struct platform_device *cocci_id/* drivers/mailbox/mtk-cmdq-mailbox.c 458 */;
	const struct of_phandle_args *cocci_id/* drivers/mailbox/mtk-cmdq-mailbox.c 442 */;
	struct mbox_controller *cocci_id/* drivers/mailbox/mtk-cmdq-mailbox.c 441 */;
	const struct mbox_chan_ops cocci_id/* drivers/mailbox/mtk-cmdq-mailbox.c 435 */;
	struct cmdq_task *cocci_id/* drivers/mailbox/mtk-cmdq-mailbox.c 356 */;
	struct cmdq_pkt *cocci_id/* drivers/mailbox/mtk-cmdq-mailbox.c 353 */;
	struct mbox_chan *cocci_id/* drivers/mailbox/mtk-cmdq-mailbox.c 351 */;
	struct cmdq_thread *cocci_id/* drivers/mailbox/mtk-cmdq-mailbox.c 298 */;
	unsigned long cocci_id/* drivers/mailbox/mtk-cmdq-mailbox.c 290 */;
	irqreturn_t cocci_id/* drivers/mailbox/mtk-cmdq-mailbox.c 287 */;
	void *cocci_id/* drivers/mailbox/mtk-cmdq-mailbox.c 287 */;
	struct cmdq_task cocci_id/* drivers/mailbox/mtk-cmdq-mailbox.c 228 */;
	cmdq_async_flush_cb cocci_id/* drivers/mailbox/mtk-cmdq-mailbox.c 212 */;
	struct cmdq_cb_data cocci_id/* drivers/mailbox/mtk-cmdq-mailbox.c 210 */;
	struct cmdq_task_cb *cocci_id/* drivers/mailbox/mtk-cmdq-mailbox.c 209 */;
	enum cmdq_cb_status cocci_id/* drivers/mailbox/mtk-cmdq-mailbox.c 207 */;
	u64 cocci_id/* drivers/mailbox/mtk-cmdq-mailbox.c 165 */;
	bool cocci_id/* drivers/mailbox/mtk-cmdq-mailbox.c 165 */;
	u64 *cocci_id/* drivers/mailbox/mtk-cmdq-mailbox.c 152 */;
	typeof(*task) cocci_id/* drivers/mailbox/mtk-cmdq-mailbox.c 151 */;
	int cocci_id/* drivers/mailbox/mtk-cmdq-mailbox.c 108 */;
	struct cmdq *cocci_id/* drivers/mailbox/mtk-cmdq-mailbox.c 106 */;
}
