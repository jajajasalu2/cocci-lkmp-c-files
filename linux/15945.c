cocci_test_suite() {
	struct uwb_rc_evt_confirm cocci_id/* drivers/staging/uwb/est.c 98 */;
	struct uwb_rc_evt_channel_change_ie_rcv cocci_id/* drivers/staging/uwb/est.c 94 */;
	struct uwb_rc_evt_cmd_frame_rcv cocci_id/* drivers/staging/uwb/est.c 90 */;
	struct uwb_rc_evt_bp_switch_status cocci_id/* drivers/staging/uwb/est.c 87 */;
	struct uwb_rc_evt_drp cocci_id/* drivers/staging/uwb/est.c 83 */;
	struct uwb_rc_evt_drp_avail cocci_id/* drivers/staging/uwb/est.c 80 */;
	struct uwb_rc_evt_dev_addr_conflict cocci_id/* drivers/staging/uwb/est.c 77 */;
	struct uwb_rc_evt_bp_switch_ie_rcv cocci_id/* drivers/staging/uwb/est.c 73 */;
	struct uwb_rc_evt_bp_slot_change cocci_id/* drivers/staging/uwb/est.c 70 */;
	struct uwb_rc_evt_bpoie_change cocci_id/* drivers/staging/uwb/est.c 65 */;
	struct uwb_rc_evt_beacon_size cocci_id/* drivers/staging/uwb/est.c 62 */;
	struct uwb_rc_evt_beacon cocci_id/* drivers/staging/uwb/est.c 58 */;
	struct uwb_rc_evt_ie_rcv cocci_id/* drivers/staging/uwb/est.c 54 */;
	struct uwb_est_entry cocci_id/* drivers/staging/uwb/est.c 52 */[];
	u16 cocci_id/* drivers/staging/uwb/est.c 422 */;
	unsigned cocci_id/* drivers/staging/uwb/est.c 421 */;
	unsigned long cocci_id/* drivers/staging/uwb/est.c 420 */;
	struct device *cocci_id/* drivers/staging/uwb/est.c 419 */;
	size_t cocci_id/* drivers/staging/uwb/est.c 415 */;
	const struct uwb_rceb *cocci_id/* drivers/staging/uwb/est.c 414 */;
	struct uwb_rc *cocci_id/* drivers/staging/uwb/est.c 414 */;
	ssize_t cocci_id/* drivers/staging/uwb/est.c 414 */;
	struct uwb_est *cocci_id/* drivers/staging/uwb/est.c 41 */;
	u8 *cocci_id/* drivers/staging/uwb/est.c 387 */;
	__le16 *cocci_id/* drivers/staging/uwb/est.c 386 */;
	__le16 cocci_id/* drivers/staging/uwb/est.c 372 */;
	const void *cocci_id/* drivers/staging/uwb/est.c 367 */;
	const struct uwb_est_entry *cocci_id/* drivers/staging/uwb/est.c 345 */;
	struct uwb_est {
		u16 type_event_high;
		u16 vendor,product;
		u8 entries;
		const struct uwb_est_entry *entry;
	} cocci_id/* drivers/staging/uwb/est.c 34 */;
	u8 cocci_id/* drivers/staging/uwb/est.c 339 */;
	struct uwb_est cocci_id/* drivers/staging/uwb/est.c 296 */;
	void *cocci_id/* drivers/staging/uwb/est.c 206 */;
	int cocci_id/* drivers/staging/uwb/est.c 167 */;
	void cocci_id/* drivers/staging/uwb/est.c 167 */;
	struct uwb_rc_evt_set_notification_filter_ex cocci_id/* drivers/staging/uwb/est.c 156 */;
	struct uwb_rc_evt_set_daa_energy_mask cocci_id/* drivers/staging/uwb/est.c 153 */;
	struct uwb_rc_evt_daa_energy_detected cocci_id/* drivers/staging/uwb/est.c 150 */;
	struct uwb_rc_evt_set_ie cocci_id/* drivers/staging/uwb/est.c 119 */;
	struct uwb_rc_evt_set_drp_ie cocci_id/* drivers/staging/uwb/est.c 116 */;
	struct uwb_rc_evt_get_ie cocci_id/* drivers/staging/uwb/est.c 103 */;
	struct uwb_rc_evt_dev_addr_mgmt cocci_id/* drivers/staging/uwb/est.c 101 */;
}
