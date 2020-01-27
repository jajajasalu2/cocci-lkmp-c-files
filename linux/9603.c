cocci_test_suite() {
	void *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/fweh.c 98 */;
	struct brcmf_event_msg *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/fweh.c 97 */;
	enum brcmf_fweh_event_code cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/fweh.c 96 */;
	const char *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/fweh.c 61 */;
	struct brcmf_fweh_event_name cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/fweh.c 51 */[];
	struct brcmf_fweh_event_name {
		enum brcmf_fweh_event_code code;
		const char *name;
	} cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/fweh.c 41 */;
	gfp_t cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/fweh.c 395 */;
	struct brcmf_event *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/fweh.c 389 */;
	s8 cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/fweh.c 356 */[BRCMF_EVENTING_MASK_LEN];
	struct brcmf_pub *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/fweh.c 354 */;
	struct brcmf_if *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/fweh.c 352 */;
	int cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/fweh.c 352 */;
	brcmf_fweh_handler_t cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/fweh.c 321 */;
	struct brcmf_fweh_info *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/fweh.c 292 */;
	void cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/fweh.c 290 */;
	struct brcmf_fweh_queue_item {
		struct list_head q;
		enum brcmf_fweh_event_code code;
		u8 ifidx;
		u8 ifaddr[ETH_ALEN];
		struct brcmf_event_msg_be emsg;
		u32 datalen;
		u8 data[0];
	} cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/fweh.c 28 */;
	u32 cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/fweh.c 249 */;
	struct brcmf_pub cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/fweh.c 224 */;
	struct brcmf_fweh_info cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/fweh.c 223 */;
	struct brcmf_event_msg cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/fweh.c 221 */;
	struct brcmf_event_msg_be *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/fweh.c 220 */;
	struct work_struct *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/fweh.c 213 */;
	struct brcmf_fweh_queue_item cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/fweh.c 200 */;
	ulong cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/fweh.c 195 */;
	struct brcmf_fweh_queue_item *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/fweh.c 191 */;
	bool cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/fweh.c 130 */;
	struct brcmf_if_event *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/fweh.c 128 */;
}
