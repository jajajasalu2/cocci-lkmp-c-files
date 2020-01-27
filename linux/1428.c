cocci_test_suite() {
	struct bcm_enet_desc cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 785 */;
	unsigned int cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 760 */;
	const int cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 599 */;
	const struct iudma_ch_cfg *cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 534 */;
	const struct {
		const char *name;
		const struct usb_ep_caps caps;
	} cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 43 */[];
	u32 cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 427 */;
	const char cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 41 */[];
	struct bcm63xx_ep cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 346 */;
	const struct usb_ep_ops cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 333 */;
	struct bcm63xx_udc {
		spinlock_t lock;
		struct device *dev;
		struct bcm63xx_usbd_platform_data *pd;
		struct clk *usbd_clk;
		struct clk *usbh_clk;
		struct usb_gadget gadget;
		struct usb_gadget_driver *driver;
		void __iomem *usbd_regs;
		void __iomem *iudma_regs;
		struct bcm63xx_ep bep[BCM63XX_NUM_EP];
		struct iudma_ch iudma[BCM63XX_NUM_IUDMA];
		int cfg;
		int iface;
		int alt_iface;
		struct bcm63xx_req ep0_ctrl_req;
		u8 *ep0_ctrl_buf;
		int ep0state;
		struct work_struct ep0_wq;
		unsigned long wedgemap;
		unsigned ep0_req_reset:1;
		unsigned ep0_req_set_cfg:1;
		unsigned ep0_req_set_iface:1;
		unsigned ep0_req_shutdown:1;
		unsigned ep0_req_completed:1;
		struct usb_request *ep0_reply;
		struct usb_request *ep0_request;
		struct dentry *debugfs_root;
	} cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 292 */;
	struct bcm63xx_req {
		struct list_head queue;
		struct usb_request req;
		unsigned int offset;
		unsigned int bd_bytes;
		struct iudma_ch *iudma;
	} cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 254 */;
	struct platform_driver cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 2376 */;
	struct bcm63xx_ep {
		unsigned int ep_num;
		struct iudma_ch *iudma;
		struct usb_ep ep;
		struct bcm63xx_udc *udc;
		struct list_head queue;
		unsigned halted:1;
	} cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 237 */;
	struct bcm63xx_usbd_platform_data *cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 2283 */;
	struct device *cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 2282 */;
	struct platform_device *cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 2280 */;
	struct dentry *cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 2246 */;
	struct bcm_enet_desc *cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 2220 */;
	struct list_head *cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 2177 */;
	struct seq_file *cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 2166 */;
	struct iudma_ch {
		unsigned int ch_idx;
		int ep_num;
		bool enabled;
		int max_pkt;
		bool is_tx;
		struct bcm63xx_ep *bep;
		struct bcm63xx_udc *udc;
		struct bcm_enet_desc *read_bd;
		struct bcm_enet_desc *write_bd;
		struct bcm_enet_desc *end_bd;
		int n_bds_used;
		struct bcm_enet_desc *bd_ring;
		dma_addr_t bd_ring_dma;
		unsigned int n_bds;
	} cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 209 */;
	struct bcm63xx_req cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 2081 */;
	irqreturn_t cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 1970 */;
	enum usb_device_speed cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 1914 */;
	const struct usb_gadget_ops cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 1873 */;
	struct usb_gadget_driver *cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 1812 */;
	struct usb_gadget *cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 1749 */;
	struct bcm63xx_udc cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 1734 */;
	struct work_struct *cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 1732 */;
	const struct iudma_ch_cfg cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 164 */[];
	bool cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 1583 */;
	struct iudma_ch_cfg {
		int ep_num;
		int n_bds;
		int ep_type;
		int dir;
		int n_fifo_slots;
		int max_pkt_hs;
		int max_pkt_fs;
	} cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 154 */;
	struct usb_ctrlrequest *cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 1483 */;
	void *cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 1483 */;
	enum bcm63xx_ep0_state cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 1480 */;
	struct usb_request *cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 1405 */;
	int cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 1405 */;
	struct bcm63xx_udc *cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 1404 */;
	void cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 1404 */;
	struct iudma_ch *cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 1387 */;
	struct bcm63xx_req *cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 1386 */;
	struct usb_ctrlrequest cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 1335 */;
	const char __maybe_unused cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 132 */[][32];
	enum bcm63xx_ep0_state{EP0_REQUEUE, EP0_IDLE, EP0_IN_DATA_PHASE_SETUP, EP0_IN_DATA_PHASE_COMPLETE, EP0_OUT_DATA_PHASE_SETUP, EP0_OUT_DATA_PHASE_COMPLETE, EP0_OUT_STATUS_PHASE, EP0_IN_FAKE_STATUS_PHASE, EP0_SHUTDOWN,} cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 120 */;
	gfp_t cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 1116 */;
	unsigned long cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 1078 */;
	struct bcm63xx_ep *cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 1074 */;
	struct usb_ep *cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 1072 */;
	const struct usb_endpoint_descriptor *cocci_id/* drivers/usb/gadget/udc/bcm63xx_udc.c 1033 */;
}
