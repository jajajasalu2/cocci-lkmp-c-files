cocci_test_suite() {
	int cocci_id/* drivers/staging/wlan-ng/prism2mib.c 96 */(struct mibrec *mib,
								 int isget,
								 struct wlandevice *wlandev,
								 struct hfa384x *hw,
								 struct p80211msg_dot11req_mibset *msg,
								 void *data);
	struct mibrec {
		u32 did;
		u16 flag;
		u16 parm1;
		u16 parm2;
		u16 parm3;
		int (*func)(struct mibrec *mib, int isget,
			    struct wlandevice *wlandev, struct hfa384x *hw,
			    struct p80211msg_dot11req_mibset *msg, void *data);
	} cocci_id/* drivers/staging/wlan-ng/prism2mib.c 83 */;
	u8 cocci_id/* drivers/staging/wlan-ng/prism2mib.c 759 */;
	u8 *cocci_id/* drivers/staging/wlan-ng/prism2mib.c 757 */;
	struct p80211pstrd *cocci_id/* drivers/staging/wlan-ng/prism2mib.c 757 */;
	int cocci_id/* drivers/staging/wlan-ng/prism2mib.c 757 */;
	void cocci_id/* drivers/staging/wlan-ng/prism2mib.c 757 */;
	struct hfa384x_bytestr *cocci_id/* drivers/staging/wlan-ng/prism2mib.c 735 */;
	struct hfa384x_wpa_data cocci_id/* drivers/staging/wlan-ng/prism2mib.c 671 */;
	u32 cocci_id/* drivers/staging/wlan-ng/prism2mib.c 475 */;
	u16 *cocci_id/* drivers/staging/wlan-ng/prism2mib.c 474 */;
	u32 *cocci_id/* drivers/staging/wlan-ng/prism2mib.c 472 */;
	u8 cocci_id/* drivers/staging/wlan-ng/prism2mib.c 377 */[MIB_TMP_MAXLEN];
	struct p80211itemd *cocci_id/* drivers/staging/wlan-ng/prism2mib.c 263 */;
	struct p80211msg_dot11req_mibset *cocci_id/* drivers/staging/wlan-ng/prism2mib.c 262 */;
	u16 cocci_id/* drivers/staging/wlan-ng/prism2mib.c 260 */;
	struct mibrec *cocci_id/* drivers/staging/wlan-ng/prism2mib.c 258 */;
	struct hfa384x *cocci_id/* drivers/staging/wlan-ng/prism2mib.c 256 */;
	struct wlandevice *cocci_id/* drivers/staging/wlan-ng/prism2mib.c 254 */;
	void *cocci_id/* drivers/staging/wlan-ng/prism2mib.c 254 */;
	struct mibrec cocci_id/* drivers/staging/wlan-ng/prism2mib.c 143 */[];
}
