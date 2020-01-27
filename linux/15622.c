cocci_test_suite() {
	int cocci_id/* drivers/staging/wusbcore/wa-xfer.c 96 */(struct wa_rpipe *rpipe,
								int *dto_waiting);
	void cocci_id/* drivers/staging/wusbcore/wa-xfer.c 95 */(struct wa_rpipe *);
	enum wa_seg_status{WA_SEG_NOTREADY, WA_SEG_READY, WA_SEG_DELAYED, WA_SEG_SUBMITTED, WA_SEG_PENDING, WA_SEG_DTI_PENDING, WA_SEG_DONE, WA_SEG_ERROR, WA_SEG_ABORTED,} cocci_id/* drivers/staging/wusbcore/wa-xfer.c 83 */;
	enum{WA_SEGS_MAX=128,} cocci_id/* drivers/staging/wusbcore/wa-xfer.c 78 */;
	struct wa_xfer_ctl cocci_id/* drivers/staging/wusbcore/wa-xfer.c 695 */;
	struct wa_xfer_ctl *cocci_id/* drivers/staging/wusbcore/wa-xfer.c 694 */;
	struct wa_xfer_packet_info_hwaiso *cocci_id/* drivers/staging/wusbcore/wa-xfer.c 656 */;
	struct wa_xfer_bi cocci_id/* drivers/staging/wusbcore/wa-xfer.c 595 */;
	enum wa_xfer_type *cocci_id/* drivers/staging/wusbcore/wa-xfer.c 579 */;
	ssize_t cocci_id/* drivers/staging/wusbcore/wa-xfer.c 578 */;
	int *cocci_id/* drivers/staging/wusbcore/wa-xfer.c 537 */;
	struct wa_xfer_abort_buffer *cocci_id/* drivers/staging/wusbcore/wa-xfer.c 498 */;
	struct device *cocci_id/* drivers/staging/wusbcore/wa-xfer.c 497 */;
	unsigned long cocci_id/* drivers/staging/wusbcore/wa-xfer.c 447 */;
	struct wa_xfer_abort_buffer {
		struct urb urb;
		struct wahc *wa;
		struct wa_xfer_abort cmd;
	} cocci_id/* drivers/staging/wusbcore/wa-xfer.c 423 */;
	enum wa_seg_status cocci_id/* drivers/staging/wusbcore/wa-xfer.c 389 */;
	unsigned cocci_id/* drivers/staging/wusbcore/wa-xfer.c 323 */;
	__le32 cocci_id/* drivers/staging/wusbcore/wa-xfer.c 313 */;
	struct wa_notif_xfer cocci_id/* drivers/staging/wusbcore/wa-xfer.c 2909 */;
	struct wa_notif_xfer *cocci_id/* drivers/staging/wusbcore/wa-xfer.c 2906 */;
	struct wa_notif_hdr *cocci_id/* drivers/staging/wusbcore/wa-xfer.c 2903 */;
	struct wa_xfer_result *cocci_id/* drivers/staging/wusbcore/wa-xfer.c 2762 */;
	u32 cocci_id/* drivers/staging/wusbcore/wa-xfer.c 2755 */;
	struct wa_xfer_packet_status_len_hwaiso *cocci_id/* drivers/staging/wusbcore/wa-xfer.c 2434 */;
	struct wa_xfer_packet_status_hwaiso *cocci_id/* drivers/staging/wusbcore/wa-xfer.c 2433 */;
	struct wa_rpipe cocci_id/* drivers/staging/wusbcore/wa-xfer.c 228 */;
	unsigned int cocci_id/* drivers/staging/wusbcore/wa-xfer.c 2219 */;
	const int cocci_id/* drivers/staging/wusbcore/wa-xfer.c 2169 */;
	struct usb_iso_packet_descriptor *cocci_id/* drivers/staging/wusbcore/wa-xfer.c 2167 */;
	struct wa_xfer *cocci_id/* drivers/staging/wusbcore/wa-xfer.c 2163 */;
	struct wa_seg *cocci_id/* drivers/staging/wusbcore/wa-xfer.c 2163 */;
	struct urb *cocci_id/* drivers/staging/wusbcore/wa-xfer.c 2163 */;
	struct wahc *cocci_id/* drivers/staging/wusbcore/wa-xfer.c 213 */;
	void cocci_id/* drivers/staging/wusbcore/wa-xfer.c 213 */;
	int cocci_id/* drivers/staging/wusbcore/wa-xfer.c 2081 */[];
	int cocci_id/* drivers/staging/wusbcore/wa-xfer.c 207 */;
	gfp_t cocci_id/* drivers/staging/wusbcore/wa-xfer.c 1821 */;
	struct usb_host_endpoint *cocci_id/* drivers/staging/wusbcore/wa-xfer.c 1787 */;
	struct wahc cocci_id/* drivers/staging/wusbcore/wa-xfer.c 1770 */;
	struct work_struct *cocci_id/* drivers/staging/wusbcore/wa-xfer.c 1768 */;
	struct wa_xfer cocci_id/* drivers/staging/wusbcore/wa-xfer.c 174 */;
	struct kref *cocci_id/* drivers/staging/wusbcore/wa-xfer.c 172 */;
	struct wusb_dev *cocci_id/* drivers/staging/wusbcore/wa-xfer.c 1646 */;
	struct wusbhc *cocci_id/* drivers/staging/wusbcore/wa-xfer.c 1645 */;
	void cocci_id/* drivers/staging/wusbcore/wa-xfer.c 156 */(struct wa_xfer *xfer,
								  int starting_index,
								  enum wa_seg_status status);
	u8 cocci_id/* drivers/staging/wusbcore/wa-xfer.c 1551 */;
	void cocci_id/* drivers/staging/wusbcore/wa-xfer.c 154 */(struct wa_xfer *xfer,
								  struct wa_seg *seg,
								  int curr_iso_frame);
	struct wa_seg cocci_id/* drivers/staging/wusbcore/wa-xfer.c 1465 */;
	struct wa_rpipe *cocci_id/* drivers/staging/wusbcore/wa-xfer.c 1376 */;
	void *cocci_id/* drivers/staging/wusbcore/wa-xfer.c 1332 */;
	struct wa_xfer_hwaiso cocci_id/* drivers/staging/wusbcore/wa-xfer.c 1331 */;
	struct wa_xfer {
		struct kref refcnt;
		struct list_head list_node;
		spinlock_t lock;
		u32 id;
		struct wahc *wa;
		struct usb_host_endpoint *ep;
		struct urb *urb;
		struct wa_seg **seg;
		u8 segs,segs_submitted,segs_done;
		unsigned is_inbound:1;
		unsigned is_dma:1;
		size_t seg_size;
		int result;
		gfp_t gfp;
		struct wusb_dev *wusb_dev;
	} cocci_id/* drivers/staging/wusbcore/wa-xfer.c 133 */;
	struct wa_xfer_hwaiso *cocci_id/* drivers/staging/wusbcore/wa-xfer.c 1327 */;
	struct wa_xfer_hdr *cocci_id/* drivers/staging/wusbcore/wa-xfer.c 1302 */;
	enum wa_xfer_type cocci_id/* drivers/staging/wusbcore/wa-xfer.c 1300 */;
	struct wa_xfer_packet_info_hwaiso cocci_id/* drivers/staging/wusbcore/wa-xfer.c 1189 */;
	const struct usb_endpoint_descriptor *cocci_id/* drivers/staging/wusbcore/wa-xfer.c 1165 */;
	struct usb_device *cocci_id/* drivers/staging/wusbcore/wa-xfer.c 1164 */;
	size_t cocci_id/* drivers/staging/wusbcore/wa-xfer.c 1106 */;
	struct scatterlist cocci_id/* drivers/staging/wusbcore/wa-xfer.c 1039 */;
	struct wa_seg {
		struct urb tr_urb;
		struct urb *isoc_pack_desc_urb;
		struct urb *dto_urb;
		struct list_head list_node;
		struct wa_xfer *xfer;
		u8 index;
		int isoc_frame_count;
		int isoc_frame_offset;
		int isoc_frame_index;
		int isoc_size;
		enum wa_seg_status status;
		ssize_t result;
		struct wa_xfer_hdr xfer_hdr;
	} cocci_id/* drivers/staging/wusbcore/wa-xfer.c 103 */;
	const unsigned int cocci_id/* drivers/staging/wusbcore/wa-xfer.c 1006 */;
	struct scatterlist *cocci_id/* drivers/staging/wusbcore/wa-xfer.c 1005 */;
}
