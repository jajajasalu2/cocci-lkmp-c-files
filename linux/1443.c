cocci_test_suite() {
	struct lpc32xx_ep {
		struct usb_ep ep;
		struct list_head queue;
		struct lpc32xx_udc *udc;
		u32 hwep_num_base;
		u32 hwep_num;
		u32 maxpacket;
		u32 lep;
		bool is_in;
		bool req_pending;
		u32 eptype;
		u32 totalints;
		bool wedge;
	} cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 98 */;
	struct lpc32xx_usbd_dd_gad {
		u32 dd_next_phy;
		u32 dd_setup;
		u32 dd_buffer_addr;
		u32 dd_status;
		u32 dd_iso_ps_mem_addr;
		u32 this_dma;
		u32 iso_status[6];
		u32 dd_next_v;
	} cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 84 */;
	struct lpc32xx_udc cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 693 */;
	struct work_struct *cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 690 */;
	s32 cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 559 */;
	u8 cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 558 */;
	struct lpc32xx_udc *cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 540 */;
	void cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 540 */;
	const struct file_operations cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 532 */;
	struct inode *cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 527 */;
	struct file *cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 527 */;
	struct seq_file *cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 474 */;
	const char cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 472 */[];
	char *cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 471 */[];
	struct lpc32xx_usbd_cfg {
		int vbus_drv_pol;
		usc_chg_event conn_chgb;
		usc_chg_event susp_chgb;
		usc_chg_event rmwk_chgb;
	} cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 43 */;
	void (*cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 42 */)(int);
	char *cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 3270 */;
	struct platform_driver cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 3264 */;
	const struct of_device_id cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 3257 */[];
	pm_message_t cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 3210 */;
	struct lpc32xx_usbd_dd {
		u32 *dd_next;
		u32 dd_setup;
		u32 dd_buffer_addr;
		u32 dd_status;
		u32 dd_iso_ps_mem_addr;
	} cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 321 */;
	struct lpc32xx_usbd_dd_gad cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 3106 */;
	struct device_node *cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 3004 */;
	dma_addr_t cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 3003 */;
	struct device *cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 3000 */;
	struct platform_device *cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 2998 */;
	u64 cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 2996 */;
	struct lpc32xx_usbd_cfg cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 2988 */;
	struct usb_gadget_driver *cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 2893 */;
	irqreturn_t cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 2814 */;
	void *cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 2814 */;
	const struct lpc32xx_udc cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 2515 */;
	const struct usb_gadget_ops cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 2500 */;
	int cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 2498 */(struct usb_gadget *);
	int cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 2497 */(struct usb_gadget *,
								    struct usb_gadget_driver *);
	struct usb_gadget *cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 2416 */;
	u32 *cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 2204 */;
	struct usb_ctrlrequest cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 2196 */;
	const struct usb_ep_ops cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 1916 */;
	struct lpc32xx_ep cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 1848 */;
	unsigned long cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 1846 */;
	struct lpc32xx_usbd_dd_gad *cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 1767 */;
	struct lpc32xx_request {
		struct usb_request req;
		struct list_head queue;
		struct lpc32xx_usbd_dd_gad *dd_desc_ptr;
		bool mapped;
		bool send_zlp;
	} cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 175 */;
	struct lpc32xx_request cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 1722 */;
	gfp_t cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 1718 */;
	struct usb_request *cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 1717 */;
	struct usb_ep *cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 1717 */;
	u32 cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 1619 */;
	u16 cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 1618 */;
	const struct usb_endpoint_descriptor *cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 1614 */;
	struct lpc32xx_request *cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 1409 */;
	struct lpc32xx_ep *cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 1409 */;
	int cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 1409 */;
	struct lpc32xx_udc {
		struct usb_gadget gadget;
		struct usb_gadget_driver *driver;
		struct platform_device *pdev;
		struct device *dev;
		struct dentry *pde;
		spinlock_t lock;
		struct i2c_client *isp1301_i2c_client;
		struct lpc32xx_usbd_cfg *board;
		void __iomem *udp_baseaddr;
		int udp_irq[4];
		struct clk *usb_slv_clk;
		u32 *udca_v_base;
		u32 udca_p_base;
		struct dma_pool *dd_cache;
		u32 enabled_devints;
		u32 enabled_hwepints;
		u32 dev_status;
		u32 realized_eps;
		u8 vbus;
		u8 last_vbus;
		int pullup;
		int poweron;
		enum atx_type atx;
		struct work_struct pullup_job;
		struct work_struct power_job;
		struct lpc32xx_ep ep[NUM_ENDPOINTS];
		bool enabled;
		bool clocked;
		bool suspended;
		int ep0state;
		atomic_t enabled_ep_cnt;
		wait_queue_head_t ep_disable_wait_queue;
	} cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 125 */;
	enum atx_type{ISP1301, STOTG04,} cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 117 */;
	uintptr_t cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 1154 */;
	u16 *cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 1150 */;
	u8 *cocci_id/* drivers/usb/gadget/udc/lpc32xx_udc.c 1147 */;
}
