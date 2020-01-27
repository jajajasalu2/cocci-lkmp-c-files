cocci_test_suite() {
	union cmv_dsc {
		struct cmv_dsc_e1 e1;
		struct cmv_dsc_e4 e4;
	} cocci_id/* drivers/usb/atm/ueagle-atm.c 99 */;
	unsigned int cocci_id/* drivers/usb/atm/ueagle-atm.c 989 */;
	const u8 *cocci_id/* drivers/usb/atm/ueagle-atm.c 988 */;
	struct l1_code *cocci_id/* drivers/usb/atm/ueagle-atm.c 979 */;
	struct block_index *cocci_id/* drivers/usb/atm/ueagle-atm.c 978 */;
	struct block_info_e4 cocci_id/* drivers/usb/atm/ueagle-atm.c 977 */;
	u8 cocci_id/* drivers/usb/atm/ueagle-atm.c 975 */;
	struct uea_softc *cocci_id/* drivers/usb/atm/ueagle-atm.c 975 */;
	int cocci_id/* drivers/usb/atm/ueagle-atm.c 975 */;
	void cocci_id/* drivers/usb/atm/ueagle-atm.c 975 */;
	struct cmv_dsc_e4 {
		u16 function;
		u16 offset;
		u16 address;
		u16 group;
	} cocci_id/* drivers/usb/atm/ueagle-atm.c 92 */;
	struct block_info_e1 cocci_id/* drivers/usb/atm/ueagle-atm.c 903 */;
	struct work_struct *cocci_id/* drivers/usb/atm/ueagle-atm.c 898 */;
	struct cmv_dsc_e1 {
		u8 function;
		u16 idx;
		u32 address;
		u16 offset;
	} cocci_id/* drivers/usb/atm/ueagle-atm.c 85 */;
	const void *cocci_id/* drivers/usb/atm/ueagle-atm.c 821 */;
	u8 *cocci_id/* drivers/usb/atm/ueagle-atm.c 799 */;
	u64 cocci_id/* drivers/usb/atm/ueagle-atm.c 793 */;
	struct uea_cmvs_v2 {
		u32 group;
		u32 address;
		u32 offset;
		u32 data;
	}__packed cocci_id/* drivers/usb/atm/ueagle-atm.c 77 */;
	u32 cocci_id/* drivers/usb/atm/ueagle-atm.c 726 */;
	u16 cocci_id/* drivers/usb/atm/ueagle-atm.c 725 */;
	struct uea_cmvs_v1 {
		u32 address;
		u16 offset;
		u32 data;
	}__packed cocci_id/* drivers/usb/atm/ueagle-atm.c 71 */;
	struct intr_pkt cocci_id/* drivers/usb/atm/ueagle-atm.c 68 */;
	bool cocci_id/* drivers/usb/atm/ueagle-atm.c 538 */;
	int cocci_id/* drivers/usb/atm/ueagle-atm.c 531 */[NB_MODEM];
	char *cocci_id/* drivers/usb/atm/ueagle-atm.c 530 */[NB_MODEM];
	bool cocci_id/* drivers/usb/atm/ueagle-atm.c 529 */[NB_MODEM];
	unsigned int cocci_id/* drivers/usb/atm/ueagle-atm.c 527 */[NB_MODEM];
	const char *const cocci_id/* drivers/usb/atm/ueagle-atm.c 522 */[];
	struct usb_driver cocci_id/* drivers/usb/atm/ueagle-atm.c 520 */;
	struct intr_pkt {
		__u8 bType;
		__u8 bNotification;
		__le16 wValue;
		__le16 wIndex;
		__le16 wLength;
		__le16 wInterrupt;
		union {
			union intr_data_e1 e1;
			union intr_data_e4 e4;
		} u;
	}__packed cocci_id/* drivers/usb/atm/ueagle-atm.c 504 */;
	union intr_data_e4 {
		struct {
			struct swap_info_e4 swapinfo;
			__le16 wDataSize;
		}__packed s1;
		struct {
			struct cmv_e4 cmv;
			__le16 wDataSize;
		}__packed s2;
	}__packed cocci_id/* drivers/usb/atm/ueagle-atm.c 493 */;
	union intr_data_e1 {
		struct {
			struct swap_info_e1 swapinfo;
			__le16 wDataSize;
		}__packed s1;
		struct {
			struct cmv_e1 cmv;
			__le16 wDataSize;
		}__packed s2;
	}__packed cocci_id/* drivers/usb/atm/ueagle-atm.c 482 */;
	struct swap_info_e4 {
		__u8 bSwapPageNo;
	}__packed cocci_id/* drivers/usb/atm/ueagle-atm.c 470 */;
	struct swap_info_e1 {
		__u8 bSwapPageNo;
		__u8 bOvl;
	}__packed cocci_id/* drivers/usb/atm/ueagle-atm.c 465 */;
	struct cmv_e4 {
		__be16 wGroup;
		__be16 wFunction;
		__be16 wOffset;
		__be16 wAddress;
		__be32 dwData[6];
	}__packed cocci_id/* drivers/usb/atm/ueagle-atm.c 456 */;
	struct cmv_e1 {
		__le16 wPreamble;
		__u8 bDirection;
		__u8 bFunction;
		__le16 wIndex;
		__le32 dwSymbolicAddress;
		__le16 wOffsetAddress;
		__le32 dwData;
	}__packed cocci_id/* drivers/usb/atm/ueagle-atm.c 446 */;
	struct block_info_e4 {
		__be16 wHdr;
		__u8 bBootPage;
		__u8 bPageNumber;
		__be32 dwSize;
		__be32 dwAddress;
		__be16 wReserved;
	}__packed cocci_id/* drivers/usb/atm/ueagle-atm.c 367 */;
	struct block_info_e1 {
		__le16 wHdr;
		__le16 wAddress;
		__le16 wSize;
		__le16 wOvlOffset;
		__le16 wOvl;
		__le16 wLast;
	}__packed cocci_id/* drivers/usb/atm/ueagle-atm.c 357 */;
	struct l1_code {
		u8 string_header[E4_L1_STRING_HEADER];
		u8 page_number_to_block_index[E4_MAX_PAGE_NUMBER];
		struct block_index page_header[E4_NO_SWAPPAGE_HEADERS];
		u8 code[0];
	}__packed cocci_id/* drivers/usb/atm/ueagle-atm.c 349 */;
	struct block_index {
		__le32 PageOffset;
		__le32 NotLastBlock;
		__le32 dummy;
		__le32 PageSize;
		__le32 PageAddress;
		__le16 dummy1;
		__le16 PageNumber;
	}__packed cocci_id/* drivers/usb/atm/ueagle-atm.c 331 */;
	const struct usb_device_id cocci_id/* drivers/usb/atm/ueagle-atm.c 2641 */[];
	__u8 *cocci_id/* drivers/usb/atm/ueagle-atm.c 263 */;
	struct usbatm_driver cocci_id/* drivers/usb/atm/ueagle-atm.c 2576 */;
	struct uea_softc cocci_id/* drivers/usb/atm/ueagle-atm.c 2519 */;
	const struct usb_device_id *cocci_id/* drivers/usb/atm/ueagle-atm.c 2491 */;
	struct attribute *cocci_id/* drivers/usb/atm/ueagle-atm.c 2467 */[];
	struct usb_interface *cocci_id/* drivers/usb/atm/ueagle-atm.c 2453 */;
	struct usbatm_data *cocci_id/* drivers/usb/atm/ueagle-atm.c 2450 */;
	struct usb_device *cocci_id/* drivers/usb/atm/ueagle-atm.c 2449 */;
	struct atm_dev *cocci_id/* drivers/usb/atm/ueagle-atm.c 2432 */;
	unsigned char cocci_id/* drivers/usb/atm/ueagle-atm.c 2417 */[2 * ETH_ALEN + 1];
	u_char *cocci_id/* drivers/usb/atm/ueagle-atm.c 2415 */;
	struct device_attribute *cocci_id/* drivers/usb/atm/ueagle-atm.c 2343 */;
	ssize_t cocci_id/* drivers/usb/atm/ueagle-atm.c 2343 */;
	enum{ADI930=0, EAGLE_I, EAGLE_II, EAGLE_III, EAGLE_IV,} cocci_id/* drivers/usb/atm/ueagle-atm.c 231 */;
	const char *cocci_id/* drivers/usb/atm/ueagle-atm.c 2262 */;
	size_t cocci_id/* drivers/usb/atm/ueagle-atm.c 2262 */;
	struct device *cocci_id/* drivers/usb/atm/ueagle-atm.c 2229 */;
	struct intr_pkt *cocci_id/* drivers/usb/atm/ueagle-atm.c 2129 */;
	struct urb *cocci_id/* drivers/usb/atm/ueagle-atm.c 2086 */;
	struct cmv_e4 *cocci_id/* drivers/usb/atm/ueagle-atm.c 2029 */;
	struct cmv_dsc_e4 *cocci_id/* drivers/usb/atm/ueagle-atm.c 2028 */;
	struct cmv_e1 *cocci_id/* drivers/usb/atm/ueagle-atm.c 1967 */;
	struct cmv_dsc_e1 *cocci_id/* drivers/usb/atm/ueagle-atm.c 1966 */;
	const struct firmware *cocci_id/* drivers/usb/atm/ueagle-atm.c 1908 */;
	struct uea_stats cocci_id/* drivers/usb/atm/ueagle-atm.c 1820 */;
	struct uea_cmvs_v2 *cocci_id/* drivers/usb/atm/ueagle-atm.c 1715 */;
	struct uea_cmvs_v1 *cocci_id/* drivers/usb/atm/ueagle-atm.c 1701 */;
	void *cocci_id/* drivers/usb/atm/ueagle-atm.c 1666 */;
	struct uea_cmvs_v2 cocci_id/* drivers/usb/atm/ueagle-atm.c 1663 */;
	char cocci_id/* drivers/usb/atm/ueagle-atm.c 1620 */[UEA_FW_NAME_MAX];
	const struct firmware **cocci_id/* drivers/usb/atm/ueagle-atm.c 1615 */;
	void **cocci_id/* drivers/usb/atm/ueagle-atm.c 1615 */;
	int *cocci_id/* drivers/usb/atm/ueagle-atm.c 1615 */;
	struct uea_cmvs_v1 cocci_id/* drivers/usb/atm/ueagle-atm.c 1602 */;
	char *cocci_id/* drivers/usb/atm/ueagle-atm.c 1557 */;
	char cocci_id/* drivers/usb/atm/ueagle-atm.c 1556 */[];
	char *const cocci_id/* drivers/usb/atm/ueagle-atm.c 1554 */;
	u32 cocci_id/* drivers/usb/atm/ueagle-atm.c 1437 */[2];
	u32 *cocci_id/* drivers/usb/atm/ueagle-atm.c 1207 */;
	struct cmv_e4 cocci_id/* drivers/usb/atm/ueagle-atm.c 1174 */;
	struct cmv_e1 cocci_id/* drivers/usb/atm/ueagle-atm.c 1136 */;
	struct uea_softc {
		struct usb_device *usb_dev;
		struct usbatm_data *usbatm;
		int modem_index;
		unsigned int driver_info;
		int annex;
#define ANNEXA 0
#define ANNEXB 1
		int booting;
		int reset;
		wait_queue_head_t sync_q;
		struct task_struct *kthread;
		u32 data;
		u32 data1;
		int cmv_ack;
		union cmv_dsc cmv_dsc;
		struct work_struct task;
		u16 pageno;
		u16 ovl;
		const struct firmware *dsp_firm;
		struct urb *urb_int;
		void (*dispatch_cmv)(struct uea_softc *, struct intr_pkt *);
		void (*schedule_load_page)(struct uea_softc *, struct intr_pkt *);
		int (*stat)(struct uea_softc *);
		int (*send_cmvs)(struct uea_softc *);
		struct uea_stats {
			struct {
				u32 state;
				u32 flags;
				u32 mflags;
				u32 vidcpe;
				u32 vidco;
				u32 dsrate;
				u32 usrate;
				u32 dsunc;
				u32 usunc;
				u32 dscorr;
				u32 uscorr;
				u32 txflow;
				u32 rxflow;
				u32 usattenuation;
				u32 dsattenuation;
				u32 dsmargin;
				u32 usmargin;
				u32 firmid;
			} phy;
		} stats;
	} cocci_id/* drivers/usb/atm/ueagle-atm.c 104 */;
}
