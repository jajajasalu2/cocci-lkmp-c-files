cocci_test_suite() {
	struct ds_device cocci_id/* drivers/w1/masters/ds2490.c 981 */;
	struct usb_host_interface *cocci_id/* drivers/w1/masters/ds2490.c 977 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/w1/masters/ds2490.c 976 */;
	struct usb_device *cocci_id/* drivers/w1/masters/ds2490.c 975 */;
	const struct usb_device_id *cocci_id/* drivers/w1/masters/ds2490.c 973 */;
	struct w1_bus_master cocci_id/* drivers/w1/masters/ds2490.c 931 */;
	struct ds_device *cocci_id/* drivers/w1/masters/ds2490.c 887 */;
	u8 cocci_id/* drivers/w1/masters/ds2490.c 885 */;
	u8 *cocci_id/* drivers/w1/masters/ds2490.c 885 */;
	void *cocci_id/* drivers/w1/masters/ds2490.c 885 */;
	int cocci_id/* drivers/w1/masters/ds2490.c 885 */;
	const u8 *cocci_id/* drivers/w1/masters/ds2490.c 868 */;
	u64 *cocci_id/* drivers/w1/masters/ds2490.c 691 */;
	const size_t cocci_id/* drivers/w1/masters/ds2490.c 690 */;
	const unsigned long cocci_id/* drivers/w1/masters/ds2490.c 686 */;
	struct ds_status cocci_id/* drivers/w1/masters/ds2490.c 678 */;
	u16 cocci_id/* drivers/w1/masters/ds2490.c 677 */;
	w1_slave_found_callback cocci_id/* drivers/w1/masters/ds2490.c 665 */;
	struct w1_master *cocci_id/* drivers/w1/masters/ds2490.c 664 */;
	void cocci_id/* drivers/w1/masters/ds2490.c 664 */;
	bool cocci_id/* drivers/w1/masters/ds2490.c 272 */;
	struct ds_status *cocci_id/* drivers/w1/masters/ds2490.c 271 */;
	unsigned char *cocci_id/* drivers/w1/masters/ds2490.c 218 */;
	struct ds_status {
		u8 enable;
		u8 speed;
		u8 pullup_dur;
		u8 ppuls_dur;
		u8 pulldown_slew;
		u8 write1_time;
		u8 write0_time;
		u8 reserved0;
		u8 status;
		u8 command0;
		u8 command1;
		u8 command_buffer_status;
		u8 data_out_buffer_status;
		u8 data_in_buffer_status;
		u8 reserved1;
		u8 reserved2;
	} cocci_id/* drivers/w1/masters/ds2490.c 146 */;
	struct ds_device {
		struct list_head ds_entry;
		struct usb_device *udev;
		struct usb_interface *intf;
		int ep[NUM_EP];
		int spu_sleep;
		u16 spu_bit;
		u8 st_buf[ST_SIZE];
		u8 byte_buf;
		struct w1_bus_master master;
	} cocci_id/* drivers/w1/masters/ds2490.c 123 */;
	struct usb_driver cocci_id/* drivers/w1/masters/ds2490.c 1081 */;
	const struct usb_device_id cocci_id/* drivers/w1/masters/ds2490.c 1075 */[];
	struct usb_interface *cocci_id/* drivers/w1/masters/ds2490.c 1055 */;
}
