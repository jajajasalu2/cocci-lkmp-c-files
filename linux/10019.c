cocci_test_suite() {
	struct ez_usb_fw cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 95 */;
	struct ez_usb_fw {
		u16 size;
		const u8 *code;
	} cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 90 */;
	enum ezusb_state cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 871 */;
	u16 *cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 867 */;
	void *cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 867 */;
	unsigned cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 867 */;
	const void *cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 866 */;
	struct request_context *cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 865 */;
	__be16 *cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 814 */;
	struct ez_usb_fw *cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 797 */;
	struct ezusb_priv *cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 767 */;
	struct header_struct {
		u8 dest[ETH_ALEN];
		u8 src[ETH_ALEN];
		__be16 len;
		u8 dsap;
		u8 ssap;
		u8 ctrl;
		u8 oui[3];
		__be16 ethertype;
	}__packed cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 76 */;
	u8 cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 726 */;
	int cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 710 */;
	u8 *cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 709 */;
	u16 cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 706 */;
	struct ezusb_packet *cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 706 */;
	struct net_device_stats *cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 403 */;
	unsigned long cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 382 */;
	struct completion *cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 371 */;
	struct timer_list *cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 310 */;
	void cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 286 */(struct urb *urb);
	void cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 285 */(struct ezusb_priv *upriv);
	void cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 284 */(struct request_context *ctx);
	struct request_context {
		struct list_head list;
		refcount_t refcount;
		struct completion done;
		int killed;
		struct urb *outurb;
		struct ezusb_priv *upriv;
		struct ezusb_packet *buf;
		int buf_length;
		struct timer_list timer;
		enum ezusb_state state;
		u16 out_rid;
		u16 in_rid;
	} cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 266 */;
	enum ezusb_state{EZUSB_CTX_START, EZUSB_CTX_QUEUED, EZUSB_CTX_REQ_SUBMITTED, EZUSB_CTX_REQ_COMPLETE, EZUSB_CTX_RESP_RECEIVED, EZUSB_CTX_REQ_TIMEOUT, EZUSB_CTX_REQ_FAILED, EZUSB_CTX_RESP_TIMEOUT, EZUSB_CTX_REQSUBMIT_FAIL, EZUSB_CTX_COMPLETE,} cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 253 */;
	struct ezusb_priv {
		struct usb_device *udev;
		struct net_device *dev;
		struct mutex mtx;
		spinlock_t req_lock;
		struct list_head req_pending;
		struct list_head req_active;
		spinlock_t reply_count_lock;
		u16 hermes_reg_fake[0x40];
		u8 *bap_buf;
		struct urb *read_urb;
		int read_pipe;
		int write_pipe;
		u8 reply_count;
	} cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 237 */;
	const struct usb_device_id cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 209 */[];
	struct ezusb_packet {
		__le16 magic;
		u8 req_reply_count;
		u8 ans_reply_count;
		__le16 frame_type;
		__le16 size;
		__le16 crc;
		__le16 hermes_len;
		__le16 hermes_rid;
		u8 data[0];
	}__packed cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 196 */;
	struct ezusb_packet cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 188 */;
	struct usb_driver cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 1741 */;
	struct usb_interface *cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 1731 */;
	void __force __iomem *cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 1603 */;
	const struct firmware *cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 1578 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 1577 */;
	struct usb_interface_descriptor *cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 1576 */;
	struct usb_device *cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 1572 */;
	const struct usb_device_id *cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 1570 */;
	const struct net_device_ops cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 1558 */;
	const struct hermes_ops cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 1540 */;
	spinlock_t *cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 1530 */;
	unsigned long *cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 1519 */;
	struct request_context cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 1475 */;
	struct list_head *cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 1457 */;
	struct orinoco_private *cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 1438 */;
	struct net_device *cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 1437 */;
	struct urb *cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 1391 */;
	void cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 1391 */;
	struct hermes *cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 1306 */;
	u8 cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 1198 */[MICHAEL_MIC_LEN + 1];
	netdev_tx_t cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 1193 */;
	struct sk_buff *cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 1193 */;
	u32 cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 1162 */;
	const char *cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 1161 */;
	__le32 cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 1141 */;
	__le16 cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 1089 */[];
	__le16 *cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 1084 */;
	__le16 cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 1036 */[4];
	struct hermes_response *cocci_id/* drivers/net/wireless/intersil/orinoco/orinoco_usb.c 1031 */;
}