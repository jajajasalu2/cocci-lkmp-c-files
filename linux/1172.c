cocci_test_suite() {
	void cocci_id/* drivers/usb/musb/musbhsdma.c 79 */(struct dma_channel *channel);
	struct musb_dma_controller {
		struct dma_controller controller;
		struct musb_dma_channel channel[MUSB_HSDMA_CHANNELS];
		void *private_data;
		void __iomem *base;
		u8 channel_count;
		u8 used_channels;
		int irq;
	} cocci_id/* drivers/usb/musb/musbhsdma.c 69 */;
	struct musb_dma_channel {
		struct dma_channel channel;
		struct musb_dma_controller *controller;
		u32 start_addr;
		u32 len;
		u16 max_packet_sz;
		u8 idx;
		u8 epnum;
		u8 transmit;
	} cocci_id/* drivers/usb/musb/musbhsdma.c 58 */;
	struct platform_device *cocci_id/* drivers/usb/musb/musbhsdma.c 406 */;
	struct device *cocci_id/* drivers/usb/musb/musbhsdma.c 405 */;
	unsigned long cocci_id/* drivers/usb/musb/musbhsdma.c 282 */;
	irqreturn_t cocci_id/* drivers/usb/musb/musbhsdma.c 271 */;
	void *cocci_id/* drivers/usb/musb/musbhsdma.c 271 */;
	int cocci_id/* drivers/usb/musb/musbhsdma.c 225 */;
	void __iomem *cocci_id/* drivers/usb/musb/musbhsdma.c 155 */;
	struct musb *cocci_id/* drivers/usb/musb/musbhsdma.c 154 */;
	struct musb_dma_controller *cocci_id/* drivers/usb/musb/musbhsdma.c 153 */;
	struct musb_dma_channel *cocci_id/* drivers/usb/musb/musbhsdma.c 152 */;
	u32 cocci_id/* drivers/usb/musb/musbhsdma.c 150 */;
	dma_addr_t cocci_id/* drivers/usb/musb/musbhsdma.c 150 */;
	u8 cocci_id/* drivers/usb/musb/musbhsdma.c 149 */;
	u16 cocci_id/* drivers/usb/musb/musbhsdma.c 149 */;
	struct dma_channel *cocci_id/* drivers/usb/musb/musbhsdma.c 148 */;
	void cocci_id/* drivers/usb/musb/musbhsdma.c 148 */;
	struct musb_dma_controller cocci_id/* drivers/usb/musb/musbhsdma.c 107 */;
	struct musb_hw_ep *cocci_id/* drivers/usb/musb/musbhsdma.c 104 */;
	struct dma_controller *cocci_id/* drivers/usb/musb/musbhsdma.c 103 */;
}
