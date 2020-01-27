cocci_test_suite() {
	__u32 cocci_id/* net/nfc/nci/core.c 99 */;
	unsigned long cocci_id/* net/nfc/nci/core.c 99 */;
	data_exchange_cb_t cocci_id/* net/nfc/nci/core.c 989 */;
	void (*cocci_id/* net/nfc/nci/core.c 98 */)(struct nci_dev *ndev,
						    unsigned long opt);
	struct nci_dev *cocci_id/* net/nfc/nci/core.c 97 */;
	int cocci_id/* net/nfc/nci/core.c 97 */;
	struct nci_rf_discover_select_param cocci_id/* net/nfc/nci/core.c 851 */;
	struct nfc_target *cocci_id/* net/nfc/nci/core.c 848 */;
	struct nfc_dev *cocci_id/* net/nfc/nci/core.c 847 */;
	struct nci_rf_discover_param cocci_id/* net/nfc/nci/core.c 783 */;
	u8 cocci_id/* net/nfc/nci/core.c 722 */;
	__u8 cocci_id/* net/nfc/nci/core.c 717 */;
	struct dest_spec_params cocci_id/* net/nfc/nci/core.c 700 */;
	struct nci_core_conn_create_cmd cocci_id/* net/nfc/nci/core.c 685 */;
	struct core_conn_create_data cocci_id/* net/nfc/nci/core.c 683 */;
	struct nci_core_conn_create_cmd *cocci_id/* net/nfc/nci/core.c 682 */;
	struct core_conn_create_dest_spec_params *cocci_id/* net/nfc/nci/core.c 679 */;
	struct core_conn_create_data *cocci_id/* net/nfc/nci/core.c 670 */;
	struct nci_nfcee_mode_set_cmd cocci_id/* net/nfc/nci/core.c 657 */;
	struct nci_nfcee_mode_set_cmd *cocci_id/* net/nfc/nci/core.c 648 */;
	struct nci_nfcee_discover_cmd cocci_id/* net/nfc/nci/core.c 631 */;
	struct nci_set_config_param cocci_id/* net/nfc/nci/core.c 615 */;
	struct timer_list *cocci_id/* net/nfc/nci/core.c 582 */;
	void cocci_id/* net/nfc/nci/core.c 582 */;
	struct dest_spec_params *cocci_id/* net/nfc/nci/core.c 56 */;
	struct nci_loopback_data cocci_id/* net/nfc/nci/core.c 422 */;
	struct nci_conn_info *cocci_id/* net/nfc/nci/core.c 42 */;
	struct sk_buff **cocci_id/* net/nfc/nci/core.c 419 */;
	void *cocci_id/* net/nfc/nci/core.c 418 */;
	struct nci_loopback_data *cocci_id/* net/nfc/nci/core.c 397 */;
	struct nci_loopback_data {
		u8 conn_id;
		struct sk_buff *data;
	} cocci_id/* net/nfc/nci/core.c 390 */;
	void cocci_id/* net/nfc/nci/core.c 38 */(struct work_struct *work);
	struct nci_cmd_param cocci_id/* net/nfc/nci/core.c 365 */;
	__u16 cocci_id/* net/nfc/nci/core.c 363 */;
	__u8 *cocci_id/* net/nfc/nci/core.c 363 */;
	size_t cocci_id/* net/nfc/nci/core.c 363 */;
	struct nci_cmd_param *cocci_id/* net/nfc/nci/core.c 344 */;
	struct nci_cmd_param {
		__u16 opcode;
		size_t len;
		__u8 *payload;
	} cocci_id/* net/nfc/nci/core.c 336 */;
	struct core_conn_create_data {
		int length;
		struct nci_core_conn_create_cmd *cmd;
	} cocci_id/* net/nfc/nci/core.c 33 */;
	struct nci_rf_deactivate_cmd cocci_id/* net/nfc/nci/core.c 328 */;
	struct nci_rf_discover_select_cmd cocci_id/* net/nfc/nci/core.c 303 */;
	struct nci_rf_discover_select_param *cocci_id/* net/nfc/nci/core.c 301 */;
	struct nci_rf_discover_select_param {
		__u8 rf_discovery_id;
		__u8 rf_protocol;
	} cocci_id/* net/nfc/nci/core.c 294 */;
	struct disc_config cocci_id/* net/nfc/nci/core.c 290 */;
	struct nci_rf_disc_cmd cocci_id/* net/nfc/nci/core.c 237 */;
	struct nci_rf_discover_param *cocci_id/* net/nfc/nci/core.c 235 */;
	struct nci_rf_discover_param {
		__u32 im_protocols;
		__u32 tm_protocols;
	} cocci_id/* net/nfc/nci/core.c 228 */;
	struct nci_core_set_config_cmd cocci_id/* net/nfc/nci/core.c 216 */;
	struct nci_set_config_param *cocci_id/* net/nfc/nci/core.c 215 */;
	struct nci_set_config_param {
		__u8 id;
		size_t len;
		__u8 *val;
	} cocci_id/* net/nfc/nci/core.c 207 */;
	struct disc_map_config cocci_id/* net/nfc/nci/core.c 204 */;
	struct disc_map_config *cocci_id/* net/nfc/nci/core.c 174 */;
	struct nci_rf_disc_map_cmd cocci_id/* net/nfc/nci/core.c 173 */;
	struct nci_core_reset_cmd cocci_id/* net/nfc/nci/core.c 160 */;
	struct sk_buff *cocci_id/* net/nfc/nci/core.c 1508 */;
	struct work_struct *cocci_id/* net/nfc/nci/core.c 1505 */;
	struct nci_driver_ops *cocci_id/* net/nfc/nci/core.c 1380 */;
	struct nci_ctrl_hdr *cocci_id/* net/nfc/nci/core.c 1317 */;
	char cocci_id/* net/nfc/nci/core.c 1191 */[32];
	struct device *cocci_id/* net/nfc/nci/core.c 1190 */;
	struct nci_dev cocci_id/* net/nfc/nci/core.c 1130 */;
	struct nci_ops *cocci_id/* net/nfc/nci/core.c 1116 */;
	struct nfc_ops cocci_id/* net/nfc/nci/core.c 1091 */;
	const char *cocci_id/* net/nfc/nci/core.c 1081 */;
	se_io_cb_t cocci_id/* net/nfc/nci/core.c 1070 */;
	u8 *cocci_id/* net/nfc/nci/core.c 1069 */;
	u32 cocci_id/* net/nfc/nci/core.c 1042 */;
	long cocci_id/* net/nfc/nci/core.c 102 */;
}
