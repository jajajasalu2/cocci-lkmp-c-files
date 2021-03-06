cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/mailbox/ti-msgmgr.c 827 */;
	struct ti_msgmgr_valid_queue_desc cocci_id/* drivers/mailbox/ti-msgmgr.c 784 */;
	const struct ti_msgmgr_valid_queue_desc *cocci_id/* drivers/mailbox/ti-msgmgr.c 720 */;
	struct ti_msgmgr_desc {
		u8 queue_count;
		u8 max_message_size;
		u8 max_messages;
		u8 data_first_reg;
		u8 data_last_reg;
		u32 status_cnt_mask;
		u32 status_err_mask;
		bool tx_polled;
		int tx_poll_timeout_ms;
		const struct ti_msgmgr_valid_queue_desc *valid_queues;
		const char *data_region_name;
		const char *status_region_name;
		const char *ctrl_region_name;
		int num_valid_queues;
		bool is_sproxy;
	} cocci_id/* drivers/mailbox/ti-msgmgr.c 72 */;
	struct resource *cocci_id/* drivers/mailbox/ti-msgmgr.c 711 */;
	struct device_node *cocci_id/* drivers/mailbox/ti-msgmgr.c 710 */;
	const struct of_device_id *cocci_id/* drivers/mailbox/ti-msgmgr.c 709 */;
	struct platform_device *cocci_id/* drivers/mailbox/ti-msgmgr.c 706 */;
	const struct of_device_id cocci_id/* drivers/mailbox/ti-msgmgr.c 698 */[];
	const struct ti_msgmgr_desc cocci_id/* drivers/mailbox/ti-msgmgr.c 684 */;
	const struct ti_msgmgr_valid_queue_desc cocci_id/* drivers/mailbox/ti-msgmgr.c 655 */[];
	const struct mbox_chan_ops cocci_id/* drivers/mailbox/ti-msgmgr.c 646 */;
	char *cocci_id/* drivers/mailbox/ti-msgmgr.c 589 */;
	struct ti_msgmgr_inst cocci_id/* drivers/mailbox/ti-msgmgr.c 526 */;
	const struct of_phandle_args *cocci_id/* drivers/mailbox/ti-msgmgr.c 518 */;
	struct mbox_controller *cocci_id/* drivers/mailbox/ti-msgmgr.c 517 */;
	void cocci_id/* drivers/mailbox/ti-msgmgr.c 499 */;
	struct ti_msgmgr_valid_queue_desc {
		u8 queue_id;
		u8 proxy_id;
		bool is_tx;
	} cocci_id/* drivers/mailbox/ti-msgmgr.c 45 */;
	char cocci_id/* drivers/mailbox/ti-msgmgr.c 413 */[7];
	struct ti_msgmgr_message *cocci_id/* drivers/mailbox/ti-msgmgr.c 353 */;
	int cocci_id/* drivers/mailbox/ti-msgmgr.c 318 */;
	const struct ti_msgmgr_desc *cocci_id/* drivers/mailbox/ti-msgmgr.c 317 */;
	struct ti_msgmgr_inst *cocci_id/* drivers/mailbox/ti-msgmgr.c 316 */;
	struct device *cocci_id/* drivers/mailbox/ti-msgmgr.c 315 */;
	struct ti_queue_inst *cocci_id/* drivers/mailbox/ti-msgmgr.c 314 */;
	bool cocci_id/* drivers/mailbox/ti-msgmgr.c 312 */;
	struct mbox_chan *cocci_id/* drivers/mailbox/ti-msgmgr.c 312 */;
	u8 *cocci_id/* drivers/mailbox/ti-msgmgr.c 247 */;
	u32 *cocci_id/* drivers/mailbox/ti-msgmgr.c 212 */;
	void __iomem *cocci_id/* drivers/mailbox/ti-msgmgr.c 211 */;
	struct ti_msgmgr_message cocci_id/* drivers/mailbox/ti-msgmgr.c 210 */;
	irqreturn_t cocci_id/* drivers/mailbox/ti-msgmgr.c 202 */;
	void *cocci_id/* drivers/mailbox/ti-msgmgr.c 202 */;
	u32 cocci_id/* drivers/mailbox/ti-msgmgr.c 155 */;
	struct ti_msgmgr_inst {
		struct device *dev;
		const struct ti_msgmgr_desc *desc;
		void __iomem *queue_proxy_region;
		void __iomem *queue_state_debug_region;
		void __iomem *queue_ctrl_region;
		u8 num_valid_queues;
		struct ti_queue_inst *qinsts;
		struct mbox_controller mbox;
		struct mbox_chan *chans;
	} cocci_id/* drivers/mailbox/ti-msgmgr.c 132 */;
	struct ti_queue_inst {
		char name[30];
		u8 queue_id;
		u8 proxy_id;
		int irq;
		bool is_tx;
		void __iomem *queue_buff_start;
		void __iomem *queue_buff_end;
		void __iomem *queue_state;
		void __iomem *queue_ctrl;
		struct mbox_chan *chan;
		u32 *rx_buff;
	} cocci_id/* drivers/mailbox/ti-msgmgr.c 104 */;
}
