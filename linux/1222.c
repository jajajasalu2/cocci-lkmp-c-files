cocci_test_suite() {
	dma_addr_t cocci_id/* drivers/usb/host/oxu210hp-hcd.c 976 */;
	struct ehci_caps {
		u32 hc_capbase;
#define HC_LENGTH (p)(((p) >> 00) & 0x00ff)
#define HC_VERSION (p)(((p) >> 16) & 0xffff)
						u32 hcs_params;
#define HCS_DEBUG_PORT (p)(((p) >> 20) & 0xf)
#define HCS_INDICATOR (p)((p) & (1 << 16))
#define HCS_N_CC (p)(((p) >> 12) & 0xf)
#define HCS_N_PCC (p)(((p) >> 8) & 0xf)
#define HCS_PORTROUTED (p)((p) & (1 << 7))
#define HCS_PPC (p)((p) & (1 << 4))
#define HCS_N_PORTS (p)(((p) >> 0) & 0xf)
																u32 hcc_params;
#define HCC_EXT_CAPS (p)(((p) >> 8) & 0xff)
#define HCC_ISOC_CACHE (p)((p) & (1 << 7))
#define HCC_ISOC_THRES (p)(((p) >> 4) & 0x7)
#define HCC_CANPARK (p)((p) & (1 << 2))
#define HCC_PGM_FRAMELISTLEN (p)((p) & (1 << 1))
#define HCC_64BIT_ADDR (p)((p) & (1))
														u8 portroute[8];
	}__packed cocci_id/* drivers/usb/host/oxu210hp-hcd.c 93 */;
	__u16 cocci_id/* drivers/usb/host/oxu210hp-hcd.c 890 */;
	u16 cocci_id/* drivers/usb/host/oxu210hp-hcd.c 871 */;
	struct usb_hub_descriptor *cocci_id/* drivers/usb/host/oxu210hp-hcd.c 868 */;
	void cocci_id/* drivers/usb/host/oxu210hp-hcd.c 867 */;
	u32 __iomem *cocci_id/* drivers/usb/host/oxu210hp-hcd.c 849 */;
	u8 __iomem *cocci_id/* drivers/usb/host/oxu210hp-hcd.c 789 */;
	void __iomem *cocci_id/* drivers/usb/host/oxu210hp-hcd.c 747 */;
	int cocci_id/* drivers/usb/host/oxu210hp-hcd.c 670 */(struct usb_hcd *hcd, u16 typeReq, u16 wValue, u16 wIndex, char *buf, u16 wLength);
	void cocci_id/* drivers/usb/host/oxu210hp-hcd.c 669 */(struct oxu_hcd *oxu);
	bool cocci_id/* drivers/usb/host/oxu210hp-hcd.c 664 */;
	char cocci_id/* drivers/usb/host/oxu210hp-hcd.c 632 */[80];
	int __attribute__((__unused__)) cocci_id/* drivers/usb/host/oxu210hp-hcd.c 616 */;
	u32 cocci_id/* drivers/usb/host/oxu210hp-hcd.c 553 */;
	const char *cocci_id/* drivers/usb/host/oxu210hp-hcd.c 553 */;
	char *cocci_id/* drivers/usb/host/oxu210hp-hcd.c 552 */;
	const char *constcocci_id/* drivers/usb/host/oxu210hp-hcd.c 549 */[];
	struct usb_hcd cocci_id/* drivers/usb/host/oxu210hp-hcd.c 494 */;
	enum ehci_timer_action{TIMER_IO_WATCHDOG, TIMER_IAA_WATCHDOG, TIMER_ASYNC_SHRINK, TIMER_ASYNC_OFF,} cocci_id/* drivers/usb/host/oxu210hp-hcd.c 470 */;
	struct platform_driver cocci_id/* drivers/usb/host/oxu210hp-hcd.c 4315 */;
	struct oxu_info cocci_id/* drivers/usb/host/oxu210hp-hcd.c 4249 */;
	struct oxu_info *cocci_id/* drivers/usb/host/oxu210hp-hcd.c 4213 */;
	struct resource *cocci_id/* drivers/usb/host/oxu210hp-hcd.c 4209 */;
	struct device *cocci_id/* drivers/usb/host/oxu210hp-hcd.c 4126 */;
	struct platform_device *cocci_id/* drivers/usb/host/oxu210hp-hcd.c 4066 */;
	struct oxu_hcd cocci_id/* drivers/usb/host/oxu210hp-hcd.c 4025 */;
	const struct hc_driver cocci_id/* drivers/usb/host/oxu210hp-hcd.c 4022 */;
	struct oxu_hcd {
		unsigned int is_otg:1;
		u8 qh_used[QHEAD_NUM];
		u8 qtd_used[QTD_NUM];
		u8 db_used[BUFFER_NUM];
		u8 murb_used[MURB_NUM];
		struct oxu_onchip_mem __iomem *mem;
		spinlock_t mem_lock;
		struct timer_list urb_timer;
		struct ehci_caps __iomem *caps;
		struct ehci_regs __iomem *regs;
		u32 hcs_params;
		spinlock_t lock;
		struct ehci_qh *async;
		struct ehci_qh *reclaim;
		unsigned int reclaim_ready:1;
		unsigned int scanning:1;
		unsigned int periodic_size;
		__le32 *periodic;
		dma_addr_t periodic_dma;
		unsigned int i_thresh;
		union ehci_shadow *pshadow;
		int next_uframe;
		unsigned int periodic_sched;
		unsigned long reset_done[EHCI_MAX_ROOT_PORTS];
		unsigned long bus_suspended;
		unsigned long companion_ports;
		struct timer_list watchdog;
		unsigned long actions;
		unsigned int stamp;
		unsigned long next_statechange;
		u32 command;
		struct list_head urb_list;
		struct oxu_murb *murb_pool;
		unsigned int urb_len;
		u8 sbrn;
	} cocci_id/* drivers/usb/host/oxu210hp-hcd.c 402 */;
	struct oxu_murb {
		struct urb urb;
		struct urb *main;
		u8 last;
	} cocci_id/* drivers/usb/host/oxu210hp-hcd.c 396 */;
	struct oxu_onchip_mem {
		struct oxu_buf db_pool[BUFFER_NUM];
		u32 frame_list[DEFAULT_I_TDPS];
		struct ehci_qh qh_pool[QHEAD_NUM];
		struct ehci_qtd qtd_pool[QTD_NUM];
	}__aligned(4<<10) cocci_id/* drivers/usb/host/oxu210hp-hcd.c 386 */;
	struct oxu_buf {
		u8 buffer[BUFFER_SIZE];
	}__aligned(BUFFER_SIZE) cocci_id/* drivers/usb/host/oxu210hp-hcd.c 382 */;
	struct oxu_info {
		struct usb_hcd *hcd[2];
	} cocci_id/* drivers/usb/host/oxu210hp-hcd.c 378 */;
	unsigned int cocci_id/* drivers/usb/host/oxu210hp-hcd.c 3546 */;
	struct usb_host_endpoint *cocci_id/* drivers/usb/host/oxu210hp-hcd.c 3414 */;
	struct urb cocci_id/* drivers/usb/host/oxu210hp-hcd.c 3299 */;
	struct list_head cocci_id/* drivers/usb/host/oxu210hp-hcd.c 3234 */;
	struct oxu_hcd *cocci_id/* drivers/usb/host/oxu210hp-hcd.c 3233 */;
	gfp_t cocci_id/* drivers/usb/host/oxu210hp-hcd.c 3231 */;
	struct usb_hcd *cocci_id/* drivers/usb/host/oxu210hp-hcd.c 3230 */;
	struct urb *cocci_id/* drivers/usb/host/oxu210hp-hcd.c 3230 */;
	int cocci_id/* drivers/usb/host/oxu210hp-hcd.c 3230 */;
	struct ehci_qh {
		__le32 hw_next;
		__le32 hw_info1;
#define QH_HEAD 0x00008000
		__le32 hw_info2;
#define QH_SMASK 0x000000ff
#define QH_CMASK 0x0000ff00
#define QH_HUBADDR 0x007f0000
#define QH_HUBPORT 0x3f800000
#define QH_MULT 0xc0000000
		__le32 hw_current;
		__le32 hw_qtd_next;
		__le32 hw_alt_next;
		__le32 hw_token;
		__le32 hw_buf[5];
		__le32 hw_buf_hi[5];
		dma_addr_t qh_dma;
		union ehci_shadow qh_next;
		struct list_head qtd_list;
		struct ehci_qtd *dummy;
		struct ehci_qh *reclaim;
		struct oxu_hcd *oxu;
		struct kref kref;
		unsigned int stamp;
		u8 qh_state;
#define QH_STATE_LINKED 1
#define QH_STATE_UNLINK 2
#define QH_STATE_IDLE 3
#define QH_STATE_UNLINK_WAIT 4
#define QH_STATE_COMPLETING 5
		u8 usecs;
		u8 gap_uf;
		u8 c_usecs;
		u16 tt_usecs;
		unsigned short period;
		unsigned short start;
#define NO_FRAME ((unsigned short)~0)
			struct usb_device *dev;
	}__aligned(32) cocci_id/* drivers/usb/host/oxu210hp-hcd.c 306 */;
	struct timer_list *cocci_id/* drivers/usb/host/oxu210hp-hcd.c 2977 */;
	union ehci_shadow {
		struct ehci_qh *qh;
		__le32 *hw_next;
		void *ptr;
	} cocci_id/* drivers/usb/host/oxu210hp-hcd.c 292 */;
	irqreturn_t cocci_id/* drivers/usb/host/oxu210hp-hcd.c 2853 */;
	unsigned long cocci_id/* drivers/usb/host/oxu210hp-hcd.c 2616 */;
	struct list_head *cocci_id/* drivers/usb/host/oxu210hp-hcd.c 2613 */;
	const struct ehci_qh *cocci_id/* drivers/usb/host/oxu210hp-hcd.c 2527 */;
	__le32 *cocci_id/* drivers/usb/host/oxu210hp-hcd.c 2527 */;
	unsigned cocci_id/* drivers/usb/host/oxu210hp-hcd.c 2526 */;
	struct ehci_qtd {
		__le32 hw_next;
		__le32 hw_alt_next;
		__le32 hw_token;
#define QTD_TOGGLE (1 << 31)
#define QTD_LENGTH (tok)(((tok) >> 16) & 0x7fff)
#define QTD_IOC (1 << 15)
#define QTD_CERR (tok)(((tok) >> 10) & 0x3)
#define QTD_PID (tok)(((tok) >> 8) & 0x3)
#define QTD_STS_ACTIVE (1 << 7)
#define QTD_STS_HALT (1 << 6)
#define QTD_STS_DBE (1 << 5)
#define QTD_STS_BABBLE (1 << 4)
#define QTD_STS_XACT (1 << 3)
#define QTD_STS_MMF (1 << 2)
#define QTD_STS_STS (1 << 1)
#define QTD_STS_PING (1 << 0)
																		__le32 hw_buf[5];
		__le32 hw_buf_hi[5];
		dma_addr_t qtd_dma;
		struct list_head qtd_list;
		struct urb *urb;
		size_t length;
		u32 qtd_buffer_len;
		void *buffer;
		dma_addr_t buffer_dma;
		void *transfer_buffer;
		void *transfer_dma;
	}__aligned(32) cocci_id/* drivers/usb/host/oxu210hp-hcd.c 233 */;
	unsigned short cocci_id/* drivers/usb/host/oxu210hp-hcd.c 2267 */;
	union ehci_shadow cocci_id/* drivers/usb/host/oxu210hp-hcd.c 2247 */;
	__le32 cocci_id/* drivers/usb/host/oxu210hp-hcd.c 2233 */;
	union ehci_shadow *cocci_id/* drivers/usb/host/oxu210hp-hcd.c 2232 */;
	enum ehci_timer_action cocci_id/* drivers/usb/host/oxu210hp-hcd.c 2179 */;
	struct ehci_dbg_port {
		u32 control;
#define DBGP_OWNER (1 << 30)
#define DBGP_ENABLED (1 << 28)
#define DBGP_DONE (1 << 16)
#define DBGP_INUSE (1 << 10)
#define DBGP_ERRCODE (x)(((x) >> 7) & 0x07)
#	define DBGP_ERR_BAD 1
#	define DBGP_ERR_SIGNAL 2
#define DBGP_ERROR (1 << 6)
#define DBGP_GO (1 << 5)
#define DBGP_OUT (1 << 4)
#define DBGP_LEN (x)(((x) >> 0) & 0x0f)
													u32 pids;
#define DBGP_PID_GET (x)(((x) >> 16) & 0xff)
#define DBGP_PID_SET (data, tok)(((data) << 8) | (tok))
						u32 data03;
		u32 data47;
		u32 address;
#define DBGP_EPADDR (dev, ep)(((dev) << 8) | (ep))
			}__packed cocci_id/* drivers/usb/host/oxu210hp-hcd.c 201 */;
	struct ehci_qtd cocci_id/* drivers/usb/host/oxu210hp-hcd.c 1980 */;
	void **cocci_id/* drivers/usb/host/oxu210hp-hcd.c 1964 */;
	struct usb_tt *cocci_id/* drivers/usb/host/oxu210hp-hcd.c 1830 */;
	struct usb_ctrlrequest cocci_id/* drivers/usb/host/oxu210hp-hcd.c 1646 */;
	u8 cocci_id/* drivers/usb/host/oxu210hp-hcd.c 1414 */;
	int cocci_id/* drivers/usb/host/oxu210hp-hcd.c 1399 */(struct oxu_hcd *oxu, struct ehci_qh *qh);
	void cocci_id/* drivers/usb/host/oxu210hp-hcd.c 1398 */(struct oxu_hcd *oxu, struct ehci_qh *qh);
	struct ehci_qh *cocci_id/* drivers/usb/host/oxu210hp-hcd.c 1354 */;
	size_t cocci_id/* drivers/usb/host/oxu210hp-hcd.c 1298 */;
	u64 cocci_id/* drivers/usb/host/oxu210hp-hcd.c 1211 */;
	struct ehci_regs {
		u32 command;
#define CMD_PARK (1 << 11)
#define CMD_PARK_CNT (c)(((c) >> 8) & 3)
#define CMD_LRESET (1 << 7)
#define CMD_IAAD (1 << 6)
#define CMD_ASE (1 << 5)
#define CMD_PSE (1 << 4)
#define CMD_RESET (1 << 1)
#define CMD_RUN (1 << 0)
											u32 status;
#define STS_ASS (1 << 15)
#define STS_PSS (1 << 14)
#define STS_RECL (1 << 13)
#define STS_HALT (1 << 12)
#define STS_IAA (1 << 5)
#define STS_FATAL (1 << 4)
#define STS_FLR (1 << 3)
#define STS_PCD (1 << 2)
#define STS_ERR (1 << 1)
#define STS_INT (1 << 0)
#define INTR_MASK (STS_IAA | STS_FATAL | STS_PCD | STS_ERR | STS_INT)
													u32 intr_enable;
		u32 frame_index;
		u32 segment;
		u32 frame_list;
		u32 async_next;
		u32 reserved[9];
		u32 configured_flag;
#define FLAG_CF (1 << 0)
			u32 port_status[0];
#define PORT_WKOC_E (1 << 22)
#define PORT_WKDISC_E (1 << 21)
#define PORT_WKCONN_E (1 << 20)
#define PORT_LED_OFF (0 << 14)
#define PORT_LED_AMBER (1 << 14)
#define PORT_LED_GREEN (2 << 14)
#define PORT_LED_MASK (3 << 14)
#define PORT_OWNER (1 << 13)
#define PORT_POWER (1 << 12)
#define PORT_USB11 (x)(((x) & (3 << 10)) == (1 << 10))
#define PORT_RESET (1 << 8)
#define PORT_SUSPEND (1 << 7)
#define PORT_RESUME (1 << 6)
#define PORT_OCC (1 << 5)
#define PORT_OC (1 << 4)
#define PORT_PEC (1 << 3)
#define PORT_PE (1 << 2)
#define PORT_CSC (1 << 1)
#define PORT_CONNECT (1 << 0)
#define PORT_RWC_BITS (PORT_CSC | PORT_PEC | PORT_OCC)
																						}__packed cocci_id/* drivers/usb/host/oxu210hp-hcd.c 121 */;
	void *cocci_id/* drivers/usb/host/oxu210hp-hcd.c 1195 */;
	struct oxu_murb cocci_id/* drivers/usb/host/oxu210hp-hcd.c 1177 */;
	struct oxu_murb *cocci_id/* drivers/usb/host/oxu210hp-hcd.c 1119 */;
	struct ehci_qh cocci_id/* drivers/usb/host/oxu210hp-hcd.c 1045 */;
	struct kref *cocci_id/* drivers/usb/host/oxu210hp-hcd.c 1043 */;
	struct ehci_qtd *cocci_id/* drivers/usb/host/oxu210hp-hcd.c 1001 */;
}
