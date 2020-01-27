cocci_test_suite() {
	struct locale_mimo_info {
		s8 maxpwr20[BRCMS_MAXPWR_MIMO_TBL_SIZE];
		s8 maxpwr40[BRCMS_MAXPWR_MIMO_TBL_SIZE];
	} cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmsmac/channel.c 92 */;
	const struct ieee80211_regdomain cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmsmac/channel.c 75 */;
	struct brcms_chanvec cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmsmac/channel.c 743 */;
	struct ieee80211_supported_band *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmsmac/channel.c 741 */;
	const struct brcms_regd *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmsmac/channel.c 740 */;
	struct wiphy *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmsmac/channel.c 739 */;
	struct brcms_info *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmsmac/channel.c 697 */;
	struct ieee80211_hw *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmsmac/channel.c 696 */;
	struct regulatory_request *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmsmac/channel.c 694 */;
	const struct ieee80211_reg_rule *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmsmac/channel.c 663 */;
	enum nl80211_reg_initiator cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmsmac/channel.c 659 */;
	bool cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmsmac/channel.c 576 */;
	struct txpwr_limits cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmsmac/channel.c 415 */;
	const struct locale_mimo_info *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmsmac/channel.c 410 */;
	struct brcms_band *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmsmac/channel.c 408 */;
	const struct country_info *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmsmac/channel.c 407 */;
	uint cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmsmac/channel.c 403 */;
	struct ieee80211_channel *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmsmac/channel.c 402 */;
	u16 cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmsmac/channel.c 398 */;
	void cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmsmac/channel.c 367 */;
	struct brcms_cm_info cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmsmac/channel.c 334 */;
	int cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmsmac/channel.c 332 */;
	const char *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmsmac/channel.c 331 */;
	struct ssb_sprom *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmsmac/channel.c 330 */;
	struct brcms_pub *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmsmac/channel.c 329 */;
	struct brcms_cm_info *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmsmac/channel.c 326 */;
	struct brcms_c_info *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmsmac/channel.c 326 */;
	u8 cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmsmac/channel.c 231 */;
	struct txpwr_limits *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmsmac/channel.c 230 */;
	const struct brcms_regd cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmsmac/channel.c 144 */[];
	const struct locale_mimo_info cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmsmac/channel.c 135 */;
	const struct locale_mimo_info *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmsmac/channel.c 128 */[];
	struct brcms_cm_info {
		struct brcms_pub *pub;
		struct brcms_c_info *wlc;
		const struct brcms_regd *world_regd;
	} cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmsmac/channel.c 110 */;
	struct brcms_regd {
		struct country_info country;
		const struct ieee80211_regdomain *regdomain;
	} cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmsmac/channel.c 105 */;
	struct country_info {
		const u8 locale_mimo_2G;
		const u8 locale_mimo_5G;
	} cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmsmac/channel.c 100 */;
}
