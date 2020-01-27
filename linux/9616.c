cocci_test_suite() {
	char cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 702 */;
	size_t cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 700 */;
	const char *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 699 */;
	char cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 698 */[12];
	struct brcmf_fw_name *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 694 */;
	const struct brcmf_firmware_mapping cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 693 */[];
	u32 cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 692 */;
	struct brcmf_fw_request *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 691 */;
	void (*cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 660 */)(struct device *dev,
											      int err,
											      struct brcmf_fw_request *req);
	struct device *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 659 */;
	bool cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 644 */;
	char cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 607 */[BRCMF_FW_NAME_LEN];
	const struct firmware **cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 599 */;
	struct brcmf_fw_item *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 574 */;
	struct brcmf_fw *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 572 */;
	const struct firmware *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 571 */;
	int cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 571 */;
	struct nvram_parser {
		enum nvram_parser_state state;
		const u8 *data;
		u8 *nvram;
		u32 nvram_len;
		u32 line;
		u32 column;
		u32 pos;
		u32 entry;
		bool multi_dev_v1;
		bool multi_dev_v2;
		bool boardrev_found;
	} cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 48 */;
	struct efivar_entry *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 465 */;
	const u16 cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 464 */[];
	u8 *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 462 */;
	size_t *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 462 */;
	char *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 447 */;
	unsigned long cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 447 */;
	void cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 436 */(const struct firmware *fw,
											   void *ctx);
	struct brcmf_fw {
		struct device *dev;
		struct brcmf_fw_request *req;
		u32 curpos;
		void (*done)(struct device *dev, int err,
			     struct brcmf_fw_request *req);
	} cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 429 */;
	void *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 424 */;
	__le32 cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 382 */;
	struct nvram_parser cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 379 */;
	u16 cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 377 */;
	u32 *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 377 */;
	const u8 *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 376 */;
	struct nvram_parser *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 359 */;
	void cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 359 */;
	char cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 316 */[BRCMF_FW_NVRAM_PCIEDEV_LEN];
	enum nvram_parser_state{IDLE, KEY, VALUE, COMMENT, END,} cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 25 */;
	u8 cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 238 */;
	char cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 230 */[];
	enum nvram_parser_state (*cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 189 */[])(struct nvram_parser *nvp);
	enum nvram_parser_state cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/firmware.c 163 */;
}
