cocci_test_suite() {
	struct gb_hid_set_report_request *cocci_id/* drivers/staging/greybus/hid.c 98 */;
	struct gb_hid_get_report_request cocci_id/* drivers/staging/greybus/hid.c 77 */;
	unsigned char *cocci_id/* drivers/staging/greybus/hid.c 75 */;
	u8 cocci_id/* drivers/staging/greybus/hid.c 74 */;
	struct greybus_driver cocci_id/* drivers/staging/greybus/hid.c 512 */;
	const struct greybus_bundle_id cocci_id/* drivers/staging/greybus/hid.c 506 */[];
	struct gb_bundle *cocci_id/* drivers/staging/greybus/hid.c 493 */;
	struct gb_connection *cocci_id/* drivers/staging/greybus/hid.c 426 */;
	struct greybus_descriptor_cport *cocci_id/* drivers/staging/greybus/hid.c 425 */;
	const struct greybus_bundle_id *cocci_id/* drivers/staging/greybus/hid.c 423 */;
	char *cocci_id/* drivers/staging/greybus/hid.c 42 */;
	struct hid_ll_driver cocci_id/* drivers/staging/greybus/hid.c 385 */;
	void cocci_id/* drivers/staging/greybus/hid.c 356 */;
	struct gb_hid *cocci_id/* drivers/staging/greybus/hid.c 227 */;
	__u8 *cocci_id/* drivers/staging/greybus/hid.c 224 */;
	unsigned char cocci_id/* drivers/staging/greybus/hid.c 224 */;
	size_t cocci_id/* drivers/staging/greybus/hid.c 224 */;
	struct hid_device *cocci_id/* drivers/staging/greybus/hid.c 223 */;
	int cocci_id/* drivers/staging/greybus/hid.c 223 */;
	struct gb_hid {
		struct gb_bundle *bundle;
		struct gb_connection *connection;
		struct hid_device *hid;
		struct gb_hid_desc_response hdesc;
		unsigned long flags;
#define GB_HID_STARTED 0x01
#define GB_HID_READ_PENDING 0x04
		unsigned int bufsize;
		char *inbuf;
	} cocci_id/* drivers/staging/greybus/hid.c 18 */;
	struct hid_report *cocci_id/* drivers/staging/greybus/hid.c 161 */;
	unsigned int *cocci_id/* drivers/staging/greybus/hid.c 159 */;
	unsigned int cocci_id/* drivers/staging/greybus/hid.c 158 */;
	struct gb_hid_input_report_request *cocci_id/* drivers/staging/greybus/hid.c 137 */;
	struct gb_operation *cocci_id/* drivers/staging/greybus/hid.c 133 */;
}
