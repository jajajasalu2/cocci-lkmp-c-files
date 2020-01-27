cocci_test_suite() {
	struct cp210x_flow_ctl cocci_id/* drivers/usb/serial/cp210x.c 914 */;
	struct device *cocci_id/* drivers/usb/serial/cp210x.c 912 */;
	tcflag_t *cocci_id/* drivers/usb/serial/cp210x.c 910 */;
	unsigned int *cocci_id/* drivers/usb/serial/cp210x.c 910 */;
	tcflag_t cocci_id/* drivers/usb/serial/cp210x.c 899 */;
	struct cp210x_comm_status *cocci_id/* drivers/usb/serial/cp210x.c 846 */;
	u32 *cocci_id/* drivers/usb/serial/cp210x.c 842 */;
	u16 *cocci_id/* drivers/usb/serial/cp210x.c 792 */;
	struct cp210x_port_private *cocci_id/* drivers/usb/serial/cp210x.c 763 */;
	__le16 cocci_id/* drivers/usb/serial/cp210x.c 596 */;
	__le32 cocci_id/* drivers/usb/serial/cp210x.c 573 */;
	const struct usb_device_id cocci_id/* drivers/usb/serial/cp210x.c 54 */[];
	void *cocci_id/* drivers/usb/serial/cp210x.c 526 */;
	void cocci_id/* drivers/usb/serial/cp210x.c 52 */(struct usb_serial_port *p,
							  int on);
	struct usb_host_interface *cocci_id/* drivers/usb/serial/cp210x.c 514 */;
	struct cp210x_gpio_write {
		u8 mask;
		u8 state;
	}__packed cocci_id/* drivers/usb/serial/cp210x.c 504 */;
	int cocci_id/* drivers/usb/serial/cp210x.c 50 */(struct usb_serial_port *);
	void cocci_id/* drivers/usb/serial/cp210x.c 48 */(struct usb_serial *);
	int cocci_id/* drivers/usb/serial/cp210x.c 47 */(struct usb_serial *);
	struct cp210x_single_port_config {
		__le16 gpio_mode;
		u8 __pad0[2];
		__le16 reset_state;
		u8 __pad1[4];
		__le16 suspend_state;
		u8 device_cfg;
	}__packed cocci_id/* drivers/usb/serial/cp210x.c 468 */;
	void cocci_id/* drivers/usb/serial/cp210x.c 46 */(struct tty_struct *,
							  int);
	struct cp210x_dual_port_config {
		__le16 gpio_mode;
		u8 __pad0[2];
		__le16 reset_state;
		u8 __pad1[4];
		__le16 suspend_state;
		u8 sci_cfg;
		u8 eci_cfg;
		u8 device_cfg;
	}__packed cocci_id/* drivers/usb/serial/cp210x.c 453 */;
	struct cp210x_pin_mode {
		u8 eci;
		u8 sci;
	}__packed cocci_id/* drivers/usb/serial/cp210x.c 441 */;
	int cocci_id/* drivers/usb/serial/cp210x.c 44 */(struct usb_serial_port *port,
							 unsigned int,
							 unsigned int);
	int cocci_id/* drivers/usb/serial/cp210x.c 43 */(struct tty_struct *,
							 unsigned int,
							 unsigned int);
	int cocci_id/* drivers/usb/serial/cp210x.c 42 */(struct tty_struct *);
	bool cocci_id/* drivers/usb/serial/cp210x.c 41 */(struct usb_serial_port *port);
	struct cp210x_flow_ctl {
		__le32 ulControlHandshake;
		__le32 ulFlowReplace;
		__le32 ulXonLimit;
		__le32 ulXoffLimit;
	}__packed cocci_id/* drivers/usb/serial/cp210x.c 405 */;
	struct cp210x_comm_status {
		__le32 ulErrors;
		__le32 ulHoldReasons;
		__le32 ulAmountInInQueue;
		__le32 ulAmountInOutQueue;
		u8 bEofReceived;
		u8 bWaitForImmediate;
		u8 bReserved;
	}__packed cocci_id/* drivers/usb/serial/cp210x.c 386 */;
	void cocci_id/* drivers/usb/serial/cp210x.c 37 */(struct tty_struct *,
							  struct usb_serial_port *,
							  struct ktermios *);
	void cocci_id/* drivers/usb/serial/cp210x.c 35 */(struct usb_serial_port *port,
							  tcflag_t *cflagp,
							  unsigned int *baudp);
	void cocci_id/* drivers/usb/serial/cp210x.c 34 */(struct tty_struct *,
							  struct usb_serial_port *);
	void cocci_id/* drivers/usb/serial/cp210x.c 33 */(struct usb_serial_port *);
	int cocci_id/* drivers/usb/serial/cp210x.c 32 */(struct tty_struct *tty,
							 struct usb_serial_port *);
	struct usb_serial_driver *const cocci_id/* drivers/usb/serial/cp210x.c 285 */[];
	struct usb_serial_driver cocci_id/* drivers/usb/serial/cp210x.c 261 */;
	struct cp210x_port_private {
		__u8 bInterfaceNumber;
		bool has_swapped_line_ctl;
	} cocci_id/* drivers/usb/serial/cp210x.c 256 */;
	struct cp210x_serial_private {
#ifdef CONFIG_GPIOLIB
		struct gpio_chip gc;
		bool gpio_registered;
		u8 gpio_pushpull;
		u8 gpio_altfunc;
		u8 gpio_input;
#endif
		u8 partnum;
		speed_t min_speed;
		speed_t max_speed;
		bool use_actual_rate;
	} cocci_id/* drivers/usb/serial/cp210x.c 242 */;
	bool cocci_id/* drivers/usb/serial/cp210x.c 1809 */;
	u8 *cocci_id/* drivers/usb/serial/cp210x.c 1620 */;
	u8 cocci_id/* drivers/usb/serial/cp210x.c 1617 */;
	const u16 cocci_id/* drivers/usb/serial/cp210x.c 1616 */;
	struct cp210x_serial_private *cocci_id/* drivers/usb/serial/cp210x.c 1615 */;
	struct usb_serial *cocci_id/* drivers/usb/serial/cp210x.c 1613 */;
	int cocci_id/* drivers/usb/serial/cp210x.c 1613 */;
	struct cp210x_single_port_config cocci_id/* drivers/usb/serial/cp210x.c 1566 */;
	struct cp210x_dual_port_config cocci_id/* drivers/usb/serial/cp210x.c 1504 */;
	struct cp210x_pin_mode cocci_id/* drivers/usb/serial/cp210x.c 1503 */;
	enum pin_config_param cocci_id/* drivers/usb/serial/cp210x.c 1479 */;
	unsigned long cocci_id/* drivers/usb/serial/cp210x.c 1475 */;
	struct gpio_chip *cocci_id/* drivers/usb/serial/cp210x.c 1432 */;
	struct cp210x_gpio_write cocci_id/* drivers/usb/serial/cp210x.c 1393 */;
	u16 cocci_id/* drivers/usb/serial/cp210x.c 1342 */;
	struct usb_serial_port *cocci_id/* drivers/usb/serial/cp210x.c 1341 */;
	struct tty_struct *cocci_id/* drivers/usb/serial/cp210x.c 1339 */;
	void cocci_id/* drivers/usb/serial/cp210x.c 1339 */;
	u32 cocci_id/* drivers/usb/serial/cp210x.c 1124 */;
	struct ktermios *cocci_id/* drivers/usb/serial/cp210x.c 1120 */;
	unsigned int cocci_id/* drivers/usb/serial/cp210x.c 1081 */;
	speed_t cocci_id/* drivers/usb/serial/cp210x.c 1079 */;
	const struct cp210x_rate cocci_id/* drivers/usb/serial/cp210x.c 1032 */[];
	struct cp210x_rate {
		speed_t rate;
		speed_t high;
	} cocci_id/* drivers/usb/serial/cp210x.c 1027 */;
}
