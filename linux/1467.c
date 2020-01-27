cocci_test_suite() {
	struct sockaddr cocci_id/* drivers/usb/gadget/function/u_ether.c 861 */;
	struct usb_gadget *cocci_id/* drivers/usb/gadget/function/u_ether.c 860 */;
	struct device_type cocci_id/* drivers/usb/gadget/function/u_ether.c 729 */;
	const struct net_device_ops cocci_id/* drivers/usb/gadget/function/u_ether.c 721 */;
	u8 cocci_id/* drivers/usb/gadget/function/u_ether.c 712 */[ETH_ALEN];
	char *cocci_id/* drivers/usb/gadget/function/u_ether.c 712 */;
	unsigned char cocci_id/* drivers/usb/gadget/function/u_ether.c 697 */;
	const char *cocci_id/* drivers/usb/gadget/function/u_ether.c 691 */;
	const struct usb_endpoint_descriptor *cocci_id/* drivers/usb/gadget/function/u_ether.c 657 */;
	gfp_t cocci_id/* drivers/usb/gadget/function/u_ether.c 610 */;
	struct usb_request cocci_id/* drivers/usb/gadget/function/u_ether.c 531 */;
	struct eth_dev {
		spinlock_t lock;
		struct gether *port_usb;
		struct net_device *net;
		struct usb_gadget *gadget;
		spinlock_t req_lock;
		struct list_head tx_reqs,rx_reqs;
		atomic_t tx_qlen;
		struct sk_buff_head rx_frames;
		unsigned qmult;
		unsigned header_len;
		struct sk_buff *(*wrap)(struct gether *, struct sk_buff *skb);
		int (*unwrap)(struct gether *, struct sk_buff *skb,
			      struct sk_buff_head *list);
		struct work_struct work;
		unsigned long todo;
#define WORK_RX_MEMORY 0
		bool zlp;
		bool no_skb_reserve;
		u8 host_mac[ETH_ALEN];
		u8 dev_mac[ETH_ALEN];
	} cocci_id/* drivers/usb/gadget/function/u_ether.c 52 */;
	u8 *cocci_id/* drivers/usb/gadget/function/u_ether.c 500 */;
	u16 cocci_id/* drivers/usb/gadget/function/u_ether.c 481 */;
	struct usb_ep *cocci_id/* drivers/usb/gadget/function/u_ether.c 480 */;
	unsigned long cocci_id/* drivers/usb/gadget/function/u_ether.c 479 */;
	struct usb_request *cocci_id/* drivers/usb/gadget/function/u_ether.c 478 */;
	netdev_tx_t cocci_id/* drivers/usb/gadget/function/u_ether.c 472 */;
	struct sk_buff *cocci_id/* drivers/usb/gadget/function/u_ether.c 472 */;
	struct eth_dev cocci_id/* drivers/usb/gadget/function/u_ether.c 427 */;
	struct work_struct *cocci_id/* drivers/usb/gadget/function/u_ether.c 425 */;
	struct gether *cocci_id/* drivers/usb/gadget/function/u_ether.c 384 */;
	struct eth_dev *cocci_id/* drivers/usb/gadget/function/u_ether.c 384 */;
	unsigned cocci_id/* drivers/usb/gadget/function/u_ether.c 384 */;
	int cocci_id/* drivers/usb/gadget/function/u_ether.c 384 */;
	struct list_head *cocci_id/* drivers/usb/gadget/function/u_ether.c 345 */;
	struct ethhdr cocci_id/* drivers/usb/gadget/function/u_ether.c 208 */;
	size_t cocci_id/* drivers/usb/gadget/function/u_ether.c 180 */;
	void cocci_id/* drivers/usb/gadget/function/u_ether.c 172 */(struct usb_ep *ep, struct usb_request *req);
	void cocci_id/* drivers/usb/gadget/function/u_ether.c 162 */;
	const struct ethtool_ops cocci_id/* drivers/usb/gadget/function/u_ether.c 157 */;
	struct net_device *cocci_id/* drivers/usb/gadget/function/u_ether.c 141 */;
	struct ethtool_drvinfo *cocci_id/* drivers/usb/gadget/function/u_ether.c 141 */;
}
