cocci_test_suite() {
	struct usb_ctrlrequest *cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 946 */;
	struct renesas_usb3 *cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 910 */;
	int cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 908 */;
	struct renesas_usb3_ep *cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 885 */;
	u16 cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 544 */;
	struct renesas_usb3 cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 441 */;
	struct work_struct *cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 439 */;
	const char cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 390 */[];
	struct renesas_usb3_ep cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 373 */;
	struct renesas_usb3 {
		void __iomem *reg;
		struct usb_gadget gadget;
		struct usb_gadget_driver *driver;
		struct extcon_dev *extcon;
		struct work_struct extcon_work;
		struct phy *phy;
		struct dentry *dentry;
		struct usb_role_switch *role_sw;
		struct device *host_dev;
		struct work_struct role_work;
		enum usb_role role;
		struct renesas_usb3_ep *usb3_ep;
		int num_usb3_eps;
		struct renesas_usb3_dma dma[USB3_DMA_NUM_SETTING_AREA];
		spinlock_t lock;
		int disabled_count;
		struct usb_request *ep0_req;
		enum usb_role connection_state;
		u16 test_mode;
		u8 ep0_buf[USB3_EP0_BUF_SIZE];
		bool softconnect;
		bool workaround_for_vbus;
		bool extcon_host;
		bool extcon_usb;
		bool forced_b_device;
		bool start_to_connect;
		bool role_sw_by_connector;
	} cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 331 */;
	struct renesas_usb3_priv {
		int ramsize_per_ramif;
		int num_ramif;
		int ramsize_per_pipe;
		bool workaround_for_vbus;
	} cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 324 */;
	struct renesas_usb3_ep {
		struct usb_ep ep;
		struct renesas_usb3 *usb3;
		struct renesas_usb3_dma *dma;
		int num;
		char ep_name[USB3_EP_NAME_SIZE];
		struct list_head queue;
		u32 rammap_val;
		bool dir_in;
		bool halt;
		bool wedge;
		bool started;
	} cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 310 */;
	struct renesas_usb3_request {
		struct usb_request req;
		struct list_head queue;
	} cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 304 */;
	struct renesas_usb3_dma {
		struct renesas_usb3_prd *prd;
		dma_addr_t prd_dma;
		int num;
		bool used;
	} cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 297 */;
	struct renesas_usb3_prd cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 292 */;
	char *cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2909 */;
	struct platform_driver cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2905 */;
	const struct soc_device_attribute *cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2753 */;
	struct platform_device *cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2748 */;
	struct usb_role_switch_desc cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2742 */;
	const unsigned int cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2736 */[];
	const struct soc_device_attribute cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2720 */[];
	struct renesas_usb3_prd {
		u32 word1;
#define USB3_PRD1_E BIT(30)
#define USB3_PRD1_U BIT(29)
#define USB3_PRD1_D BIT(28)
#define USB3_PRD1_INT BIT(27)
#define USB3_PRD1_LST BIT(26)
#define USB3_PRD1_B_INC BIT(24)
#define USB3_PRD1_MPS_8 0
#define USB3_PRD1_MPS_16 BIT(21)
#define USB3_PRD1_MPS_32 BIT(22)
#define USB3_PRD1_MPS_64 (BIT(22) | BIT(21))
#define USB3_PRD1_MPS_512 BIT(23)
#define USB3_PRD1_MPS_1024 (BIT(23) | BIT(21))
#define USB3_PRD1_MPS_RESERVED (BIT(23) | BIT(22) | BIT(21))
#define USB3_PRD1_SIZE_MASK GENMASK(15, 0)
															u32 bap;
	} cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 272 */;
	const struct of_device_id cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2707 */[];
	const struct renesas_usb3_priv cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2694 */;
	u32 cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2644 */;
	u32 *cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2643 */;
	u32 cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2642 */[2];
	const struct renesas_usb3_priv *cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2580 */;
	const struct file_operations cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2543 */;
	char cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2517 */[32];
	loff_t *cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2513 */;
	size_t cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2513 */;
	const char __user *cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2512 */;
	ssize_t cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2511 */;
	struct inode *cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2506 */;
	struct file *cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2506 */;
	struct seq_file *cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2497 */;
	void *cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2497 */;
	struct device_attribute *cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2485 */;
	bool cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2462 */;
	const char *cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2459 */;
	enum usb_role cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2371 */;
	struct device *cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2370 */;
	const struct usb_gadget_ops cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2350 */;
	struct usb_gadget *cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2329 */;
	struct usb_gadget_driver *cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2289 */;
	const struct usb_ep_ops cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2272 */;
	unsigned long cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2258 */;
	struct usb_ep *cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2214 */;
	void cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2207 */;
	struct renesas_usb3_request cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2198 */;
	struct renesas_usb3_request *cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2196 */;
	gfp_t cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2194 */;
	struct usb_request *cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2194 */;
	const struct usb_endpoint_descriptor *cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2171 */;
	const u32 cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2119 */[];
	irqreturn_t cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 2068 */;
	struct usb_ctrlrequest cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 1862 */;
	__le16 cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 1600 */;
	void (*cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 1573 */)(struct usb_ep *ep, struct usb_request *req);
	struct renesas_usb3_dma *cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 1469 */;
	struct renesas_usb3_prd *cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 1319 */;
	u8 *cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 1144 */;
	unsigned cocci_id/* drivers/usb/gadget/udc/renesas_usb3.c 1142 */;
}
