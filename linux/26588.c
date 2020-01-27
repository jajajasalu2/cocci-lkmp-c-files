cocci_test_suite() {
	struct test_ping_req_msg_v01 {
		char ping[4];
		u8 client_name_valid;
		struct test_name_type_v01 client_name;
	} cocci_id/* samples/qmi/qmi_sample_client.c 67 */;
	char cocci_id/* samples/qmi/qmi_sample_client.c 58 */;
	struct qmi_ops cocci_id/* samples/qmi/qmi_sample_client.c 574 */;
	struct qmi_handle cocci_id/* samples/qmi/qmi_sample_client.c 572 */;
	struct platform_device *cocci_id/* samples/qmi/qmi_sample_client.c 567 */;
	struct qmi_service *cocci_id/* samples/qmi/qmi_sample_client.c 565 */;
	struct sockaddr_qrtr cocci_id/* samples/qmi/qmi_sample_client.c 539 */;
	struct platform_driver cocci_id/* samples/qmi/qmi_sample_client.c 527 */;
	struct sockaddr *cocci_id/* samples/qmi/qmi_sample_client.c 471 */;
	char cocci_id/* samples/qmi/qmi_sample_client.c 457 */[20];
	struct qmi_sample *cocci_id/* samples/qmi/qmi_sample_client.c 456 */;
	struct dentry *cocci_id/* samples/qmi/qmi_sample_client.c 451 */;
	struct qmi_sample {
		struct qmi_handle qmi;
		struct dentry *de_dir;
		struct dentry *de_data;
		struct dentry *de_ping;
	} cocci_id/* samples/qmi/qmi_sample_client.c 443 */;
	struct qmi_msg_handler cocci_id/* samples/qmi/qmi_sample_client.c 432 */[];
	const struct file_operations cocci_id/* samples/qmi/qmi_sample_client.c 427 */;
	struct test_name_type_v01 {
		u32 name_len;
		char name[TEST_MAX_NAME_SIZE_V01];
	} cocci_id/* samples/qmi/qmi_sample_client.c 40 */;
	int cocci_id/* samples/qmi/qmi_sample_client.c 376 */;
	struct qmi_txn cocci_id/* samples/qmi/qmi_sample_client.c 375 */;
	struct test_data_req_msg_v01 *cocci_id/* samples/qmi/qmi_sample_client.c 374 */;
	struct test_data_resp_msg_v01 *cocci_id/* samples/qmi/qmi_sample_client.c 373 */;
	struct qmi_handle *cocci_id/* samples/qmi/qmi_sample_client.c 372 */;
	loff_t *cocci_id/* samples/qmi/qmi_sample_client.c 369 */;
	size_t cocci_id/* samples/qmi/qmi_sample_client.c 369 */;
	const char __user *cocci_id/* samples/qmi/qmi_sample_client.c 368 */;
	struct file *cocci_id/* samples/qmi/qmi_sample_client.c 368 */;
	ssize_t cocci_id/* samples/qmi/qmi_sample_client.c 368 */;
	const struct test_ping_resp_msg_v01 *cocci_id/* samples/qmi/qmi_sample_client.c 339 */;
	const void *cocci_id/* samples/qmi/qmi_sample_client.c 337 */;
	struct qmi_txn *cocci_id/* samples/qmi/qmi_sample_client.c 337 */;
	struct sockaddr_qrtr *cocci_id/* samples/qmi/qmi_sample_client.c 336 */;
	void cocci_id/* samples/qmi/qmi_sample_client.c 336 */;
	struct test_ping_req_msg_v01 cocci_id/* samples/qmi/qmi_sample_client.c 305 */;
	struct test_data_resp_msg_v01 cocci_id/* samples/qmi/qmi_sample_client.c 234 */;
	struct qmi_response_type_v01 cocci_id/* samples/qmi/qmi_sample_client.c 231 */;
	struct test_data_resp_msg_v01 {
		struct qmi_response_type_v01 resp;
		u8 data_valid;
		u32 data_len;
		u8 data[TEST_MED_DATA_SIZE_V01];
		u8 service_name_valid;
		struct test_name_type_v01 service_name;
	} cocci_id/* samples/qmi/qmi_sample_client.c 216 */;
	struct test_name_type_v01 cocci_id/* samples/qmi/qmi_sample_client.c 206 */;
	u8 cocci_id/* samples/qmi/qmi_sample_client.c 188 */;
	struct test_data_req_msg_v01 cocci_id/* samples/qmi/qmi_sample_client.c 182 */;
	u32 cocci_id/* samples/qmi/qmi_sample_client.c 179 */;
	struct qmi_elem_info cocci_id/* samples/qmi/qmi_sample_client.c 175 */[];
	struct test_data_req_msg_v01 {
		u32 data_len;
		u8 data[TEST_MED_DATA_SIZE_V01];
		u8 client_name_valid;
		struct test_name_type_v01 client_name;
	} cocci_id/* samples/qmi/qmi_sample_client.c 167 */;
	struct test_ping_resp_msg_v01 cocci_id/* samples/qmi/qmi_sample_client.c 123 */;
	struct test_ping_resp_msg_v01 {
		struct qmi_response_type_v01 resp;
		u8 pong_valid;
		char pong[4];
		u8 service_name_valid;
		struct test_name_type_v01 service_name;
	} cocci_id/* samples/qmi/qmi_sample_client.c 106 */;
}
