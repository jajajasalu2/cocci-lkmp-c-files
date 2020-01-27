cocci_test_suite() {
	void *cocci_id/* drivers/usb/musb/tusb6010_omap.c 97 */;
	struct tusb_omap_dma_ch cocci_id/* drivers/usb/musb/tusb6010_omap.c 624 */;
	struct dma_channel cocci_id/* drivers/usb/musb/tusb6010_omap.c 618 */;
	struct dma_channel *cocci_id/* drivers/usb/musb/tusb6010_omap.c 615 */;
	struct tusb_omap_dma cocci_id/* drivers/usb/musb/tusb6010_omap.c 599 */;
	int cocci_id/* drivers/usb/musb/tusb6010_omap.c 587 */;
	struct tusb_omap_dma *cocci_id/* drivers/usb/musb/tusb6010_omap.c 586 */;
	struct musb *cocci_id/* drivers/usb/musb/tusb6010_omap.c 583 */;
	void __iomem *cocci_id/* drivers/usb/musb/tusb6010_omap.c 583 */;
	struct dma_controller *cocci_id/* drivers/usb/musb/tusb6010_omap.c 582 */;
	char cocci_id/* drivers/usb/musb/tusb6010_omap.c 551 */[8];
	struct tusb_dma_data *cocci_id/* drivers/usb/musb/tusb6010_omap.c 543 */;
	void cocci_id/* drivers/usb/musb/tusb6010_omap.c 514 */;
	struct tusb_omap_dma {
		struct dma_controller controller;
		void __iomem *tbase;
		struct tusb_dma_data dma_pool[MAX_DMAREQ];
		unsigned multichannel:1;
	} cocci_id/* drivers/usb/musb/tusb6010_omap.c 50 */;
	u8 cocci_id/* drivers/usb/musb/tusb6010_omap.c 424 */;
	struct musb_hw_ep *cocci_id/* drivers/usb/musb/tusb6010_omap.c 423 */;
	struct dma_channel *cocci_id/* drivers/usb/musb/tusb6010_omap.c 419 */[MAX_DMAREQ];
	u32 cocci_id/* drivers/usb/musb/tusb6010_omap.c 381 */;
	struct tusb_omap_dma_ch {
		struct musb *musb;
		void __iomem *tbase;
		unsigned long phys_offset;
		int epnum;
		u8 tx;
		struct musb_hw_ep *hw_ep;
		struct tusb_dma_data *dma_data;
		struct tusb_omap_dma *tusb_dma;
		dma_addr_t dma_addr;
		u32 len;
		u16 packet_sz;
		u16 transfer_packet_sz;
		u32 transfer_len;
		u32 completed_len;
	} cocci_id/* drivers/usb/musb/tusb6010_omap.c 29 */;
	struct tusb_dma_data {
		s8 dmareq;
		struct dma_chan *chan;
	} cocci_id/* drivers/usb/musb/tusb6010_omap.c 24 */;
	struct tusb_omap_dma_ch *cocci_id/* drivers/usb/musb/tusb6010_omap.c 20 */;
	enum dma_transfer_direction cocci_id/* drivers/usb/musb/tusb6010_omap.c 198 */;
	struct dma_slave_config cocci_id/* drivers/usb/musb/tusb6010_omap.c 197 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/usb/musb/tusb6010_omap.c 196 */;
	dma_addr_t cocci_id/* drivers/usb/musb/tusb6010_omap.c 182 */;
	u16 cocci_id/* drivers/usb/musb/tusb6010_omap.c 166 */;
	u8 *cocci_id/* drivers/usb/musb/tusb6010_omap.c 135 */;
	unsigned long cocci_id/* drivers/usb/musb/tusb6010_omap.c 107 */;
	struct device *cocci_id/* drivers/usb/musb/tusb6010_omap.c 103 */;
}
