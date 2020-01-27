cocci_test_suite() {
	__dw cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 982 */;
	struct isp1760_qtd cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 850 */;
	struct ptd cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 838 */;
	struct isp1760_slotinfo *cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 835 */;
	struct urb_listitem *cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 773 */;
	struct list_head *cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 769 */;
	struct isp1760_qh *cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 768 */;
	struct ptd {
		__dw dw0;
		__dw dw1;
		__dw dw2;
		__dw dw3;
		__dw dw4;
		__dw dw5;
		__dw dw6;
		__dw dw7;
	} cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 52 */;
	__u32 __bitwise cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 51 */;
	struct isp1760_hcd **cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 43 */;
	void cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 38 */(struct usb_hcd *hcd,
								struct isp1760_qh *qh,
								struct isp1760_qtd *qtd);
	struct kmem_cache *cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 35 */;
	int cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 339 */;
	struct isp1760_hcd *cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 338 */;
	struct usb_hcd *cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 336 */;
	struct isp1760_qtd *cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 336 */;
	void cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 336 */;
	const __u32 *cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 242 */;
	void *cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 223 */;
	struct device *cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 2189 */;
	struct resource *cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 2188 */;
	struct isp1760_qh cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 2169 */;
	struct urb_listitem cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 2156 */;
	int __init cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 2153 */;
	const struct hc_driver cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 2134 */;
	struct usb_host_endpoint *cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 2118 */;
	__le32 *cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 1997 */;
	__u8 *cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 191 */;
	struct usb_hub_descriptor *cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 1896 */;
	__u32 __iomem *cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 189 */;
	__u32 *cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 187 */;
	u32 cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 186 */;
	void __iomem *cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 186 */;
	char *cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 1811 */;
	u16 cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 1810 */;
	struct urb_listitem {
		struct list_head urb_list;
		struct urb *urb;
	} cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 155 */;
	gfp_t cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 1492 */;
	struct isp1760_qh {
		struct list_head qh_list;
		struct list_head qtd_list;
		u32 toggle;
		u32 ping;
		int slot;
		int tt_buffer_dirty;
	} cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 146 */;
	struct usb_ctrlrequest cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 1420 */;
	long unsigned cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 1406 */;
	u8 cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 1396 */;
	size_t cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 1364 */;
	unsigned long cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 1268 */;
	struct timer_list *cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 1262 */;
	struct timer_list cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 1259 */;
	irqreturn_t cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 1204 */;
	struct isp1760_qtd {
		u8 packet_type;
		void *data_buffer;
		u32 payload_addr;
		struct list_head qtd_list;
		struct urb *urb;
		size_t length;
		size_t actual_length;
#define QTD_ENQUEUED 0
#define QTD_PAYLOAD_ALLOC 1
#define QTD_XFER_STARTED 2
#define QTD_XFER_COMPLETE 3
#define QTD_RETIRE 4
		u32 status;
	} cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 120 */;
	typeof(*qtd) cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 1143 */;
	struct urb *cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 1027 */;
	struct ptd *cocci_id/* drivers/usb/isp1760/isp1760-hcd.c 1026 */;
}
