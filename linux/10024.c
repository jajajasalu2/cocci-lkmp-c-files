cocci_test_suite() {
	struct {
		__le16 idx;
		u8 rsc[ORINOCO_SEQ_LEN];
		u8 key[TKIP_KEYLEN];
		u8 tx_mic[MIC_KEYLEN];
		u8 rx_mic[MIC_KEYLEN];
		u8 tsc[ORINOCO_SEQ_LEN];
	}__packed cocci_id/* drivers/net/wireless/intersil/orinoco/hw.c 994 */;
	size_t cocci_id/* drivers/net/wireless/intersil/orinoco/hw.c 992 */;
	const u8 *cocci_id/* drivers/net/wireless/intersil/orinoco/hw.c 991 */;
	u8 cocci_id/* drivers/net/wireless/intersil/orinoco/hw.c 877 */[LARGE_KEY_SIZE];
	struct orinoco_key cocci_id/* drivers/net/wireless/intersil/orinoco/hw.c 828 */[ORINOCO_MAX_KEYS];
	char cocci_id/* drivers/net/wireless/intersil/orinoco/hw.c 78 */[SYMBOL_MAX_VER_LEN + 1]__attribute__((aligned(2)));
	unsigned int cocci_id/* drivers/net/wireless/intersil/orinoco/hw.c 77 */;
	struct comp_id cocci_id/* drivers/net/wireless/intersil/orinoco/hw.c 76 */;
	struct device *cocci_id/* drivers/net/wireless/intersil/orinoco/hw.c 73 */;
	u32 *cocci_id/* drivers/net/wireless/intersil/orinoco/hw.c 71 */;
	struct hermes *cocci_id/* drivers/net/wireless/intersil/orinoco/hw.c 709 */;
	struct orinoco_private *cocci_id/* drivers/net/wireless/intersil/orinoco/hw.c 707 */;
	int cocci_id/* drivers/net/wireless/intersil/orinoco/hw.c 707 */;
	char *cocci_id/* drivers/net/wireless/intersil/orinoco/hw.c 70 */;
	u8 cocci_id/* drivers/net/wireless/intersil/orinoco/hw.c 694 */[4][ORINOCO_SEQ_LEN];
	enum fwtype cocci_id/* drivers/net/wireless/intersil/orinoco/hw.c 50 */;
	struct comp_id *cocci_id/* drivers/net/wireless/intersil/orinoco/hw.c 50 */;
	struct wireless_dev *cocci_id/* drivers/net/wireless/intersil/orinoco/hw.c 460 */;
	struct comp_id {
		u16 id,variant,major,minor;
	}__packed cocci_id/* drivers/net/wireless/intersil/orinoco/hw.c 46 */;
	int *cocci_id/* drivers/net/wireless/intersil/orinoco/hw.c 449 */;
	void cocci_id/* drivers/net/wireless/intersil/orinoco/hw.c 449 */;
	const struct {
		int bitrate;
		int automatic;
		u16 agere_txratectrl;
		u16 intersil_txratectrl;
	} cocci_id/* drivers/net/wireless/intersil/orinoco/hw.c 28 */[];
	unsigned long cocci_id/* drivers/net/wireless/intersil/orinoco/hw.c 155 */;
	struct {
		u8 addr[ETH_ALEN];
		__le16 reason_code;
	}__packed cocci_id/* drivers/net/wireless/intersil/orinoco/hw.c 1329 */;
	u8 *cocci_id/* drivers/net/wireless/intersil/orinoco/hw.c 1324 */;
	__le16 cocci_id/* drivers/net/wireless/intersil/orinoco/hw.c 1271 */[3];
	const struct cfg80211_ssid *cocci_id/* drivers/net/wireless/intersil/orinoco/hw.c 1238 */;
	unsigned char *cocci_id/* drivers/net/wireless/intersil/orinoco/hw.c 1211 */;
	struct hermes_idstring cocci_id/* drivers/net/wireless/intersil/orinoco/hw.c 1210 */;
	s32 *cocci_id/* drivers/net/wireless/intersil/orinoco/hw.c 1207 */;
	char cocci_id/* drivers/net/wireless/intersil/orinoco/hw.c 1114 */[IW_ESSID_MAX_SIZE + 1];
	struct hermes_multicast cocci_id/* drivers/net/wireless/intersil/orinoco/hw.c 1090 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/wireless/intersil/orinoco/hw.c 1089 */;
	struct net_device *cocci_id/* drivers/net/wireless/intersil/orinoco/hw.c 1068 */;
	u16 cocci_id/* drivers/net/wireless/intersil/orinoco/hw.c 1006 */;
}
