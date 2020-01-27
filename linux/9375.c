cocci_test_suite() {
	struct {
		__le32 id;
		struct mt76x2_tssi_comp data;
	}__packed __aligned(4) cocci_id/* drivers/net/wireless/mediatek/mt76/mt76x2/mcu.c 95 */;
	struct mt76x2_tssi_comp *cocci_id/* drivers/net/wireless/mediatek/mt76/mt76x2/mcu.c 93 */;
	struct {
		__le32 channel;
		__le32 gain_val;
	}__packed __aligned(4) cocci_id/* drivers/net/wireless/mediatek/mt76/mt76x2/mcu.c 76 */;
	bool cocci_id/* drivers/net/wireless/mediatek/mt76/mt76x2/mcu.c 74 */;
	u8 cocci_id/* drivers/net/wireless/mediatek/mt76/mt76x2/mcu.c 73 */;
	u32 cocci_id/* drivers/net/wireless/mediatek/mt76/mt76x2/mcu.c 73 */;
	struct mt76x02_dev *cocci_id/* drivers/net/wireless/mediatek/mt76/mt76x2/mcu.c 73 */;
	int cocci_id/* drivers/net/wireless/mediatek/mt76/mt76x2/mcu.c 73 */;
	struct {
		u8 cr_mode;
		u8 temp;
		u8 ch;
		u8 _pad0;
		__le32 cfg;
	}__packed __aligned(4) cocci_id/* drivers/net/wireless/mediatek/mt76/mt76x2/mcu.c 49 */;
	struct {
		u8 idx;
		u8 scan;
		u8 bw;
		u8 _pad0;
		__le16 chainmask;
		u8 ext_chan;
		u8 _pad1;
	}__packed __aligned(4) cocci_id/* drivers/net/wireless/mediatek/mt76/mt76x2/mcu.c 18 */;
}
