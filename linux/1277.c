cocci_test_suite() {
	enum pkt_state{PKT_STATE_SETUP, PKT_STATE_TRANSFER, PKT_STATE_TERMINATE,} cocci_id/* drivers/usb/host/max3421-hcd.c 98 */;
	enum max3421_rh_state{MAX3421_RH_RESET, MAX3421_RH_SUSPENDED, MAX3421_RH_RUNNING,} cocci_id/* drivers/usb/host/max3421-hcd.c 92 */;
	size_t cocci_id/* drivers/usb/host/max3421-hcd.c 853 */;
	struct spi_device *cocci_id/* drivers/usb/host/max3421-hcd.c 802 */;
	struct urb cocci_id/* drivers/usb/host/max3421-hcd.c 704 */;
	struct max3421_ep cocci_id/* drivers/usb/host/max3421-hcd.c 682 */;
	struct list_head *cocci_id/* drivers/usb/host/max3421-hcd.c 672 */;
	u8 *cocci_id/* drivers/usb/host/max3421-hcd.c 572 */;
	struct usb_device *cocci_id/* drivers/usb/host/max3421-hcd.c 495 */;
	struct spi_transfer cocci_id/* drivers/usb/host/max3421-hcd.c 407 */[2];
	struct spi_message cocci_id/* drivers/usb/host/max3421-hcd.c 358 */;
	struct spi_transfer cocci_id/* drivers/usb/host/max3421-hcd.c 357 */;
	struct usb_hcd cocci_id/* drivers/usb/host/max3421-hcd.c 349 */;
	unsigned cocci_id/* drivers/usb/host/max3421-hcd.c 337 */;
	u16 cocci_id/* drivers/usb/host/max3421-hcd.c 335 */;
	s16 cocci_id/* drivers/usb/host/max3421-hcd.c 334 */;
	const int cocci_id/* drivers/usb/host/max3421-hcd.c 300 */[];
	enum{MAX3421_HRSL_OK=0, MAX3421_HRSL_BUSY, MAX3421_HRSL_BADREQ, MAX3421_HRSL_UNDEF, MAX3421_HRSL_NAK, MAX3421_HRSL_STALL, MAX3421_HRSL_TOGERR, MAX3421_HRSL_WRONGPID, MAX3421_HRSL_BADBC, MAX3421_HRSL_PIDERR, MAX3421_HRSL_PKTERR, MAX3421_HRSL_CRCERR, MAX3421_HRSL_KERR, MAX3421_HRSL_JERR, MAX3421_HRSL_TIMEOUT, MAX3421_HRSL_BABBLE, MAX3421_HRSL_RESULT_MASK=0xf, MAX3421_HRSL_RCVTOGRD_BIT=4, MAX3421_HRSL_SNDTOGRD_BIT, MAX3421_HRSL_KSTATUS_BIT, MAX3421_HRSL_JSTATUS_BIT,} cocci_id/* drivers/usb/host/max3421-hcd.c 275 */;
	enum{MAX3421_MODE_HOST_BIT=0, MAX3421_MODE_LOWSPEED_BIT, MAX3421_MODE_HUBPRE_BIT, MAX3421_MODE_SOFKAENAB_BIT, MAX3421_MODE_SEPIRQ_BIT, MAX3421_MODE_DELAYISO_BIT, MAX3421_MODE_DMPULLDN_BIT, MAX3421_MODE_DPPULLDN_BIT,} cocci_id/* drivers/usb/host/max3421-hcd.c 264 */;
	enum{MAX3421_HCTL_BUSRST_BIT=0, MAX3421_HCTL_FRMRST_BIT, MAX3421_HCTL_SAMPLEBUS_BIT, MAX3421_HCTL_SIGRSM_BIT, MAX3421_HCTL_RCVTOG0_BIT, MAX3421_HCTL_RCVTOG1_BIT, MAX3421_HCTL_SNDTOG0_BIT, MAX3421_HCTL_SNDTOG1_BIT,} cocci_id/* drivers/usb/host/max3421-hcd.c 253 */;
	enum{MAX3421_HI_BUSEVENT_BIT=0, MAX3421_HI_RWU_BIT, MAX3421_HI_RCVDAV_BIT, MAX3421_HI_SNDBAV_BIT, MAX3421_HI_SUSDN_BIT, MAX3421_HI_CONDET_BIT, MAX3421_HI_FRAME_BIT, MAX3421_HI_HXFRDN_BIT,} cocci_id/* drivers/usb/host/max3421-hcd.c 242 */;
	enum{MAX3421_PINCTL_GPXA_BIT=0, MAX3421_PINCTL_GPXB_BIT, MAX3421_PINCTL_POSINT_BIT, MAX3421_PINCTL_INTLEVEL_BIT, MAX3421_PINCTL_FDUPSPI_BIT, MAX3421_PINCTL_EP0INAK_BIT, MAX3421_PINCTL_EP2INAK_BIT, MAX3421_PINCTL_EP3INAK_BIT,} cocci_id/* drivers/usb/host/max3421-hcd.c 231 */;
	enum{MAX3421_USBCTL_PWRDOWN_BIT=4, MAX3421_USBCTL_CHIPRES_BIT,} cocci_id/* drivers/usb/host/max3421-hcd.c 226 */;
	enum{MAX3421_CPUCTL_IE_BIT=0, MAX3421_CPUCTL_PULSEWID0_BIT=6, MAX3421_CPUCTL_PULSEWID1_BIT,} cocci_id/* drivers/usb/host/max3421-hcd.c 220 */;
	enum{MAX3421_USBIRQ_OSCOKIRQ_BIT=0, MAX3421_USBIRQ_NOVBUSIRQ_BIT=5, MAX3421_USBIRQ_VBUSIRQ_BIT,} cocci_id/* drivers/usb/host/max3421-hcd.c 214 */;
	struct spi_driver cocci_id/* drivers/usb/host/max3421-hcd.c 1989 */;
	const struct of_device_id cocci_id/* drivers/usb/host/max3421-hcd.c 1983 */[];
	uint32_t cocci_id/* drivers/usb/host/max3421-hcd.c 1825 */[2];
	struct device *cocci_id/* drivers/usb/host/max3421-hcd.c 1822 */;
	struct max3421_hcd cocci_id/* drivers/usb/host/max3421-hcd.c 1806 */;
	const struct hc_driver cocci_id/* drivers/usb/host/max3421-hcd.c 1803 */;
	__le16 *cocci_id/* drivers/usb/host/max3421-hcd.c 1742 */;
	__le32 *cocci_id/* drivers/usb/host/max3421-hcd.c 1734 */;
	struct max3421_hcd_platform_data *cocci_id/* drivers/usb/host/max3421-hcd.c 1699 */;
	char *cocci_id/* drivers/usb/host/max3421-hcd.c 1695 */;
	struct max3421_ep {
		struct usb_host_endpoint *ep;
		struct list_head ep_list;
		u32 naks;
		u16 last_active;
		enum pkt_state pkt_state;
		u8 retries;
		u8 retransmit;
	} cocci_id/* drivers/usb/host/max3421-hcd.c 169 */;
	struct usb_hub_descriptor *cocci_id/* drivers/usb/host/max3421-hcd.c 1654 */;
	gfp_t cocci_id/* drivers/usb/host/max3421-hcd.c 1523 */;
	char cocci_id/* drivers/usb/host/max3421-hcd.c 1290 */[16 * 16];
	struct max3421_hcd {
		spinlock_t lock;
		struct task_struct *spi_thread;
		struct max3421_hcd *next;
		enum max3421_rh_state rh_state;
		u32 port_status;
		unsigned active:1;
		struct list_head ep_list;
		u8 rev;
		u16 frame_number;
		struct max3421_dma_buf *tx;
		struct max3421_dma_buf *rx;
		struct urb *curr_urb;
		enum scheduling_pass sched_pass;
		struct usb_device *loaded_dev;
		int loaded_epnum;
		int urb_done;
		size_t curr_len;
		u8 hien;
		u8 mode;
		u8 iopins[2];
		unsigned long todo;
#ifdef DEBUG
		unsigned long err_stat[16];
#endif
	} cocci_id/* drivers/usb/host/max3421-hcd.c 123 */;
	int cocci_id/* drivers/usb/host/max3421-hcd.c 1191 */;
	struct urb *cocci_id/* drivers/usb/host/max3421-hcd.c 1190 */;
	struct max3421_dma_buf {
		u8 data[2];
	} cocci_id/* drivers/usb/host/max3421-hcd.c 119 */;
	unsigned long cocci_id/* drivers/usb/host/max3421-hcd.c 1189 */;
	char cocci_id/* drivers/usb/host/max3421-hcd.c 1188 */[512];
	struct usb_host_endpoint *cocci_id/* drivers/usb/host/max3421-hcd.c 1187 */;
	struct max3421_ep *cocci_id/* drivers/usb/host/max3421-hcd.c 1186 */;
	struct max3421_hcd *cocci_id/* drivers/usb/host/max3421-hcd.c 1185 */;
	struct usb_hcd *cocci_id/* drivers/usb/host/max3421-hcd.c 1183 */;
	void cocci_id/* drivers/usb/host/max3421-hcd.c 1182 */;
	void *cocci_id/* drivers/usb/host/max3421-hcd.c 1166 */;
	irqreturn_t cocci_id/* drivers/usb/host/max3421-hcd.c 1165 */;
	u8 cocci_id/* drivers/usb/host/max3421-hcd.c 1115 */;
	u32 cocci_id/* drivers/usb/host/max3421-hcd.c 1113 */;
	unsigned int cocci_id/* drivers/usb/host/max3421-hcd.c 1112 */;
	enum{ENABLE_IRQ=0, RESET_HCD, RESET_PORT, CHECK_UNLINK, IOPIN_UPDATE,} cocci_id/* drivers/usb/host/max3421-hcd.c 111 */;
	enum scheduling_pass{SCHED_PASS_PERIODIC, SCHED_PASS_NON_PERIODIC, SCHED_PASS_DONE,} cocci_id/* drivers/usb/host/max3421-hcd.c 104 */;
}
