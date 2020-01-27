cocci_test_suite() {
	char cocci_id/* tools/usb/ffs-test.c 85 */[128];
	va_list cocci_id/* tools/usb/ffs-test.c 77 */;
	int cocci_id/* tools/usb/ffs-test.c 76 */;
	const char cocci_id/* tools/usb/ffs-test.c 67 */[8][6];
	char **cocci_id/* tools/usb/ffs-test.c 659 */;
	bool cocci_id/* tools/usb/ffs-test.c 626 */;
	const struct usb_functionfs_event *cocci_id/* tools/usb/ffs-test.c 600 */;
	const char *const cocci_id/* tools/usb/ffs-test.c 590 */[];
	const char *cocci_id/* tools/usb/ffs-test.c 59 */;
	unsigned cocci_id/* tools/usb/ffs-test.c 59 */;
	void cocci_id/* tools/usb/ffs-test.c 59 */;
	const struct usb_ctrlrequest *cocci_id/* tools/usb/ffs-test.c 578 */;
	const char cocci_id/* tools/usb/ffs-test.c 55 */[];
	__u8 cocci_id/* tools/usb/ffs-test.c 529 */;
	const __u8 *cocci_id/* tools/usb/ffs-test.c 528 */;
	ssize_t cocci_id/* tools/usb/ffs-test.c 525 */;
	__u8 *cocci_id/* tools/usb/ffs-test.c 504 */;
	enum pattern cocci_id/* tools/usb/ffs-test.c 498 */;
	enum pattern{PAT_ZERO, PAT_SEQ, PAT_PIPE,} cocci_id/* tools/usb/ffs-test.c 497 */;
	struct thread *cocci_id/* tools/usb/ffs-test.c 390 */;
	void *cocci_id/* tools/usb/ffs-test.c 388 */;
	struct usb_functionfs_event cocci_id/* tools/usb/ffs-test.c 359 */;
	struct thread {
		const char *const filename;
		size_t buf_size;
		ssize_t (*in)(struct thread *, void *, size_t);
		const char *const in_name;
		ssize_t (*out)(struct thread *, const void *, size_t);
		const char *const out_name;
		int fd;
		pthread_t id;
		void *buf;
		ssize_t status;
	} cocci_id/* tools/usb/ffs-test.c 343 */[];
	ssize_t cocci_id/* tools/usb/ffs-test.c 340 */(struct thread *t,
						       const void *buf,
						       size_t nbytes);
	ssize_t cocci_id/* tools/usb/ffs-test.c 339 */(struct thread *t,
						       void *buf,
						       size_t nbytes);
	struct thread cocci_id/* tools/usb/ffs-test.c 334 */;
	const struct {
		struct usb_functionfs_strings_head header;
		struct {
			__le16 code;
			const char str1[sizeof STR_INTERFACE_];
		}__attribute__((packed)) lang0;
	}__attribute__((packed)) cocci_id/* tools/usb/ffs-test.c 310 */;
	struct {
		struct usb_functionfs_descs_head header;
		__u8 descriptors[];
	}__attribute__((packed)) *cocci_id/* tools/usb/ffs-test.c 288 */;
	const __le32 *cocci_id/* tools/usb/ffs-test.c 235 */;
	const struct {
		const struct usb_functionfs_descs_head_v2 header;
		const __le32 counts[];
	}__attribute__((packed)) *const cocci_id/* tools/usb/ffs-test.c 231 */;
	__u32 cocci_id/* tools/usb/ffs-test.c 227 */;
	const unsigned char *cocci_id/* tools/usb/ffs-test.c 226 */;
	const void *cocci_id/* tools/usb/ffs-test.c 224 */;
	void **cocci_id/* tools/usb/ffs-test.c 224 */;
	size_t cocci_id/* tools/usb/ffs-test.c 224 */;
	const struct {
		struct usb_functionfs_descs_head_v2 header;
		__le32 fs_count;
		__le32 hs_count;
		__le32 ss_count;
		struct {
			struct usb_interface_descriptor intf;
			struct usb_endpoint_descriptor_no_audio sink;
			struct usb_endpoint_descriptor_no_audio source;
		}__attribute__((packed)) fs_descs,hs_descs;
		struct {
			struct usb_interface_descriptor intf;
			struct usb_endpoint_descriptor_no_audio sink;
			struct usb_ss_ep_comp_descriptor sink_comp;
			struct usb_endpoint_descriptor_no_audio source;
			struct usb_ss_ep_comp_descriptor source_comp;
		} ss_descs;
	}__attribute__((packed)) cocci_id/* tools/usb/ffs-test.c 109 */;
}
