cocci_test_suite() {
	struct ktermios *cocci_id/* drivers/usb/serial/f81534.c 950 */;
	u8 cocci_id/* drivers/usb/serial/f81534.c 842 */;
	struct device *cocci_id/* drivers/usb/serial/f81534.c 839 */;
	struct f81534_serial_private *cocci_id/* drivers/usb/serial/f81534.c 838 */;
	struct usb_serial_endpoints *cocci_id/* drivers/usb/serial/f81534.c 836 */;
	struct usb_serial *cocci_id/* drivers/usb/serial/f81534.c 835 */;
	bool cocci_id/* drivers/usb/serial/f81534.c 760 */;
	u8 *cocci_id/* drivers/usb/serial/f81534.c 731 */;
	struct f81534_port_private *cocci_id/* drivers/usb/serial/f81534.c 662 */;
	struct usb_serial_port *cocci_id/* drivers/usb/serial/f81534.c 661 */;
	struct tty_struct *cocci_id/* drivers/usb/serial/f81534.c 659 */;
	int cocci_id/* drivers/usb/serial/f81534.c 659 */;
	void cocci_id/* drivers/usb/serial/f81534.c 659 */;
	u32 cocci_id/* drivers/usb/serial/f81534.c 570 */[];
	u32 cocci_id/* drivers/usb/serial/f81534.c 539 */;
	u8 cocci_id/* drivers/usb/serial/f81534.c 407 */[F81534_MAX_DATA_BLOCK];
	u16 cocci_id/* drivers/usb/serial/f81534.c 322 */;
	struct usb_device *cocci_id/* drivers/usb/serial/f81534.c 258 */;
	struct usb_interface *cocci_id/* drivers/usb/serial/f81534.c 257 */;
	const u8 cocci_id/* drivers/usb/serial/f81534.c 190 */[];
	const u32 cocci_id/* drivers/usb/serial/f81534.c 189 */[];
	const struct f81534_port_out_pin cocci_id/* drivers/usb/serial/f81534.c 182 */[];
	struct f81534_port_out_pin {
		struct f81534_pin_data pin[3];
	} cocci_id/* drivers/usb/serial/f81534.c 177 */;
	struct f81534_pin_data {
		const u16 reg_addr;
		const u8 reg_mask;
	} cocci_id/* drivers/usb/serial/f81534.c 172 */;
	struct usb_serial_driver *const cocci_id/* drivers/usb/serial/f81534.c 1584 */[];
	struct f81534_port_private {
		struct mutex mcr_mutex;
		struct mutex lcr_mutex;
		struct work_struct lsr_work;
		struct usb_serial_port *port;
		unsigned long tx_empty;
		spinlock_t msr_lock;
		u32 baud_base;
		u8 shadow_mcr;
		u8 shadow_lcr;
		u8 shadow_msr;
		u8 shadow_clk;
		u8 phy_num;
	} cocci_id/* drivers/usb/serial/f81534.c 157 */;
	struct usb_serial_driver cocci_id/* drivers/usb/serial/f81534.c 1557 */;
	struct f81534_serial_private {
		u8 conf_data[F81534_DEF_CONF_SIZE];
		int tty_idx[F81534_NUM_PORT];
		u8 setting_idx;
		int opened_port;
		struct mutex urb_mutex;
	} cocci_id/* drivers/usb/serial/f81534.c 149 */;
	const u8 *cocci_id/* drivers/usb/serial/f81534.c 1488 */;
	unsigned int cocci_id/* drivers/usb/serial/f81534.c 1471 */;
	const struct usb_device_id cocci_id/* drivers/usb/serial/f81534.c 141 */[];
	const struct f81534_port_out_pin *cocci_id/* drivers/usb/serial/f81534.c 1333 */;
	struct f81534_port_private cocci_id/* drivers/usb/serial/f81534.c 1320 */;
	struct work_struct *cocci_id/* drivers/usb/serial/f81534.c 1313 */;
	struct urb *cocci_id/* drivers/usb/serial/f81534.c 1252 */;
	char cocci_id/* drivers/usb/serial/f81534.c 1167 */;
	struct serial_struct *cocci_id/* drivers/usb/serial/f81534.c 1146 */;
	size_t cocci_id/* drivers/usb/serial/f81534.c 1125 */;
	unsigned long cocci_id/* drivers/usb/serial/f81534.c 1124 */;
	gfp_t cocci_id/* drivers/usb/serial/f81534.c 1009 */;
}
