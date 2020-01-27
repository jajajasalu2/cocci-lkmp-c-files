cocci_test_suite() {
	const struct usb_endpoint_descriptor *cocci_id/* drivers/usb/gadget/udc/pch_udc.c 976 */;
	struct pch_udc_cfg_data *cocci_id/* drivers/usb/gadget/udc/pch_udc.c 975 */;
	u8 cocci_id/* drivers/usb/gadget/udc/pch_udc.c 649 */;
	void cocci_id/* drivers/usb/gadget/udc/pch_udc.c 575 */(struct pch_udc_dev *dev);
	unsigned long cocci_id/* drivers/usb/gadget/udc/pch_udc.c 427 */;
	struct pch_udc_request {
		struct usb_request req;
		dma_addr_t td_data_phys;
		struct pch_udc_data_dma_desc *td_data;
		struct pch_udc_data_dma_desc *td_data_last;
		struct list_head queue;
		unsigned dma_going:1,dma_mapped:1,dma_done:1;
		unsigned chain_len;
		void *buf;
		dma_addr_t dma;
	} cocci_id/* drivers/usb/gadget/udc/pch_udc.c 394 */;
	bool cocci_id/* drivers/usb/gadget/udc/pch_udc.c 377 */;
	const char cocci_id/* drivers/usb/gadget/udc/pch_udc.c 374 */[];
	struct pch_udc_dev {
		struct usb_gadget gadget;
		struct usb_gadget_driver *driver;
		struct pci_dev *pdev;
		struct pch_udc_ep ep[PCH_UDC_EP_NUM];
		spinlock_t lock;
		unsigned stall:1,prot_stall:1,suspended:1,connected:1,vbus_session:1,set_cfg_not_acked:1,waiting_zlp_ack:1;
		struct dma_pool *data_requests;
		struct dma_pool *stp_requests;
		dma_addr_t dma_addr;
		struct usb_ctrlrequest setup_data;
		void __iomem *base_addr;
		struct pch_udc_cfg_data cfg_data;
		struct pch_vbus_gpio_data vbus_gpio;
	} cocci_id/* drivers/usb/gadget/udc/pch_udc.c 341 */;
	struct pci_driver cocci_id/* drivers/usb/gadget/udc/pch_udc.c 3167 */;
	const struct pci_device_id cocci_id/* drivers/usb/gadget/udc/pch_udc.c 3140 */[];
	struct pch_vbus_gpio_data {
		int port;
		int intr;
		struct work_struct irq_work_fall;
		struct work_struct irq_work_rise;
	} cocci_id/* drivers/usb/gadget/udc/pch_udc.c 310 */;
	const struct pci_device_id *cocci_id/* drivers/usb/gadget/udc/pch_udc.c 3068 */;
	struct pci_dev *cocci_id/* drivers/usb/gadget/udc/pch_udc.c 3067 */;
	struct device *cocci_id/* drivers/usb/gadget/udc/pch_udc.c 3056 */;
	struct usb_gadget_driver *cocci_id/* drivers/usb/gadget/udc/pch_udc.c 2963 */;
	struct pch_udc_stp_dma_desc cocci_id/* drivers/usb/gadget/udc/pch_udc.c 2922 */;
	struct pch_udc_data_dma_desc cocci_id/* drivers/usb/gadget/udc/pch_udc.c 2913 */;
	void *cocci_id/* drivers/usb/gadget/udc/pch_udc.c 2909 */;
	struct pch_udc_data_dma_desc *cocci_id/* drivers/usb/gadget/udc/pch_udc.c 2908 */;
	struct pch_udc_stp_dma_desc *cocci_id/* drivers/usb/gadget/udc/pch_udc.c 2907 */;
	struct pch_udc_ep {
		struct usb_ep ep;
		dma_addr_t td_stp_phys;
		dma_addr_t td_data_phys;
		struct pch_udc_stp_dma_desc *td_stp;
		struct pch_udc_data_dma_desc *td_data;
		struct pch_udc_dev *dev;
		unsigned long offset_addr;
		struct list_head queue;
		unsigned num:5,in:1,halted:1;
		unsigned long epsts;
	} cocci_id/* drivers/usb/gadget/udc/pch_udc.c 287 */;
	const char *constcocci_id/* drivers/usb/gadget/udc/pch_udc.c 2832 */[];
	irqreturn_t cocci_id/* drivers/usb/gadget/udc/pch_udc.c 2755 */;
	struct pch_udc_cfg_data {
		u16 cur_cfg;
		u16 cur_intf;
		u16 cur_alt;
	} cocci_id/* drivers/usb/gadget/udc/pch_udc.c 265 */;
	u32 cocci_id/* drivers/usb/gadget/udc/pch_udc.c 2489 */;
	struct pch_udc_stp_dma_desc {
		u32 status;
		u32 reserved;
		struct usb_ctrlrequest request;
	}__attribute((packed)) cocci_id/* drivers/usb/gadget/udc/pch_udc.c 235 */;
	struct pch_udc_data_dma_desc {
		u32 status;
		u32 reserved;
		u32 dataptr;
		u32 next;
	} cocci_id/* drivers/usb/gadget/udc/pch_udc.c 220 */;
	dma_addr_t cocci_id/* drivers/usb/gadget/udc/pch_udc.c 2168 */;
	unsigned int cocci_id/* drivers/usb/gadget/udc/pch_udc.c 2166 */;
	const struct usb_ep_ops cocci_id/* drivers/usb/gadget/udc/pch_udc.c 2050 */;
	struct pch_udc_ep cocci_id/* drivers/usb/gadget/udc/pch_udc.c 1758 */;
	gfp_t cocci_id/* drivers/usb/gadget/udc/pch_udc.c 1750 */;
	struct usb_request *cocci_id/* drivers/usb/gadget/udc/pch_udc.c 1749 */;
	struct usb_ep *cocci_id/* drivers/usb/gadget/udc/pch_udc.c 1749 */;
	struct pch_udc_request cocci_id/* drivers/usb/gadget/udc/pch_udc.c 1494 */;
	unsigned cocci_id/* drivers/usb/gadget/udc/pch_udc.c 1437 */;
	struct pch_udc_dev *cocci_id/* drivers/usb/gadget/udc/pch_udc.c 1436 */;
	int cocci_id/* drivers/usb/gadget/udc/pch_udc.c 1432 */;
	struct pch_udc_request *cocci_id/* drivers/usb/gadget/udc/pch_udc.c 1431 */;
	struct pch_udc_ep *cocci_id/* drivers/usb/gadget/udc/pch_udc.c 1431 */;
	void cocci_id/* drivers/usb/gadget/udc/pch_udc.c 1431 */;
	struct pch_vbus_gpio_data cocci_id/* drivers/usb/gadget/udc/pch_udc.c 1272 */;
	struct pch_vbus_gpio_data *cocci_id/* drivers/usb/gadget/udc/pch_udc.c 1271 */;
	struct work_struct *cocci_id/* drivers/usb/gadget/udc/pch_udc.c 1269 */;
	const struct usb_gadget_ops cocci_id/* drivers/usb/gadget/udc/pch_udc.c 1231 */;
	int cocci_id/* drivers/usb/gadget/udc/pch_udc.c 1229 */(struct usb_gadget *g);
	int cocci_id/* drivers/usb/gadget/udc/pch_udc.c 1227 */(struct usb_gadget *g,
								struct usb_gadget_driver *driver);
	struct pch_udc_dev cocci_id/* drivers/usb/gadget/udc/pch_udc.c 1107 */;
	struct usb_gadget *cocci_id/* drivers/usb/gadget/udc/pch_udc.c 1101 */;
}
