cocci_test_suite() {
	const struct {
		struct usb_functionfs_descs_head_v2 header;
		__le32 fs_count;
		__le32 hs_count;
		struct {
			struct usb_interface_descriptor intf;
			struct usb_endpoint_descriptor_no_audio bulk_sink;
			struct usb_endpoint_descriptor_no_audio bulk_source;
		}__attribute__((__packed__)) fs_descs,hs_descs;
	}__attribute__((__packed__)) cocci_id/* tools/usb/ffs-aio-example/multibuff/device_app/aio_multibuff.c 56 */;
	struct io_event cocci_id/* tools/usb/ffs-aio-example/multibuff/device_app/aio_multibuff.c 359 */[BUFS_MAX];
	uint64_t cocci_id/* tools/usb/ffs-aio-example/multibuff/device_app/aio_multibuff.c 352 */;
	bool cocci_id/* tools/usb/ffs-aio-example/multibuff/device_app/aio_multibuff.c 249 */;
	struct io_buffer cocci_id/* tools/usb/ffs-aio-example/multibuff/device_app/aio_multibuff.c 247 */[2];
	fd_set cocci_id/* tools/usb/ffs-aio-example/multibuff/device_app/aio_multibuff.c 245 */;
	io_context_t cocci_id/* tools/usb/ffs-aio-example/multibuff/device_app/aio_multibuff.c 242 */;
	char *cocci_id/* tools/usb/ffs-aio-example/multibuff/device_app/aio_multibuff.c 238 */;
	char *cocci_id/* tools/usb/ffs-aio-example/multibuff/device_app/aio_multibuff.c 234 */[];
	unsigned cocci_id/* tools/usb/ffs-aio-example/multibuff/device_app/aio_multibuff.c 225 */;
	struct io_buffer *cocci_id/* tools/usb/ffs-aio-example/multibuff/device_app/aio_multibuff.c 223 */;
	void cocci_id/* tools/usb/ffs-aio-example/multibuff/device_app/aio_multibuff.c 223 */;
	struct usb_functionfs_event cocci_id/* tools/usb/ffs-aio-example/multibuff/device_app/aio_multibuff.c 179 */;
	bool *cocci_id/* tools/usb/ffs-aio-example/multibuff/device_app/aio_multibuff.c 176 */;
	int cocci_id/* tools/usb/ffs-aio-example/multibuff/device_app/aio_multibuff.c 176 */;
	const char *const cocci_id/* tools/usb/ffs-aio-example/multibuff/device_app/aio_multibuff.c 155 */[];
	struct usb_functionfs_event *cocci_id/* tools/usb/ffs-aio-example/multibuff/device_app/aio_multibuff.c 153 */;
	struct io_buffer {
		struct iocb **iocb;
		unsigned char **buf;
		unsigned cnt;
		unsigned len;
		unsigned requested;
	} cocci_id/* tools/usb/ffs-aio-example/multibuff/device_app/aio_multibuff.c 143 */;
	const struct {
		struct usb_functionfs_strings_head header;
		struct {
			__le16 code;
			const char str1[sizeof(STR_INTERFACE)];
		}__attribute__((__packed__)) lang0;
	}__attribute__((__packed__)) cocci_id/* tools/usb/ffs-aio-example/multibuff/device_app/aio_multibuff.c 122 */;
}
