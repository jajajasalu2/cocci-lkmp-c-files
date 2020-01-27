cocci_test_suite() {
	const struct comedi_lrange cocci_id/* drivers/staging/comedi/drivers/vmk80xx.c 98 */;
	enum vmk80xx_model{VMK8055_MODEL, VMK8061_MODEL,} cocci_id/* drivers/staging/comedi/drivers/vmk80xx.c 93 */;
	struct usb_driver cocci_id/* drivers/staging/comedi/drivers/vmk80xx.c 867 */;
	const struct usb_device_id cocci_id/* drivers/staging/comedi/drivers/vmk80xx.c 850 */[];
	const struct usb_device_id *cocci_id/* drivers/staging/comedi/drivers/vmk80xx.c 845 */;
	struct comedi_driver cocci_id/* drivers/staging/comedi/drivers/vmk80xx.c 837 */;
	void cocci_id/* drivers/staging/comedi/drivers/vmk80xx.c 819 */;
	const struct vmk80xx_board *cocci_id/* drivers/staging/comedi/drivers/vmk80xx.c 784 */;
	struct usb_interface *cocci_id/* drivers/staging/comedi/drivers/vmk80xx.c 783 */;
	unsigned long cocci_id/* drivers/staging/comedi/drivers/vmk80xx.c 781 */;
	size_t cocci_id/* drivers/staging/comedi/drivers/vmk80xx.c 676 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/staging/comedi/drivers/vmk80xx.c 643 */;
	struct usb_host_interface *cocci_id/* drivers/staging/comedi/drivers/vmk80xx.c 642 */;
	unsigned char cocci_id/* drivers/staging/comedi/drivers/vmk80xx.c 626 */;
	unsigned int cocci_id/* drivers/staging/comedi/drivers/vmk80xx.c 484 */;
	enum{DEVICE_VMK8055, DEVICE_VMK8061,} cocci_id/* drivers/staging/comedi/drivers/vmk80xx.c 41 */;
	unsigned char *cocci_id/* drivers/staging/comedi/drivers/vmk80xx.c 357 */;
	int cocci_id/* drivers/staging/comedi/drivers/vmk80xx.c 240 */[2];
	struct vmk80xx_private *cocci_id/* drivers/staging/comedi/drivers/vmk80xx.c 238 */;
	unsigned int *cocci_id/* drivers/staging/comedi/drivers/vmk80xx.c 236 */;
	struct comedi_insn *cocci_id/* drivers/staging/comedi/drivers/vmk80xx.c 235 */;
	struct comedi_subdevice *cocci_id/* drivers/staging/comedi/drivers/vmk80xx.c 234 */;
	struct comedi_device *cocci_id/* drivers/staging/comedi/drivers/vmk80xx.c 233 */;
	int cocci_id/* drivers/staging/comedi/drivers/vmk80xx.c 233 */;
	__u8 cocci_id/* drivers/staging/comedi/drivers/vmk80xx.c 156 */;
	struct usb_device *cocci_id/* drivers/staging/comedi/drivers/vmk80xx.c 155 */;
	struct vmk80xx_private {
		struct usb_endpoint_descriptor *ep_rx;
		struct usb_endpoint_descriptor *ep_tx;
		struct semaphore limit_sem;
		unsigned char *usb_rx_buf;
		unsigned char *usb_tx_buf;
		enum vmk80xx_model model;
	} cocci_id/* drivers/staging/comedi/drivers/vmk80xx.c 143 */;
	const struct vmk80xx_board cocci_id/* drivers/staging/comedi/drivers/vmk80xx.c 118 */[];
	struct vmk80xx_board {
		const char *name;
		enum vmk80xx_model model;
		const struct comedi_lrange *range;
		int ai_nchans;
		unsigned int ai_maxdata;
		int ao_nchans;
		int di_nchans;
		unsigned int cnt_maxdata;
		int pwm_nchans;
		unsigned int pwm_maxdata;
	} cocci_id/* drivers/staging/comedi/drivers/vmk80xx.c 105 */;
}
