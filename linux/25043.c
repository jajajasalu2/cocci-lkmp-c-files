cocci_test_suite() {
	struct nci_hci_dev *cocci_id/* net/nfc/nci/hci.c 783 */;
	struct nci_dev *cocci_id/* net/nfc/nci/hci.c 783 */;
	struct nci_conn_info *cocci_id/* net/nfc/nci/hci.c 722 */;
	struct nci_hci_gate *cocci_id/* net/nfc/nci/hci.c 705 */;
	bool cocci_id/* net/nfc/nci/hci.c 655 */;
	unsigned long cocci_id/* net/nfc/nci/hci.c 635 */;
	struct nci_data cocci_id/* net/nfc/nci/hci.c 615 */;
	struct nci_hcp_message *cocci_id/* net/nfc/nci/hci.c 613 */;
	struct sk_buff **cocci_id/* net/nfc/nci/hci.c 611 */;
	u8 *cocci_id/* net/nfc/nci/hci.c 541 */;
	struct nci_hci_create_pipe_params cocci_id/* net/nfc/nci/hci.c 530 */;
	struct nci_hcp_packet {
		u8 header;
		struct nci_hcp_message message;
	}__packed cocci_id/* net/nfc/nci/hci.c 53 */;
	int *cocci_id/* net/nfc/nci/hci.c 526 */;
	struct nci_hcp_message {
		u8 header;
		u8 data[];
	}__packed cocci_id/* net/nfc/nci/hci.c 48 */;
	struct nci_hci_all_pipe_cleared_noti {
		u8 host;
	}__packed cocci_id/* net/nfc/nci/hci.c 44 */;
	struct nci_hcp_packet *cocci_id/* net/nfc/nci/hci.c 434 */;
	void *cocci_id/* net/nfc/nci/hci.c 430 */;
	struct nci_hci_dev cocci_id/* net/nfc/nci/hci.c 412 */;
	struct work_struct *cocci_id/* net/nfc/nci/hci.c 409 */;
	struct nci_hci_delete_pipe_noti {
		u8 pipe;
	}__packed cocci_id/* net/nfc/nci/hci.c 40 */;
	struct nci_hci_create_pipe_resp {
		u8 src_host;
		u8 src_gate;
		u8 dest_host;
		u8 dest_gate;
		u8 pipe;
	}__packed cocci_id/* net/nfc/nci/hci.c 32 */;
	struct nci_hci_all_pipe_cleared_noti *cocci_id/* net/nfc/nci/hci.c 290 */;
	struct nci_hci_delete_pipe_noti *cocci_id/* net/nfc/nci/hci.c 289 */;
	struct nci_hci_create_pipe_resp *cocci_id/* net/nfc/nci/hci.c 288 */;
	struct sk_buff *cocci_id/* net/nfc/nci/hci.c 283 */;
	u8 cocci_id/* net/nfc/nci/hci.c 282 */;
	void cocci_id/* net/nfc/nci/hci.c 282 */;
	int cocci_id/* net/nfc/nci/hci.c 261 */;
	struct nci_hci_create_pipe_params {
		u8 src_gate;
		u8 dest_host;
		u8 dest_gate;
	}__packed cocci_id/* net/nfc/nci/hci.c 26 */;
	const u8 *cocci_id/* net/nfc/nci/hci.c 223 */;
	size_t cocci_id/* net/nfc/nci/hci.c 223 */;
	struct nci_data *cocci_id/* net/nfc/nci/hci.c 202 */;
	struct nci_data {
		u8 conn_id;
		u8 pipe;
		u8 cmd;
		const u8 *data;
		u32 data_len;
	}__packed cocci_id/* net/nfc/nci/hci.c 18 */;
	const u8 cocci_id/* net/nfc/nci/hci.c 142 */;
}
