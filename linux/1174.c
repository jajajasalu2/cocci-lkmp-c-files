cocci_test_suite() {
	struct cppi41_dma_channel cocci_id/* drivers/usb/musb/musb_cppi41.c 789 */;
	unsigned int cocci_id/* drivers/usb/musb/musb_cppi41.c 684 */;
	const char *cocci_id/* drivers/usb/musb/musb_cppi41.c 682 */;
	struct device_node *cocci_id/* drivers/usb/musb/musb_cppi41.c 669 */;
	struct device *cocci_id/* drivers/usb/musb/musb_cppi41.c 668 */;
	void __iomem *cocci_id/* drivers/usb/musb/musb_cppi41.c 578 */;
	struct cppi41_dma_controller cocci_id/* drivers/usb/musb/musb_cppi41.c 486 */;
	struct dma_controller *cocci_id/* drivers/usb/musb/musb_cppi41.c 482 */;
	unsigned cocci_id/* drivers/usb/musb/musb_cppi41.c 421 */;
	struct musb *cocci_id/* drivers/usb/musb/musb_cppi41.c 420 */;
	enum dma_transfer_direction cocci_id/* drivers/usb/musb/musb_cppi41.c 419 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/usb/musb/musb_cppi41.c 418 */;
	struct dma_chan *cocci_id/* drivers/usb/musb/musb_cppi41.c 417 */;
	struct cppi41_dma_controller *cocci_id/* drivers/usb/musb/musb_cppi41.c 416 */;
	struct cppi41_dma_channel *cocci_id/* drivers/usb/musb/musb_cppi41.c 415 */;
	u32 cocci_id/* drivers/usb/musb/musb_cppi41.c 413 */;
	dma_addr_t cocci_id/* drivers/usb/musb/musb_cppi41.c 413 */;
	u8 cocci_id/* drivers/usb/musb/musb_cppi41.c 412 */;
	u16 cocci_id/* drivers/usb/musb/musb_cppi41.c 412 */;
	bool cocci_id/* drivers/usb/musb/musb_cppi41.c 411 */;
	struct dma_channel *cocci_id/* drivers/usb/musb/musb_cppi41.c 411 */;
	struct cppi41_dma_controller {
		struct dma_controller controller;
		struct cppi41_dma_channel *rx_channel;
		struct cppi41_dma_channel *tx_channel;
		struct hrtimer early_tx;
		struct list_head early_tx_list;
		u32 rx_mode;
		u32 tx_mode;
		u32 auto_req;
		u32 tdown_reg;
		u32 autoreq_reg;
		void (*set_dma_mode)(struct cppi41_dma_channel *cppi41_channel,
				     unsigned int mode);
		u8 num_channels;
	} cocci_id/* drivers/usb/musb/musb_cppi41.c 36 */;
	int cocci_id/* drivers/usb/musb/musb_cppi41.c 231 */;
	struct dma_tx_state cocci_id/* drivers/usb/musb/musb_cppi41.c 229 */;
	unsigned long cocci_id/* drivers/usb/musb/musb_cppi41.c 228 */;
	struct musb_hw_ep *cocci_id/* drivers/usb/musb/musb_cppi41.c 225 */;
	const struct dmaengine_result *cocci_id/* drivers/usb/musb/musb_cppi41.c 221 */;
	void *cocci_id/* drivers/usb/musb/musb_cppi41.c 220 */;
	void cocci_id/* drivers/usb/musb/musb_cppi41.c 220 */;
	enum hrtimer_restart cocci_id/* drivers/usb/musb/musb_cppi41.c 185 */;
	struct hrtimer *cocci_id/* drivers/usb/musb/musb_cppi41.c 185 */;
	void cocci_id/* drivers/usb/musb/musb_cppi41.c 114 */(void *private_data,
							      const struct dmaengine_result *result);
}
