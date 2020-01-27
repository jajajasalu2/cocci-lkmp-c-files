cocci_test_suite() {
	void *cocci_id/* drivers/bluetooth/btmtksdio.c 937 */;
	enum{MTK_WMT_PATCH_DWNLD=0x1, MTK_WMT_TEST=0x2, MTK_WMT_WAKEUP=0x3, MTK_WMT_HIF=0x4, MTK_WMT_FUNC_CTRL=0x6, MTK_WMT_RST=0x7, MTK_WMT_SEMAPHORE=0x17,} cocci_id/* drivers/bluetooth/btmtksdio.c 93 */;
	const struct sdio_device_id *cocci_id/* drivers/bluetooth/btmtksdio.c 927 */;
	unsigned long long cocci_id/* drivers/bluetooth/btmtksdio.c 763 */;
	struct btmtk_tci_sleep cocci_id/* drivers/bluetooth/btmtksdio.c 762 */;
	ktime_t cocci_id/* drivers/bluetooth/btmtksdio.c 761 */;
	size_t cocci_id/* drivers/bluetooth/btmtksdio.c 686 */;
	const u8 *cocci_id/* drivers/bluetooth/btmtksdio.c 685 */;
	const struct firmware *cocci_id/* drivers/bluetooth/btmtksdio.c 684 */;
	const char *cocci_id/* drivers/bluetooth/btmtksdio.c 681 */;
	u8 cocci_id/* drivers/bluetooth/btmtksdio.c 663 */;
	struct btmtk_hci_wmt_params cocci_id/* drivers/bluetooth/btmtksdio.c 661 */;
	u32 cocci_id/* drivers/bluetooth/btmtksdio.c 623 */;
	struct btmtksdio_dev *cocci_id/* drivers/bluetooth/btmtksdio.c 622 */;
	struct hci_dev *cocci_id/* drivers/bluetooth/btmtksdio.c 620 */;
	int cocci_id/* drivers/bluetooth/btmtksdio.c 620 */;
	const struct sdio_device_id cocci_id/* drivers/bluetooth/btmtksdio.c 53 */[];
	u16 cocci_id/* drivers/bluetooth/btmtksdio.c 484 */;
	struct sdio_func *cocci_id/* drivers/bluetooth/btmtksdio.c 480 */;
	void cocci_id/* drivers/bluetooth/btmtksdio.c 480 */;
	const struct btmtksdio_data cocci_id/* drivers/bluetooth/btmtksdio.c 45 */;
	struct btmtksdio_data {
		const char *fwname;
	} cocci_id/* drivers/bluetooth/btmtksdio.c 41 */;
	bool cocci_id/* drivers/bluetooth/btmtksdio.c 39 */;
	struct mtkbtsdio_hdr *cocci_id/* drivers/bluetooth/btmtksdio.c 387 */;
	const struct h4_recv_pkt *cocci_id/* drivers/bluetooth/btmtksdio.c 385 */;
	const struct h4_recv_pkt cocci_id/* drivers/bluetooth/btmtksdio.c 377 */[];
	struct hci_event_hdr *cocci_id/* drivers/bluetooth/btmtksdio.c 333 */;
	struct sk_buff *cocci_id/* drivers/bluetooth/btmtksdio.c 330 */;
	struct btmtksdio_dev cocci_id/* drivers/bluetooth/btmtksdio.c 306 */;
	struct work_struct *cocci_id/* drivers/bluetooth/btmtksdio.c 304 */;
	struct mtk_wmt_hdr *cocci_id/* drivers/bluetooth/btmtksdio.c 178 */;
	struct mtk_hci_wmt_cmd cocci_id/* drivers/bluetooth/btmtksdio.c 177 */;
	struct btmtk_hci_wmt_evt *cocci_id/* drivers/bluetooth/btmtksdio.c 176 */;
	struct btmtk_hci_wmt_evt_funcc *cocci_id/* drivers/bluetooth/btmtksdio.c 174 */;
	struct btmtk_hci_wmt_params *cocci_id/* drivers/bluetooth/btmtksdio.c 171 */;
	struct btmtksdio_dev {
		struct hci_dev *hdev;
		struct sdio_func *func;
		struct device *dev;
		struct work_struct tx_work;
		unsigned long tx_state;
		struct sk_buff_head txq;
		struct sk_buff *evt_skb;
		const struct btmtksdio_data *data;
	} cocci_id/* drivers/bluetooth/btmtksdio.c 156 */;
	struct btmtk_hci_wmt_params {
		u8 op;
		u8 flag;
		u16 dlen;
		const void *data;
		u32 *status;
	} cocci_id/* drivers/bluetooth/btmtksdio.c 148 */;
	struct btmtk_tci_sleep {
		u8 mode;
		__le16 duration;
		__le16 host_duration;
		u8 host_wakeup_pin;
		u8 time_compensation;
	}__packed cocci_id/* drivers/bluetooth/btmtksdio.c 140 */;
	struct btmtk_hci_wmt_evt_funcc {
		struct btmtk_hci_wmt_evt hwhdr;
		__be16 status;
	}__packed cocci_id/* drivers/bluetooth/btmtksdio.c 135 */;
	struct btmtk_hci_wmt_evt {
		struct hci_event_hdr hhdr;
		struct mtk_wmt_hdr whdr;
	}__packed cocci_id/* drivers/bluetooth/btmtksdio.c 130 */;
	struct mtk_hci_wmt_cmd {
		struct mtk_wmt_hdr hdr;
		u8 data[256];
	}__packed cocci_id/* drivers/bluetooth/btmtksdio.c 125 */;
	struct mtk_wmt_hdr {
		u8 dir;
		u8 op;
		__le16 dlen;
		u8 flag;
	}__packed cocci_id/* drivers/bluetooth/btmtksdio.c 118 */;
	struct mtkbtsdio_hdr {
		__le16 len;
		__le16 reserved;
		u8 bt_type;
	}__packed cocci_id/* drivers/bluetooth/btmtksdio.c 112 */;
	struct sdio_driver cocci_id/* drivers/bluetooth/btmtksdio.c 1081 */;
	struct device *cocci_id/* drivers/bluetooth/btmtksdio.c 1047 */;
	enum{BTMTK_WMT_INVALID, BTMTK_WMT_PATCH_UNDONE, BTMTK_WMT_PATCH_DONE, BTMTK_WMT_ON_UNDONE, BTMTK_WMT_ON_DONE, BTMTK_WMT_ON_PROGRESS,} cocci_id/* drivers/bluetooth/btmtksdio.c 103 */;
}
