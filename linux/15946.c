cocci_test_suite() {
	struct uwb_rccb *cocci_id/* drivers/staging/uwb/beacon.c 62 */;
	const char *cocci_id/* drivers/staging/uwb/beacon.c 582 */;
	struct device_attribute *cocci_id/* drivers/staging/uwb/beacon.c 565 */;
	struct uwb_rc_evt_bpoie_change cocci_id/* drivers/staging/uwb/beacon.c 542 */;
	struct uwb_ie_bpo *cocci_id/* drivers/staging/uwb/beacon.c 531 */;
	struct uwb_rc_evt_bpoie_change *cocci_id/* drivers/staging/uwb/beacon.c 530 */;
	struct uwb_ie_bpo {
		struct uwb_ie_hdr hdr;
		u8 bp_length;
		u8 data[];
	}__attribute__((packed)) cocci_id/* drivers/staging/uwb/beacon.c 520 */;
	struct uwb_rc_evt_bp_slot_change cocci_id/* drivers/staging/uwb/beacon.c 502 */;
	struct uwb_rc_evt_bp_slot_change *cocci_id/* drivers/staging/uwb/beacon.c 496 */;
	struct uwb_rc_evt_beacon_size cocci_id/* drivers/staging/uwb/beacon.c 468 */;
	struct uwb_rc_evt_beacon_size *cocci_id/* drivers/staging/uwb/beacon.c 459 */;
	struct uwb_rc_evt_beacon cocci_id/* drivers/staging/uwb/beacon.c 388 */;
	struct uwb_event *cocci_id/* drivers/staging/uwb/beacon.c 347 */;
	struct uwb_beacon_frame cocci_id/* drivers/staging/uwb/beacon.c 333 */;
	struct uwb_rc_evt_confirm cocci_id/* drivers/staging/uwb/beacon.c 33 */;
	struct uwb_ie_hdr *cocci_id/* drivers/staging/uwb/beacon.c 326 */;
	int cocci_id/* drivers/staging/uwb/beacon.c 325 */;
	char *cocci_id/* drivers/staging/uwb/beacon.c 320 */;
	size_t cocci_id/* drivers/staging/uwb/beacon.c 320 */;
	struct uwb_rc_cmd_start_beacon *cocci_id/* drivers/staging/uwb/beacon.c 32 */;
	struct uwb_dev *cocci_id/* drivers/staging/uwb/beacon.c 319 */;
	ssize_t cocci_id/* drivers/staging/uwb/beacon.c 319 */;
	char cocci_id/* drivers/staging/uwb/beacon.c 303 */[UWB_ADDR_STRSIZE];
	u8 cocci_id/* drivers/staging/uwb/beacon.c 29 */;
	u16 cocci_id/* drivers/staging/uwb/beacon.c 29 */;
	unsigned long cocci_id/* drivers/staging/uwb/beacon.c 253 */;
	struct uwb_beacon_frame *cocci_id/* drivers/staging/uwb/beacon.c 252 */;
	struct uwb_rc_evt_beacon *cocci_id/* drivers/staging/uwb/beacon.c 251 */;
	struct uwb_rc *cocci_id/* drivers/staging/uwb/beacon.c 250 */;
	struct uwb_beca_e *cocci_id/* drivers/staging/uwb/beacon.c 250 */;
	struct uwb_rc_cmd_start_beacon {
		struct uwb_rccb rccb;
		__le16 wBPSTOffset;
		u8 bChannelNumber;
	}__attribute__((packed)) cocci_id/* drivers/staging/uwb/beacon.c 22 */;
	struct uwb_mac_addr cocci_id/* drivers/staging/uwb/beacon.c 182 */;
	const struct uwb_mac_addr *cocci_id/* drivers/staging/uwb/beacon.c 177 */;
	const struct uwb_dev_addr *cocci_id/* drivers/staging/uwb/beacon.c 162 */;
	struct uwb_beca_e cocci_id/* drivers/staging/uwb/beacon.c 152 */;
	struct kref *cocci_id/* drivers/staging/uwb/beacon.c 150 */;
	void cocci_id/* drivers/staging/uwb/beacon.c 150 */;
	struct device *cocci_id/* drivers/staging/uwb/beacon.c 104 */;
	unsigned cocci_id/* drivers/staging/uwb/beacon.c 101 */;
}
