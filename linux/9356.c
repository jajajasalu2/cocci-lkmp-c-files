cocci_test_suite() {
	struct urb *cocci_id/* drivers/net/wireless/mediatek/mt7601u/mcu.c 70 */;
	const struct mt76_fw *cocci_id/* drivers/net/wireless/mediatek/mt7601u/mcu.c 477 */;
	const struct mt76_fw_header *cocci_id/* drivers/net/wireless/mediatek/mt7601u/mcu.c 407 */;
	const struct firmware *cocci_id/* drivers/net/wireless/mediatek/mt7601u/mcu.c 406 */;
	void *cocci_id/* drivers/net/wireless/mediatek/mt7601u/mcu.c 357 */;
	u8 cocci_id/* drivers/net/wireless/mediatek/mt7601u/mcu.c 35 */;
	enum mcu_cmd cocci_id/* drivers/net/wireless/mediatek/mt7601u/mcu.c 35 */;
	void cocci_id/* drivers/net/wireless/mediatek/mt7601u/mcu.c 34 */;
	struct mt7601u_dma_buf *cocci_id/* drivers/net/wireless/mediatek/mt7601u/mcu.c 334 */;
	__le32 cocci_id/* drivers/net/wireless/mediatek/mt7601u/mcu.c 287 */;
	struct mt7601u_dma_buf cocci_id/* drivers/net/wireless/mediatek/mt7601u/mcu.c 286 */;
	u32 cocci_id/* drivers/net/wireless/mediatek/mt7601u/mcu.c 283 */;
	const void *cocci_id/* drivers/net/wireless/mediatek/mt7601u/mcu.c 283 */;
	const struct mt7601u_dma_buf *cocci_id/* drivers/net/wireless/mediatek/mt7601u/mcu.c 282 */;
	struct mt7601u_dev *cocci_id/* drivers/net/wireless/mediatek/mt7601u/mcu.c 281 */;
	int cocci_id/* drivers/net/wireless/mediatek/mt7601u/mcu.c 281 */;
	struct mt76_fw {
		struct mt76_fw_header hdr;
		u8 ivb[MT_MCU_IVB_SIZE];
		u8 ilm[];
	} cocci_id/* drivers/net/wireless/mediatek/mt7601u/mcu.c 275 */;
	struct mt76_fw_header {
		__le32 ilm_len;
		__le32 dlm_len;
		__le16 build_ver;
		__le16 fw_ver;
		u8 pad[4];
		char build_time[16];
	} cocci_id/* drivers/net/wireless/mediatek/mt7601u/mcu.c 266 */;
	struct sk_buff *cocci_id/* drivers/net/wireless/mediatek/mt7601u/mcu.c 241 */;
	const int cocci_id/* drivers/net/wireless/mediatek/mt7601u/mcu.c 240 */;
	const u32 *cocci_id/* drivers/net/wireless/mediatek/mt7601u/mcu.c 238 */;
	const struct mt76_reg_pair *cocci_id/* drivers/net/wireless/mediatek/mt7601u/mcu.c 209 */;
	struct {
		__le32 id;
		__le32 value;
	}__packed __aligned(4) cocci_id/* drivers/net/wireless/mediatek/mt7601u/mcu.c 194 */;
	enum mcu_calibrate cocci_id/* drivers/net/wireless/mediatek/mt7601u/mcu.c 191 */;
	enum mcu_function cocci_id/* drivers/net/wireless/mediatek/mt7601u/mcu.c 154 */;
	unsigned cocci_id/* drivers/net/wireless/mediatek/mt7601u/mcu.c 114 */;
	struct usb_device *cocci_id/* drivers/net/wireless/mediatek/mt7601u/mcu.c 113 */;
	bool cocci_id/* drivers/net/wireless/mediatek/mt7601u/mcu.c 111 */;
}
