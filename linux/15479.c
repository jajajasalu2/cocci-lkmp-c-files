cocci_test_suite() {
	struct pn544_hci_info cocci_id/* drivers/nfc/pn544/pn544.c 913 */;
	struct nfc_hci_init_data cocci_id/* drivers/nfc/pn544/pn544.c 910 */;
	fw_download_t cocci_id/* drivers/nfc/pn544/pn544.c 906 */;
	struct nfc_hci_dev **cocci_id/* drivers/nfc/pn544/pn544.c 906 */;
	struct nfc_phy_ops *cocci_id/* drivers/nfc/pn544/pn544.c 904 */;
	char *cocci_id/* drivers/nfc/pn544/pn544.c 904 */;
	struct nfc_hci_gate cocci_id/* drivers/nfc/pn544/pn544.c 89 */[];
	struct nfc_hci_ops cocci_id/* drivers/nfc/pn544/pn544.c 884 */;
	struct nfc_se *cocci_id/* drivers/nfc/pn544/pn544.c 867 */;
	u32 cocci_id/* drivers/nfc/pn544/pn544.c 865 */;
	struct uicc_gatelist *cocci_id/* drivers/nfc/pn544/pn544.c 824 */;
	struct uicc_gatelist {
		u8 head;
		u8 adr[2];
		u8 value;
	} cocci_id/* drivers/nfc/pn544/pn544.c 814 */[];
	const char *cocci_id/* drivers/nfc/pn544/pn544.c 772 */;
	struct nfc_target *cocci_id/* drivers/nfc/pn544/pn544.c 683 */;
	struct nfc_hci_dev *cocci_id/* drivers/nfc/pn544/pn544.c 682 */;
	int cocci_id/* drivers/nfc/pn544/pn544.c 682 */;
	u8 cocci_id/* drivers/nfc/pn544/pn544.c 623 */[MIFARE_UID_LEN];
	data_exchange_cb_t cocci_id/* drivers/nfc/pn544/pn544.c 605 */;
	void *cocci_id/* drivers/nfc/pn544/pn544.c 574 */;
	struct sk_buff *cocci_id/* drivers/nfc/pn544/pn544.c 506 */;
	u8 cocci_id/* drivers/nfc/pn544/pn544.c 503 */;
	u8 *cocci_id/* drivers/nfc/pn544/pn544.c 446 */;
	size_t cocci_id/* drivers/nfc/pn544/pn544.c 446 */;
	u8 cocci_id/* drivers/nfc/pn544/pn544.c 338 */[2];
	u8 cocci_id/* drivers/nfc/pn544/pn544.c 243 */[4];
	struct hw_config *cocci_id/* drivers/nfc/pn544/pn544.c 240 */;
	enum pn544_state{PN544_ST_COLD, PN544_ST_FW_READY, PN544_ST_READY,} cocci_id/* drivers/nfc/pn544/pn544.c 23 */;
	struct hw_config {
		u8 adr[2];
		u8 value;
	} cocci_id/* drivers/nfc/pn544/pn544.c 169 */[];
	struct pn544_hci_info *cocci_id/* drivers/nfc/pn544/pn544.c 151 */;
	void cocci_id/* drivers/nfc/pn544/pn544.c 149 */;
	struct pn544_hci_info {
		struct nfc_phy_ops *phy_ops;
		void *phy_id;
		struct nfc_hci_dev *hdev;
		enum pn544_state state;
		struct mutex info_lock;
		int async_cb_type;
		data_exchange_cb_t async_cb;
		void *async_cb_context;
		fw_download_t fw_download;
	} cocci_id/* drivers/nfc/pn544/pn544.c 110 */;
}
