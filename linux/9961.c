cocci_test_suite() {
	struct timer_list *cocci_id/* drivers/net/wireless/st/cw1200/pm.c 91 */;
	struct cw1200_suspend_state {
		unsigned long bss_loss_tmo;
		unsigned long join_tmo;
		unsigned long direct_probe;
		unsigned long link_id_gc;
		bool beacon_skipping;
		u8 prev_ps_mode;
	} cocci_id/* drivers/net/wireless/st/cw1200/pm.c 82 */;
	struct wsm_ether_type_filter_hdr cocci_id/* drivers/net/wireless/st/cw1200/pm.c 77 */;
	struct cw1200_ether_type_filter cocci_id/* drivers/net/wireless/st/cw1200/pm.c 55 */;
	struct wsm_udp_port_filter_hdr cocci_id/* drivers/net/wireless/st/cw1200/pm.c 47 */;
	struct cw1200_udp_port_filter cocci_id/* drivers/net/wireless/st/cw1200/pm.c 31 */;
	struct cw1200_suspend_state *cocci_id/* drivers/net/wireless/st/cw1200/pm.c 306 */;
	struct ieee80211_hw *cocci_id/* drivers/net/wireless/st/cw1200/pm.c 302 */;
	struct cw1200_ether_type_filter {
		struct wsm_ether_type_filter_hdr hdr;
		struct wsm_ether_type_filter filters[WSM_MAX_FILTER_ELEMENTS];
	}__packed cocci_id/* drivers/net/wireless/st/cw1200/pm.c 25 */;
	struct cw1200_suspend_state cocci_id/* drivers/net/wireless/st/cw1200/pm.c 210 */;
	struct cw1200_udp_port_filter {
		struct wsm_udp_port_filter_hdr hdr;
		struct wsm_udp_port_filter filters[WSM_MAX_FILTER_ELEMENTS];
	}__packed cocci_id/* drivers/net/wireless/st/cw1200/pm.c 19 */;
	struct cfg80211_wowlan *cocci_id/* drivers/net/wireless/st/cw1200/pm.c 157 */;
	struct cw1200_common *cocci_id/* drivers/net/wireless/st/cw1200/pm.c 147 */;
	int cocci_id/* drivers/net/wireless/st/cw1200/pm.c 147 */;
	struct delayed_work *cocci_id/* drivers/net/wireless/st/cw1200/pm.c 138 */;
	long cocci_id/* drivers/net/wireless/st/cw1200/pm.c 114 */;
	unsigned long cocci_id/* drivers/net/wireless/st/cw1200/pm.c 112 */;
	struct cw1200_pm_state *cocci_id/* drivers/net/wireless/st/cw1200/pm.c 106 */;
	void cocci_id/* drivers/net/wireless/st/cw1200/pm.c 106 */;
}
