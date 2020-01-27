cocci_test_suite() {
	struct rts51x_status cocci_id/* drivers/usb/storage/realtek_cr.c 989 */;
	struct rts51x_chip cocci_id/* drivers/usb/storage/realtek_cr.c 978 */;
	pm_message_t cocci_id/* drivers/usb/storage/realtek_cr.c 945 */;
	void *cocci_id/* drivers/usb/storage/realtek_cr.c 928 */;
	struct rts51x_chip {
		u16 vendor_id;
		u16 product_id;
		char max_lun;
		struct rts51x_status *status;
		int status_len;
		u32 flag;
		struct us_data *us;
#ifdef CONFIG_REALTEK_AUTOPM
		struct timer_list rts51x_suspend_timer;
		unsigned long timer_expires;
		int pwr_state;
		u8 lun_ready;
		enum RTS51X_STAT state;
		int support_auto_delink;
#endif
		proto_cmnd proto_handler_backup;
	} cocci_id/* drivers/usb/storage/realtek_cr.c 91 */;
	u8 cocci_id/* drivers/usb/storage/realtek_cr.c 878 */[16];
	struct rts51x_status *cocci_id/* drivers/usb/storage/realtek_cr.c 877 */;
	u8 cocci_id/* drivers/usb/storage/realtek_cr.c 800 */[];
	struct scsi_cmnd *cocci_id/* drivers/usb/storage/realtek_cr.c 796 */;
	struct timer_list *cocci_id/* drivers/usb/storage/realtek_cr.c 755 */;
	struct rts51x_status {
		u16 vid;
		u16 pid;
		u8 cur_lun;
		u8 card_type;
		u8 total_lun;
		u16 fw_ver;
		u8 phy_exist;
		u8 multi_flag;
		u8 multi_card;
		u8 log_exist;
		union {
			u8 detailed_type1;
			u8 detailed_type2;
		} detailed_type;
		u8 function[2];
	} cocci_id/* drivers/usb/storage/realtek_cr.c 73 */;
	u8 cocci_id/* drivers/usb/storage/realtek_cr.c 722 */[13];
	enum RTS51X_STAT cocci_id/* drivers/usb/storage/realtek_cr.c 64 */;
	void cocci_id/* drivers/usb/storage/realtek_cr.c 588 */;
	struct rts51x_chip *cocci_id/* drivers/usb/storage/realtek_cr.c 560 */;
	enum RTS51X_STAT{RTS51X_STAT_INIT, RTS51X_STAT_IDLE, RTS51X_STAT_RUN, RTS51X_STAT_SS,} cocci_id/* drivers/usb/storage/realtek_cr.c 54 */;
	u8 cocci_id/* drivers/usb/storage/realtek_cr.c 518 */;
	u8 cocci_id/* drivers/usb/storage/realtek_cr.c 505 */[12];
	u16 cocci_id/* drivers/usb/storage/realtek_cr.c 502 */;
	u8 *cocci_id/* drivers/usb/storage/realtek_cr.c 502 */;
	struct us_data *cocci_id/* drivers/usb/storage/realtek_cr.c 502 */;
	int cocci_id/* drivers/usb/storage/realtek_cr.c 502 */;
	unsigned int cocci_id/* drivers/usb/storage/realtek_cr.c 208 */;
	struct bulk_cs_wrap *cocci_id/* drivers/usb/storage/realtek_cr.c 206 */;
	struct bulk_cb_wrap *cocci_id/* drivers/usb/storage/realtek_cr.c 205 */;
	enum dma_data_direction cocci_id/* drivers/usb/storage/realtek_cr.c 203 */;
	int *cocci_id/* drivers/usb/storage/realtek_cr.c 203 */;
	int cocci_id/* drivers/usb/storage/realtek_cr.c 158 */(struct us_data *us);
	struct usb_driver cocci_id/* drivers/usb/storage/realtek_cr.c 1053 */;
	const struct usb_device_id *cocci_id/* drivers/usb/storage/realtek_cr.c 1034 */;
	struct usb_interface *cocci_id/* drivers/usb/storage/realtek_cr.c 1033 */;
	struct scsi_host_template cocci_id/* drivers/usb/storage/realtek_cr.c 1031 */;
}
