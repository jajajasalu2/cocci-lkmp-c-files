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
	}__attribute__((__packed__)) cocci_id/* tools/usb/ffs-aio-example/simple/device_app/aio_simple.c 54 */;
	struct io_event cocci_id/* tools/usb/ffs-aio-example/simple/device_app/aio_simple.c 309 */[2];
	uint64_t cocci_id/* tools/usb/ffs-aio-example/simple/device_app/aio_simple.c 302 */;
	bool cocci_id/* tools/usb/ffs-aio-example/simple/device_app/aio_simple.c 220 */;
	struct iocb *cocci_id/* tools/usb/ffs-aio-example/simple/device_app/aio_simple.c 218 */;
	fd_set cocci_id/* tools/usb/ffs-aio-example/simple/device_app/aio_simple.c 215 */;
	io_context_t cocci_id/* tools/usb/ffs-aio-example/simple/device_app/aio_simple.c 212 */;
	int cocci_id/* tools/usb/ffs-aio-example/simple/device_app/aio_simple.c 210 */[2];
	char *cocci_id/* tools/usb/ffs-aio-example/simple/device_app/aio_simple.c 207 */;
	char *cocci_id/* tools/usb/ffs-aio-example/simple/device_app/aio_simple.c 204 */[];
	struct pollfd cocci_id/* tools/usb/ffs-aio-example/simple/device_app/aio_simple.c 169 */[1];
	struct usb_functionfs_event cocci_id/* tools/usb/ffs-aio-example/simple/device_app/aio_simple.c 166 */;
	bool *cocci_id/* tools/usb/ffs-aio-example/simple/device_app/aio_simple.c 164 */;
	int cocci_id/* tools/usb/ffs-aio-example/simple/device_app/aio_simple.c 164 */;
	const char *const cocci_id/* tools/usb/ffs-aio-example/simple/device_app/aio_simple.c 143 */[];
	struct usb_functionfs_event *cocci_id/* tools/usb/ffs-aio-example/simple/device_app/aio_simple.c 141 */;
	void cocci_id/* tools/usb/ffs-aio-example/simple/device_app/aio_simple.c 141 */;
	const struct {
		struct usb_functionfs_strings_head header;
		struct {
			__le16 code;
			const char str1[sizeof(STR_INTERFACE)];
		}__attribute__((__packed__)) lang0;
	}__attribute__((__packed__)) cocci_id/* tools/usb/ffs-aio-example/simple/device_app/aio_simple.c 120 */;
}
