cocci_test_suite() {
	struct c67x00_td *cocci_id/* drivers/usb/c67x00/c67x00-sched.c 979 */;
	void cocci_id/* drivers/usb/c67x00/c67x00-sched.c 977 */;
	struct c67x00_td cocci_id/* drivers/usb/c67x00/c67x00-sched.c 895 */;
	struct c67x00_urb_priv cocci_id/* drivers/usb/c67x00/c67x00-sched.c 788 */;
	int (*cocci_id/* drivers/usb/c67x00/c67x00-sched.c 777 */)(struct c67x00_hcd *,
								   struct urb *);
	struct c67x00_urb_priv *cocci_id/* drivers/usb/c67x00/c67x00-sched.c 731 */;
	struct c67x00_urb_priv {
		struct list_head hep_node;
		struct urb *urb;
		int port;
		int cnt;
		int status;
		struct c67x00_ep_data *ep_data;
	} cocci_id/* drivers/usb/c67x00/c67x00-sched.c 73 */;
	struct urb *cocci_id/* drivers/usb/c67x00/c67x00-sched.c 691 */;
	struct c67x00_hcd *cocci_id/* drivers/usb/c67x00/c67x00-sched.c 691 */;
	int cocci_id/* drivers/usb/c67x00/c67x00-sched.c 691 */;
	char *cocci_id/* drivers/usb/c67x00/c67x00-sched.c 665 */;
	__u8 cocci_id/* drivers/usb/c67x00/c67x00-sched.c 570 */;
	const __u8 cocci_id/* drivers/usb/c67x00/c67x00-sched.c 569 */;
	unsigned long cocci_id/* drivers/usb/c67x00/c67x00-sched.c 565 */;
	void *cocci_id/* drivers/usb/c67x00/c67x00-sched.c 564 */;
	struct c67x00_td {
		__le16 ly_base_addr;
		__le16 port_length;
		u8 pid_ep;
		u8 dev_addr;
		u8 ctrl_reg;
		u8 status;
		u8 retry_cnt;
#define TT_OFFSET 2
#define TT_CONTROL 0
#define TT_ISOCHRONOUS 1
#define TT_BULK 2
#define TT_INTERRUPT 3
		u8 residue;
		__le16 next_td_addr;
		struct list_head td_list;
		u16 td_addr;
		void *data;
		struct urb *urb;
		unsigned long privdata;
		struct c67x00_ep_data *ep_data;
		unsigned int pipe;
	} cocci_id/* drivers/usb/c67x00/c67x00-sched.c 42 */;
	gfp_t cocci_id/* drivers/usb/c67x00/c67x00-sched.c 343 */;
	struct usb_device *cocci_id/* drivers/usb/c67x00/c67x00-sched.c 335 */;
	struct usb_host_endpoint *cocci_id/* drivers/usb/c67x00/c67x00-sched.c 305 */;
	struct usb_hcd *cocci_id/* drivers/usb/c67x00/c67x00-sched.c 305 */;
	struct c67x00_ep_data {
		struct list_head queue;
		struct list_head node;
		struct usb_host_endpoint *hep;
		struct usb_device *dev;
		u16 next_frame;
	} cocci_id/* drivers/usb/c67x00/c67x00-sched.c 29 */;
	struct c67x00_ep_data *cocci_id/* drivers/usb/c67x00/c67x00-sched.c 230 */;
	u16 cocci_id/* drivers/usb/c67x00/c67x00-sched.c 159 */;
	struct device *cocci_id/* drivers/usb/c67x00/c67x00-sched.c 138 */;
	typeof(*td) cocci_id/* drivers/usb/c67x00/c67x00-sched.c 1033 */;
}
