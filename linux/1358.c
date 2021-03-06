cocci_test_suite() {
	struct usb_qualifier_descriptor *cocci_id/* drivers/usb/misc/usbtest.c 996 */;
	struct usb_dev_cap_header cocci_id/* drivers/usb/misc/usbtest.c 934 */;
	struct usbtest_dev {
		struct usb_interface *intf;
		struct usbtest_info *info;
		int in_pipe;
		int out_pipe;
		int in_iso_pipe;
		int out_iso_pipe;
		int in_int_pipe;
		int out_int_pipe;
		struct usb_endpoint_descriptor *iso_in,*iso_out;
		struct usb_endpoint_descriptor *int_in,*int_out;
		struct mutex lock;
#define TBUF_SIZE 256
		u8 *buf;
	} cocci_id/* drivers/usb/misc/usbtest.c 93 */;
	u8 *cocci_id/* drivers/usb/misc/usbtest.c 902 */;
	struct usb_dev_cap_header *cocci_id/* drivers/usb/misc/usbtest.c 900 */;
	struct usb_bos_descriptor *cocci_id/* drivers/usb/misc/usbtest.c 899 */;
	struct usb_device *cocci_id/* drivers/usb/misc/usbtest.c 829 */;
	struct usb_interface *cocci_id/* drivers/usb/misc/usbtest.c 828 */;
	struct usb_ss_container_id_descriptor *cocci_id/* drivers/usb/misc/usbtest.c 794 */;
	struct usb_ss_cap_descriptor *cocci_id/* drivers/usb/misc/usbtest.c 765 */;
	struct usbtest_info {
		const char *name;
		u8 ep_in;
		u8 ep_out;
		unsigned autoconf:1;
		unsigned ctrl_out:1;
		unsigned iso:1;
		unsigned intr:1;
		int alt;
	} cocci_id/* drivers/usb/misc/usbtest.c 76 */;
	u32 cocci_id/* drivers/usb/misc/usbtest.c 744 */;
	struct usb_ext_cap_descriptor *cocci_id/* drivers/usb/misc/usbtest.c 743 */;
	struct usb_config_descriptor *cocci_id/* drivers/usb/misc/usbtest.c 706 */;
	struct sg_timeout cocci_id/* drivers/usb/misc/usbtest.c 611 */;
	struct usbtest_param_64 cocci_id/* drivers/usb/misc/usbtest.c 61 */;
	struct usb_sg_request *cocci_id/* drivers/usb/misc/usbtest.c 604 */;
	struct sg_timeout *cocci_id/* drivers/usb/misc/usbtest.c 595 */;
	struct timer_list *cocci_id/* drivers/usb/misc/usbtest.c 593 */;
	struct usbtest_param_32 cocci_id/* drivers/usb/misc/usbtest.c 59 */;
	struct sg_timeout {
		struct timer_list timer;
		struct usb_sg_request *req;
	} cocci_id/* drivers/usb/misc/usbtest.c 588 */;
	u8 cocci_id/* drivers/usb/misc/usbtest.c 572 */;
	char *cocci_id/* drivers/usb/misc/usbtest.c 554 */;
	unsigned cocci_id/* drivers/usb/misc/usbtest.c 540 */;
	unsigned int cocci_id/* drivers/usb/misc/usbtest.c 539 */;
	struct usbtest_dev *cocci_id/* drivers/usb/misc/usbtest.c 536 */;
	int cocci_id/* drivers/usb/misc/usbtest.c 536 */;
	struct scatterlist *cocci_id/* drivers/usb/misc/usbtest.c 535 */;
	struct completion cocci_id/* drivers/usb/misc/usbtest.c 465 */;
	const char *cocci_id/* drivers/usb/misc/usbtest.c 460 */;
	struct usbtest_param_64 {
		__u32 test_num;
		__u32 iterations;
		__u32 length;
		__u32 vary;
		__u32 sglen;
		__s64 duration_sec;
		__s64 duration_usec;
	} cocci_id/* drivers/usb/misc/usbtest.c 45 */;
	struct urb *cocci_id/* drivers/usb/misc/usbtest.c 384 */;
	void *cocci_id/* drivers/usb/misc/usbtest.c 379 */;
	unsigned long cocci_id/* drivers/usb/misc/usbtest.c 379 */;
	void __exit cocci_id/* drivers/usb/misc/usbtest.c 3061 */;
	int __init cocci_id/* drivers/usb/misc/usbtest.c 3051 */;
	struct usb_driver cocci_id/* drivers/usb/misc/usbtest.c 3039 */;
	const struct usb_device_id cocci_id/* drivers/usb/misc/usbtest.c 2965 */[];
	struct usbtest_info cocci_id/* drivers/usb/misc/usbtest.c 2891 */;
	pm_message_t cocci_id/* drivers/usb/misc/usbtest.c 2859 */;
	struct usbtest_param_32 {
		__u32 test_num;
		__u32 iterations;
		__u32 length;
		__u32 vary;
		__u32 sglen;
		__s32 duration_sec;
		__s32 duration_usec;
	} cocci_id/* drivers/usb/misc/usbtest.c 28 */;
	u16 cocci_id/* drivers/usb/misc/usbtest.c 2769 */;
	struct usbtest_info *cocci_id/* drivers/usb/misc/usbtest.c 2758 */;
	const struct usb_device_id *cocci_id/* drivers/usb/misc/usbtest.c 2754 */;
	unsigned short cocci_id/* drivers/usb/misc/usbtest.c 2748 */;
	struct timespec64 cocci_id/* drivers/usb/misc/usbtest.c 2657 */;
	struct usbtest_param_64 *cocci_id/* drivers/usb/misc/usbtest.c 2654 */;
	usb_complete_t cocci_id/* drivers/usb/misc/usbtest.c 264 */;
	struct usb_sg_request cocci_id/* drivers/usb/misc/usbtest.c 2178 */;
	void cocci_id/* drivers/usb/misc/usbtest.c 21 */(struct urb *urb);
	struct urb *cocci_id/* drivers/usb/misc/usbtest.c 2046 */[MAX_SGLEN];
	struct transfer_context cocci_id/* drivers/usb/misc/usbtest.c 2041 */;
	long cocci_id/* drivers/usb/misc/usbtest.c 1978 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/usb/misc/usbtest.c 1977 */;
	struct transfer_context *cocci_id/* drivers/usb/misc/usbtest.c 1928 */;
	void cocci_id/* drivers/usb/misc/usbtest.c 1926 */;
	struct transfer_context {
		unsigned count;
		unsigned pending;
		spinlock_t lock;
		struct completion done;
		int submit_error;
		unsigned long errors;
		unsigned long packet_count;
		struct usbtest_dev *dev;
		bool is_iso;
	} cocci_id/* drivers/usb/misc/usbtest.c 1914 */;
	dma_addr_t cocci_id/* drivers/usb/misc/usbtest.c 1560 */;
	struct queued_ctx cocci_id/* drivers/usb/misc/usbtest.c 1557 */;
	struct queued_ctx *cocci_id/* drivers/usb/misc/usbtest.c 1537 */;
	struct queued_ctx {
		struct completion complete;
		atomic_t pending;
		unsigned num;
		int status;
		struct urb **urbs;
	} cocci_id/* drivers/usb/misc/usbtest.c 1526 */;
	struct usb_host_interface *cocci_id/* drivers/usb/misc/usbtest.c 146 */;
	struct usb_bos_descriptor cocci_id/* drivers/usb/misc/usbtest.c 1359 */;
	struct usb_host_endpoint *cocci_id/* drivers/usb/misc/usbtest.c 131 */;
	struct usb_host_endpoint **cocci_id/* drivers/usb/misc/usbtest.c 129 */;
	struct usb_interface_descriptor cocci_id/* drivers/usb/misc/usbtest.c 1284 */;
	struct usb_config_descriptor cocci_id/* drivers/usb/misc/usbtest.c 1255 */;
	struct usb_device_descriptor cocci_id/* drivers/usb/misc/usbtest.c 1251 */;
	struct usb_ctrlrequest cocci_id/* drivers/usb/misc/usbtest.c 1231 */;
	struct ctrl_ctx cocci_id/* drivers/usb/misc/usbtest.c 1205 */;
	struct urb **cocci_id/* drivers/usb/misc/usbtest.c 1204 */;
	struct usbtest_param_32 *cocci_id/* drivers/usb/misc/usbtest.c 1201 */;
	struct subcase cocci_id/* drivers/usb/misc/usbtest.c 1096 */;
	struct subcase *cocci_id/* drivers/usb/misc/usbtest.c 1091 */;
	struct usb_ctrlrequest *cocci_id/* drivers/usb/misc/usbtest.c 1090 */;
	struct ctrl_ctx *cocci_id/* drivers/usb/misc/usbtest.c 1089 */;
	struct subcase {
		struct usb_ctrlrequest setup;
		int number;
		int expected;
	} cocci_id/* drivers/usb/misc/usbtest.c 1081 */;
	struct ctrl_ctx {
		spinlock_t lock;
		struct usbtest_dev *dev;
		struct completion complete;
		unsigned count;
		unsigned pending;
		int status;
		struct urb **urb;
		struct usbtest_param_32 *param;
		int last;
	} cocci_id/* drivers/usb/misc/usbtest.c 1067 */;
	struct usb_qualifier_descriptor cocci_id/* drivers/usb/misc/usbtest.c 1001 */;
}
