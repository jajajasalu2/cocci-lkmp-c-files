cocci_test_suite() {
	struct fw_request cocci_id/* drivers/staging/greybus/fw-download.c 46 */;
	struct kref *cocci_id/* drivers/staging/greybus/fw-download.c 44 */;
	struct fw_download {
		struct device *parent;
		struct gb_connection *connection;
		struct list_head fw_requests;
		struct ida id_map;
		struct mutex mutex;
	} cocci_id/* drivers/staging/greybus/fw-download.c 36 */;
	struct gb_fw_download_release_firmware_request *cocci_id/* drivers/staging/greybus/fw-download.c 356 */;
	u8 cocci_id/* drivers/staging/greybus/fw-download.c 278 */;
	unsigned int cocci_id/* drivers/staging/greybus/fw-download.c 277 */;
	const struct firmware *cocci_id/* drivers/staging/greybus/fw-download.c 276 */;
	struct gb_fw_download_fetch_firmware_response *cocci_id/* drivers/staging/greybus/fw-download.c 274 */;
	struct gb_fw_download_fetch_firmware_request *cocci_id/* drivers/staging/greybus/fw-download.c 273 */;
	struct gb_connection *cocci_id/* drivers/staging/greybus/fw-download.c 271 */;
	struct gb_operation *cocci_id/* drivers/staging/greybus/fw-download.c 269 */;
	struct gb_fw_download_find_firmware_response *cocci_id/* drivers/staging/greybus/fw-download.c 227 */;
	struct gb_fw_download_find_firmware_request *cocci_id/* drivers/staging/greybus/fw-download.c 226 */;
	struct fw_request {
		u8 firmware_id;
		bool disabled;
		bool timedout;
		char name[FW_NAME_SIZE];
		const struct firmware *fw;
		struct list_head node;
		struct delayed_work dwork;
		unsigned long release_timeout_j;
		struct kref kref;
		struct fw_download *fw_download;
	} cocci_id/* drivers/staging/greybus/fw-download.c 21 */;
	struct gb_interface *cocci_id/* drivers/staging/greybus/fw-download.c 165 */;
	const char *cocci_id/* drivers/staging/greybus/fw-download.c 163 */;
	struct fw_download *cocci_id/* drivers/staging/greybus/fw-download.c 146 */;
	struct fw_request *cocci_id/* drivers/staging/greybus/fw-download.c 144 */;
	int cocci_id/* drivers/staging/greybus/fw-download.c 144 */;
	struct delayed_work *cocci_id/* drivers/staging/greybus/fw-download.c 131 */;
	struct work_struct *cocci_id/* drivers/staging/greybus/fw-download.c 129 */;
	void cocci_id/* drivers/staging/greybus/fw-download.c 114 */;
}
