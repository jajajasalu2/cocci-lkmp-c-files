cocci_test_suite() {
	struct nla_policy cocci_id/* drivers/net/wireless/ti/wlcore/testmode.c 48 */[WL1271_TM_ATTR_MAX + 1];
	enum wl1271_tm_attrs{WL1271_TM_ATTR_UNSPEC, WL1271_TM_ATTR_CMD_ID, WL1271_TM_ATTR_ANSWER, WL1271_TM_ATTR_DATA, WL1271_TM_ATTR_IE_ID, WL1271_TM_ATTR_PLT_MODE, __WL1271_TM_ATTR_AFTER_LAST,} cocci_id/* drivers/net/wireless/ti/wlcore/testmode.c 36 */;
	u32 cocci_id/* drivers/net/wireless/ti/wlcore/testmode.c 358 */;
	struct nlattr *cocci_id/* drivers/net/wireless/ti/wlcore/testmode.c 357 */[WL1271_TM_ATTR_MAX + 1];
	struct wl1271 *cocci_id/* drivers/net/wireless/ti/wlcore/testmode.c 356 */;
	void *cocci_id/* drivers/net/wireless/ti/wlcore/testmode.c 354 */;
	struct ieee80211_vif *cocci_id/* drivers/net/wireless/ti/wlcore/testmode.c 353 */;
	struct ieee80211_hw *cocci_id/* drivers/net/wireless/ti/wlcore/testmode.c 353 */;
	int cocci_id/* drivers/net/wireless/ti/wlcore/testmode.c 353 */;
	u8 cocci_id/* drivers/net/wireless/ti/wlcore/testmode.c 310 */[ETH_ALEN];
	struct wl1271_command cocci_id/* drivers/net/wireless/ti/wlcore/testmode.c 224 */;
	enum wl1271_tm_commands{WL1271_TM_CMD_UNSPEC, WL1271_TM_CMD_TEST, WL1271_TM_CMD_INTERROGATE, WL1271_TM_CMD_CONFIGURE, WL1271_TM_CMD_NVS_PUSH, WL1271_TM_CMD_SET_PLT_MODE, WL1271_TM_CMD_RECOVER, WL1271_TM_CMD_GET_MAC, __WL1271_TM_CMD_AFTER_LAST,} cocci_id/* drivers/net/wireless/ti/wlcore/testmode.c 22 */;
	u8 cocci_id/* drivers/net/wireless/ti/wlcore/testmode.c 211 */;
	struct nlattr *cocci_id/* drivers/net/wireless/ti/wlcore/testmode.c 207 */[];
	struct acx_header cocci_id/* drivers/net/wireless/ti/wlcore/testmode.c 174 */;
	struct sk_buff *cocci_id/* drivers/net/wireless/ti/wlcore/testmode.c 144 */;
	struct wl1271_command *cocci_id/* drivers/net/wireless/ti/wlcore/testmode.c 143 */;
	s16 cocci_id/* drivers/net/wireless/ti/wlcore/testmode.c 103 */;
	struct wl1271_cmd_cal_p2g *cocci_id/* drivers/net/wireless/ti/wlcore/testmode.c 100 */;
}
