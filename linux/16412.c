cocci_test_suite() {
	struct synthhid_device_info_ack {
		struct synthhid_msg_hdr header;
		unsigned char reserved;
	} cocci_id/* drivers/hid/hid-hyperv.c 95 */;
	struct synthhid_device_info {
		struct synthhid_msg_hdr header;
		struct hv_input_dev_info hid_dev_info;
		struct hid_descriptor hid_descriptor;
	} cocci_id/* drivers/hid/hid-hyperv.c 89 */;
	struct synthhid_protocol_response {
		struct synthhid_msg_hdr header;
		union synthhid_version version_requested;
		unsigned char approved;
	} cocci_id/* drivers/hid/hid-hyperv.c 83 */;
	struct synthhid_protocol_request {
		struct synthhid_msg_hdr header;
		union synthhid_version version_requested;
	} cocci_id/* drivers/hid/hid-hyperv.c 78 */;
	union synthhid_version {
		struct {
			u16 minor_version;
			u16 major_version;
		};
		u32 version;
	} cocci_id/* drivers/hid/hid-hyperv.c 67 */;
	struct synthhid_msg {
		struct synthhid_msg_hdr header;
		char data[1];
	} cocci_id/* drivers/hid/hid-hyperv.c 62 */;
	void __exit cocci_id/* drivers/hid/hid-hyperv.c 601 */;
	void cocci_id/* drivers/hid/hid-hyperv.c 601 */;
	int __init cocci_id/* drivers/hid/hid-hyperv.c 596 */;
	struct hv_driver cocci_id/* drivers/hid/hid-hyperv.c 584 */;
	const struct hv_vmbus_device_id cocci_id/* drivers/hid/hid-hyperv.c 576 */[];
	struct synthhid_msg_hdr {
		enum synthhid_msg_type type;
		u32 size;
	} cocci_id/* drivers/hid/hid-hyperv.c 57 */;
	const struct hv_vmbus_device_id *cocci_id/* drivers/hid/hid-hyperv.c 451 */;
	enum synthhid_msg_type{SYNTH_HID_PROTOCOL_REQUEST, SYNTH_HID_PROTOCOL_RESPONSE, SYNTH_HID_INITIAL_DEVICE_INFO, SYNTH_HID_INITIAL_DEVICE_INFO_ACK, SYNTH_HID_INPUT_REPORT, SYNTH_HID_MAX,} cocci_id/* drivers/hid/hid-hyperv.c 45 */;
	struct hid_driver cocci_id/* drivers/hid/hid-hyperv.c 448 */;
	struct hid_ll_driver cocci_id/* drivers/hid/hid-hyperv.c 439 */;
	__u8 *cocci_id/* drivers/hid/hid-hyperv.c 432 */;
	size_t cocci_id/* drivers/hid/hid-hyperv.c 432 */;
	struct hid_device *cocci_id/* drivers/hid/hid-hyperv.c 422 */;
	unsigned char cocci_id/* drivers/hid/hid-hyperv.c 364 */;
	struct pipe_prt_msg cocci_id/* drivers/hid/hid-hyperv.c 363 */;
	unsigned int cocci_id/* drivers/hid/hid-hyperv.c 359 */;
	struct synthhid_protocol_request cocci_id/* drivers/hid/hid-hyperv.c 357 */;
	struct mousevsc_prt_msg cocci_id/* drivers/hid/hid-hyperv.c 354 */;
	struct mousevsc_prt_msg *cocci_id/* drivers/hid/hid-hyperv.c 348 */;
	unsigned long cocci_id/* drivers/hid/hid-hyperv.c 346 */;
	int cocci_id/* drivers/hid/hid-hyperv.c 343 */;
	struct vmpacket_descriptor *cocci_id/* drivers/hid/hid-hyperv.c 324 */;
	void *cocci_id/* drivers/hid/hid-hyperv.c 321 */;
	u32 cocci_id/* drivers/hid/hid-hyperv.c 305 */;
	struct synthhid_device_info *cocci_id/* drivers/hid/hid-hyperv.c 296 */;
	struct hv_input_dev_info cocci_id/* drivers/hid/hid-hyperv.c 289 */;
	struct synthhid_input_report *cocci_id/* drivers/hid/hid-hyperv.c 257 */;
	struct synthhid_msg *cocci_id/* drivers/hid/hid-hyperv.c 255 */;
	struct pipe_prt_msg *cocci_id/* drivers/hid/hid-hyperv.c 254 */;
	struct synthhid_device_info_ack cocci_id/* drivers/hid/hid-hyperv.c 228 */;
	unsigned char *cocci_id/* drivers/hid/hid-hyperv.c 221 */;
	struct hid_descriptor *cocci_id/* drivers/hid/hid-hyperv.c 185 */;
	struct hv_input_dev_info {
		unsigned int size;
		unsigned short vendor;
		unsigned short product;
		unsigned short version;
		unsigned short reserved[11];
	} cocci_id/* drivers/hid/hid-hyperv.c 17 */;
	struct mousevsc_dev cocci_id/* drivers/hid/hid-hyperv.c 160 */;
	struct mousevsc_dev *cocci_id/* drivers/hid/hid-hyperv.c 156 */;
	struct hv_device *cocci_id/* drivers/hid/hid-hyperv.c 156 */;
	struct mousevsc_dev {
		struct hv_device *device;
		bool init_complete;
		bool connected;
		struct mousevsc_prt_msg protocol_req;
		struct mousevsc_prt_msg protocol_resp;
		struct completion wait_event;
		int dev_info_status;
		struct hid_descriptor *hid_desc;
		unsigned char *report_desc;
		u32 report_desc_size;
		struct hv_input_dev_info hid_dev_info;
		struct hid_device *hid_device;
		u8 input_buf[HID_MAX_BUFFER_SIZE];
	} cocci_id/* drivers/hid/hid-hyperv.c 137 */;
	struct mousevsc_prt_msg {
		enum pipe_prot_msg_type type;
		u32 size;
		union {
			struct synthhid_protocol_request request;
			struct synthhid_protocol_response response;
			struct synthhid_device_info_ack ack;
		};
	} cocci_id/* drivers/hid/hid-hyperv.c 124 */;
	struct pipe_prt_msg {
		enum pipe_prot_msg_type type;
		u32 size;
		char data[1];
	} cocci_id/* drivers/hid/hid-hyperv.c 118 */;
	enum pipe_prot_msg_type{PIPE_MESSAGE_INVALID, PIPE_MESSAGE_DATA, PIPE_MESSAGE_MAXIMUM,} cocci_id/* drivers/hid/hid-hyperv.c 111 */;
	struct synthhid_input_report {
		struct synthhid_msg_hdr header;
		char buffer[1];
	} cocci_id/* drivers/hid/hid-hyperv.c 100 */;
}
