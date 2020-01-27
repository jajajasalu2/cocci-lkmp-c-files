cocci_test_suite() {
	struct brcmf_btcoex_info {
		struct brcmf_cfg80211_vif *vif;
		struct timer_list timer;
		u16 timeout;
		bool timer_on;
		bool dhcp_done;
		enum brcmf_btcoex_state bt_state;
		struct work_struct work;
		struct brcmf_cfg80211_info *cfg;
		u32 reg66;
		u32 reg41;
		u32 reg68;
		bool saved_regs_part1;
		u32 reg50;
		u32 reg51;
		u32 reg64;
		u32 reg65;
		u32 reg71;
		bool saved_regs_part2;
	} cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/btcoex.c 75 */;
	enum brcmf_btcoex_state{BRCMF_BT_DHCP_IDLE, BRCMF_BT_DHCP_START, BRCMF_BT_DHCP_OPPR_WIN, BRCMF_BT_DHCP_FLAG_FORCE_TIMEOUT,} cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/btcoex.c 46 */;
	u16 cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/btcoex.c 452 */;
	enum brcmf_btcoex_mode cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/btcoex.c 452 */;
	struct brcmf_cfg80211_vif *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/btcoex.c 451 */;
	struct brcmf_btcoex_info cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/btcoex.c 363 */;
	struct brcmf_btcoex_info *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/btcoex.c 360 */;
	struct brcmf_cfg80211_info *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/btcoex.c 358 */;
	int cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/btcoex.c 358 */;
	struct work_struct *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/btcoex.c 285 */;
	struct timer_list *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/btcoex.c 272 */;
	u32 cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/btcoex.c 200 */;
	struct brcmf_if *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/btcoex.c 141 */;
	bool cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/btcoex.c 139 */;
	void cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/btcoex.c 138 */;
	s32 cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/btcoex.c 121 */;
	u32 *cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/btcoex.c 121 */;
	struct {
		__le32 addr;
		__le32 data;
	} cocci_id/* drivers/net/wireless/broadcom/brcm80211/brcmfmac/btcoex.c 104 */;
}
