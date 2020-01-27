cocci_test_suite() {
	struct brcmf_bcdc {
		u16 reqid;
		u8 bus_header[BUS_HEADER_LEN];
		struct brcmf_proto_bcdc_dcmd msg;
		unsigned char buf[BRCMF_DCMD_MAXLEN];
		struct brcmf_fws_info *fws;
	} cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/bcdc.c 90 */;
	struct brcmf_proto_bcdc_header {
		u8 flags;
		u8 priority;
		u8 flags2;
		u8 data_offset;
	} cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/bcdc.c 71 */;
	struct brcmf_proto_bcdc_dcmd cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/bcdc.c 474 */;
	unsigned long cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/bcdc.c 451 */;
	struct brcmf_bcdc *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/bcdc.c 444 */;
	struct brcmf_fws_info *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/bcdc.c 427 */;
	struct brcmf_if *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/bcdc.c 406 */;
	void cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/bcdc.c 405 */;
	u8 cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/bcdc.c 395 */[ETH_ALEN];
	struct brcmf_pub *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/bcdc.c 394 */;
	int cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/bcdc.c 394 */;
	enum proto_addr_mode cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/bcdc.c 383 */;
	struct brcmf_bus *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/bcdc.c 365 */;
	struct device *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/bcdc.c 362 */;
	struct brcmf_proto_bcdc_header *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/bcdc.c 282 */;
	struct sk_buff *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/bcdc.c 280 */;
	struct brcmf_if **cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/bcdc.c 280 */;
	bool cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/bcdc.c 279 */;
	u8 cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/bcdc.c 255 */;
	struct brcmf_proto_bcdc_dcmd {
		__le32 cmd;
		__le32 len;
		__le32 flags;
		__le32 status;
	} cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/bcdc.c 25 */;
	int *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/bcdc.c 157 */;
	unsigned char *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/bcdc.c 146 */;
	u32 cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/bcdc.c 138 */;
	struct brcmf_proto_bcdc_dcmd *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/bcdc.c 111 */;
	uint cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/bcdc.c 107 */;
	void *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/bcdc.c 107 */;
}
