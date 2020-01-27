cocci_test_suite() {
	struct btmtk_tci_sleep {
		u8 mode;
		__le16 duration;
		__le16 host_duration;
		u8 host_wakeup_pin;
		u8 time_compensation;
	}__packed cocci_id/* drivers/bluetooth/btmtkuart.c 99 */;
	struct btmtk_hci_wmt_evt_funcc {
		struct btmtk_hci_wmt_evt hwhdr;
		__be16 status;
	}__packed cocci_id/* drivers/bluetooth/btmtkuart.c 94 */;
	u32 cocci_id/* drivers/bluetooth/btmtkuart.c 902 */;
	struct device_node *cocci_id/* drivers/bluetooth/btmtkuart.c 901 */;
	struct serdev_device *cocci_id/* drivers/bluetooth/btmtkuart.c 898 */;
	struct btmtk_hci_wmt_evt {
		struct hci_event_hdr hhdr;
		struct mtk_wmt_hdr whdr;
	}__packed cocci_id/* drivers/bluetooth/btmtkuart.c 89 */;
	struct mtk_stp_hdr *cocci_id/* drivers/bluetooth/btmtkuart.c 867 */;
	struct mtk_hci_wmt_cmd {
		struct mtk_wmt_hdr hdr;
		u8 data[256];
	}__packed cocci_id/* drivers/bluetooth/btmtkuart.c 84 */;
	struct mtk_wmt_hdr {
		u8 dir;
		u8 op;
		__le16 dlen;
		u8 flag;
	}__packed cocci_id/* drivers/bluetooth/btmtkuart.c 77 */;
	unsigned long long cocci_id/* drivers/bluetooth/btmtkuart.c 733 */;
	struct btmtk_tci_sleep cocci_id/* drivers/bluetooth/btmtkuart.c 732 */;
	ktime_t cocci_id/* drivers/bluetooth/btmtkuart.c 731 */;
	struct btmtkuart_data {
		unsigned int flags;
		const char *fwname;
	} cocci_id/* drivers/bluetooth/btmtkuart.c 72 */;
	u8 cocci_id/* drivers/bluetooth/btmtkuart.c 667 */;
	__le32 cocci_id/* drivers/bluetooth/btmtkuart.c 666 */;
	struct btmtk_hci_wmt_params cocci_id/* drivers/bluetooth/btmtkuart.c 665 */;
	struct btmtkuart_dev *cocci_id/* drivers/bluetooth/btmtkuart.c 664 */;
	struct hci_dev *cocci_id/* drivers/bluetooth/btmtkuart.c 662 */;
	int cocci_id/* drivers/bluetooth/btmtkuart.c 662 */;
	struct mtk_stp_hdr {
		u8 prefix;
		__be16 dlen;
		u8 cs;
	}__packed cocci_id/* drivers/bluetooth/btmtkuart.c 66 */;
	struct device *cocci_id/* drivers/bluetooth/btmtkuart.c 609 */;
	enum{BTMTK_WMT_INVALID, BTMTK_WMT_PATCH_UNDONE, BTMTK_WMT_PATCH_DONE, BTMTK_WMT_ON_UNDONE, BTMTK_WMT_ON_DONE, BTMTK_WMT_ON_PROGRESS,} cocci_id/* drivers/bluetooth/btmtkuart.c 57 */;
	const struct serdev_device_ops cocci_id/* drivers/bluetooth/btmtkuart.c 542 */;
	size_t cocci_id/* drivers/bluetooth/btmtkuart.c 521 */;
	const u8 *cocci_id/* drivers/bluetooth/btmtkuart.c 520 */;
	const unsigned char *cocci_id/* drivers/bluetooth/btmtkuart.c 474 */;
	enum{MTK_WMT_PATCH_DWNLD=0x1, MTK_WMT_TEST=0x2, MTK_WMT_WAKEUP=0x3, MTK_WMT_HIF=0x4, MTK_WMT_FUNC_CTRL=0x6, MTK_WMT_RST=0x7, MTK_WMT_SEMAPHORE=0x17,} cocci_id/* drivers/bluetooth/btmtkuart.c 47 */;
	int *cocci_id/* drivers/bluetooth/btmtkuart.c 427 */;
	struct btmtkuart_dev cocci_id/* drivers/bluetooth/btmtkuart.c 370 */;
	struct work_struct *cocci_id/* drivers/bluetooth/btmtkuart.c 368 */;
	const struct h4_recv_pkt cocci_id/* drivers/bluetooth/btmtkuart.c 362 */[];
	struct hci_event_hdr *cocci_id/* drivers/bluetooth/btmtkuart.c 318 */;
	void *cocci_id/* drivers/bluetooth/btmtkuart.c 318 */;
	struct sk_buff *cocci_id/* drivers/bluetooth/btmtkuart.c 315 */;
	const struct firmware *cocci_id/* drivers/bluetooth/btmtkuart.c 242 */;
	const char *cocci_id/* drivers/bluetooth/btmtkuart.c 239 */;
	struct mtk_wmt_hdr *cocci_id/* drivers/bluetooth/btmtkuart.c 157 */;
	struct mtk_hci_wmt_cmd cocci_id/* drivers/bluetooth/btmtkuart.c 156 */;
	struct btmtk_hci_wmt_evt *cocci_id/* drivers/bluetooth/btmtkuart.c 155 */;
	struct btmtk_hci_wmt_evt_funcc *cocci_id/* drivers/bluetooth/btmtkuart.c 153 */;
	struct btmtk_hci_wmt_params *cocci_id/* drivers/bluetooth/btmtkuart.c 150 */;
	struct btmtkuart_dev {
		struct hci_dev *hdev;
		struct serdev_device *serdev;
		struct clk *clk;
		struct clk *osc;
		struct regulator *vcc;
		struct gpio_desc *reset;
		struct gpio_desc *boot;
		struct pinctrl *pinctrl;
		struct pinctrl_state *pins_runtime;
		struct pinctrl_state *pins_boot;
		speed_t desired_speed;
		speed_t curr_speed;
		struct work_struct tx_work;
		unsigned long tx_state;
		struct sk_buff_head txq;
		struct sk_buff *rx_skb;
		struct sk_buff *evt_skb;
		u8 stp_pad[6];
		u8 stp_cursor;
		u16 stp_dlen;
		const struct btmtkuart_data *data;
	} cocci_id/* drivers/bluetooth/btmtkuart.c 115 */;
	struct serdev_device_driver cocci_id/* drivers/bluetooth/btmtkuart.c 1117 */;
	const struct of_device_id cocci_id/* drivers/bluetooth/btmtkuart.c 1108 */[];
	const struct btmtkuart_data cocci_id/* drivers/bluetooth/btmtkuart.c 1093 */;
	void cocci_id/* drivers/bluetooth/btmtkuart.c 1079 */;
	struct btmtk_hci_wmt_params {
		u8 op;
		u8 flag;
		u16 dlen;
		const void *data;
		u32 *status;
	} cocci_id/* drivers/bluetooth/btmtkuart.c 107 */;
}
