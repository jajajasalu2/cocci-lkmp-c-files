cocci_test_suite() {
	const char cocci_id/* drivers/net/usb/kaweth.c 99 */[];
	const eth_addr_t cocci_id/* drivers/net/usb/kaweth.c 968 */;
	struct device *cocci_id/* drivers/net/usb/kaweth.c 964 */;
	const struct usb_device_id *cocci_id/* drivers/net/usb/kaweth.c 961 */;
	const struct net_device_ops cocci_id/* drivers/net/usb/kaweth.c 949 */;
	pm_message_t cocci_id/* drivers/net/usb/kaweth.c 911 */;
	void *cocci_id/* drivers/net/usb/kaweth.c 880 */;
	__u16 cocci_id/* drivers/net/usb/kaweth.c 865 */;
	__le16 *cocci_id/* drivers/net/usb/kaweth.c 779 */;
	netdev_tx_t cocci_id/* drivers/net/usb/kaweth.c 775 */;
	struct sk_buff *cocci_id/* drivers/net/usb/kaweth.c 775 */;
	const struct ethtool_ops cocci_id/* drivers/net/usb/kaweth.c 750 */;
	u32 cocci_id/* drivers/net/usb/kaweth.c 743 */;
	struct net_device *cocci_id/* drivers/net/usb/kaweth.c 725 */;
	void cocci_id/* drivers/net/usb/kaweth.c 567 */(struct kaweth_device *kaweth);
	struct kaweth_device cocci_id/* drivers/net/usb/kaweth.c 522 */;
	struct work_struct *cocci_id/* drivers/net/usb/kaweth.c 519 */;
	int cocci_id/* drivers/net/usb/kaweth.c 491 */;
	struct kaweth_device *cocci_id/* drivers/net/usb/kaweth.c 490 */;
	struct urb *cocci_id/* drivers/net/usb/kaweth.c 488 */;
	void cocci_id/* drivers/net/usb/kaweth.c 488 */;
	gfp_t cocci_id/* drivers/net/usb/kaweth.c 469 */;
	int cocci_id/* drivers/net/usb/kaweth.c 463 */(struct kaweth_device *,
						       gfp_t);
	void cocci_id/* drivers/net/usb/kaweth.c 462 */(struct urb *);
	const struct firmware *cocci_id/* drivers/net/usb/kaweth.c 376 */;
	const char *cocci_id/* drivers/net/usb/kaweth.c 372 */;
	unsigned cocci_id/* drivers/net/usb/kaweth.c 353 */;
	struct usb_ctrlrequest cocci_id/* drivers/net/usb/kaweth.c 259 */;
	struct usb_ctrlrequest *cocci_id/* drivers/net/usb/kaweth.c 251 */;
	__u8 cocci_id/* drivers/net/usb/kaweth.c 243 */;
	unsigned int cocci_id/* drivers/net/usb/kaweth.c 242 */;
	struct kaweth_device {
		spinlock_t device_lock;
		__u32 status;
		int end;
		int suspend_lowmem_rx;
		int suspend_lowmem_ctrl;
		int linkstate;
		int opened;
		struct delayed_work lowmem_work;
		struct usb_device *dev;
		struct usb_interface *intf;
		struct net_device *net;
		wait_queue_head_t term_wait;
		struct urb *rx_urb;
		struct urb *tx_urb;
		struct urb *irq_urb;
		dma_addr_t intbufferhandle;
		__u8 *intbuffer;
		dma_addr_t rxbufferhandle;
		__u8 *rx_buf;
		struct sk_buff *tx_skb;
		__u8 *firmware_buf;
		__u8 scratch[KAWETH_SCRATCH_SIZE];
		__u16 packet_filter_bitmap;
		struct kaweth_ethernet_configuration configuration;
	} cocci_id/* drivers/net/usb/kaweth.c 202 */;
	struct kaweth_ethernet_configuration {
		__u8 size;
		__u8 reserved1;
		__u8 reserved2;
		eth_addr_t hw_addr;
		__u32 statistics_mask;
		__le16 segment_size;
		__u16 max_multicast_filters;
		__u8 reserved3;
	}__packed cocci_id/* drivers/net/usb/kaweth.c 187 */;
	struct usb_eth_dev {
		char *name;
		__u16 vendor;
		__u16 device;
		void *pdata;
	} cocci_id/* drivers/net/usb/kaweth.c 176 */;
	__u8 cocci_id/* drivers/net/usb/kaweth.c 171 */[6];
	struct usb_driver cocci_id/* drivers/net/usb/kaweth.c 160 */;
	unsigned char *cocci_id/* drivers/net/usb/kaweth.c 1271 */;
	struct usb_device *cocci_id/* drivers/net/usb/kaweth.c 1258 */;
	struct usb_api_data cocci_id/* drivers/net/usb/kaweth.c 1224 */;
	int *cocci_id/* drivers/net/usb/kaweth.c 1222 */;
	struct usb_api_data *cocci_id/* drivers/net/usb/kaweth.c 1211 */;
	struct usb_api_data {
		wait_queue_head_t wqh;
		int done;
	} cocci_id/* drivers/net/usb/kaweth.c 1201 */;
	struct usb_interface *cocci_id/* drivers/net/usb/kaweth.c 1173 */;
	const struct usb_device_id cocci_id/* drivers/net/usb/kaweth.c 116 */[];
	int cocci_id/* drivers/net/usb/kaweth.c 111 */(struct usb_interface *intf);
	int cocci_id/* drivers/net/usb/kaweth.c 110 */(struct usb_interface *intf,
						       pm_message_t message);
	unsigned long cocci_id/* drivers/net/usb/kaweth.c 1060 */;
	int cocci_id/* drivers/net/usb/kaweth.c 106 */(struct usb_device *usb_dev,
						       unsigned int pipe,
						       struct usb_ctrlrequest *cmd,
						       void *data, int len,
						       int timeout);
	void cocci_id/* drivers/net/usb/kaweth.c 105 */(struct usb_interface *intf);
	__u8 *cocci_id/* drivers/net/usb/kaweth.c 1010 */;
	int cocci_id/* drivers/net/usb/kaweth.c 101 */(struct usb_interface *intf,
						       const struct usb_device_id *id);
}
