cocci_test_suite() {
	char *cocci_id/* drivers/atm/lanai.c 958 */;
	const u32 *cocci_id/* drivers/atm/lanai.c 940 */;
	u8 cocci_id/* drivers/atm/lanai.c 871 */;
	void cocci_id/* drivers/atm/lanai.c 826 */;
	struct lanai_dev *cocci_id/* drivers/atm/lanai.c 818 */;
	int cocci_id/* drivers/atm/lanai.c 818 */;
	dma_addr_t cocci_id/* drivers/atm/lanai.c 697 */;
	struct sk_buff *cocci_id/* drivers/atm/lanai.c 683 */;
	unsigned int cocci_id/* drivers/atm/lanai.c 663 */;
	enum lanai_vcc_offset cocci_id/* drivers/atm/lanai.c 647 */;
	u32 cocci_id/* drivers/atm/lanai.c 646 */;
	const struct lanai_vcc *cocci_id/* drivers/atm/lanai.c 646 */;
	vci_t cocci_id/* drivers/atm/lanai.c 641 */;
	bus_addr_t cocci_id/* drivers/atm/lanai.c 640 */;
	const struct lanai_dev *cocci_id/* drivers/atm/lanai.c 640 */;
	enum lanai_vcc_offset{vcc_rxaddr1=0x00,

#define

RXADDR1_SET_SIZE

(

x

)

(

(

x

)

*

0x0000100

)




#define

RXADDR1_SET_RMMODE

(

x

)

(

(

x

)

*

0x00800

)




#define

RMMODE_TRASH

(

0

)




#define

RMMODE_PRESERVE

(

1

)




#define

RMMODE_PIPE

(

2

)




#define

RMMODE_PIPEALL

(

3

)




#define

RXADDR1_OAM_PRESERVE

(

0x00002000

)




#define

RXADDR1_SET_MODE

(

x

)

(

(

x

)

*

0x0004000

)




#define

RXMODE_TRASH

(

0

)




#define

RXMODE_AAL0

(

1

)




#define

RXMODE_AAL5

(

2

)




#define

RXMODE_AAL5_STREAM

(

3

)


 vcc_rxaddr2=0x04, vcc_rxcrc1=0x08, vcc_rxcrc2=0x0C, vcc_rxwriteptr=0x10,

#define

RXWRITEPTR_LASTEFCI

(

0x00002000

)




#define

RXWRITEPTR_DROPPING

(

0x00004000

)




#define

RXWRITEPTR_TRASHING

(

0x00008000

)


 vcc_rxbufstart=0x14,

#define

RXBUFSTART_CLP

(

0x00004000

)




#define

RXBUFSTART_CI

(

0x00008000

)


 vcc_rxreadptr=0x18, vcc_txicg=0x1C, vcc_txaddr1=0x20,

#define

TXADDR1_SET_SIZE

(

x

)

(

(

x

)

*

0x0000100

)




#define

TXADDR1_ABR

(

0x00008000

)


 vcc_txaddr2=0x24, vcc_txcrc1=0x28, vcc_txcrc2=0x2C, vcc_txreadptr=0x30,

#define

TXREADPTR_GET_PTR

(

x

)

(

(

x

)

&

0x01FFF

)




#define

TXREADPTR_MASK_DELTA

(

0x0000E000

)


 vcc_txendptr=0x34,

#define

TXENDPTR_CLP

(

0x00002000

)




#define

TXENDPTR_MASK_PDUMODE

(

0x0000C000

)




#define

PDUMODE_AAL0

(

0

*

0x04000

)




#define

PDUMODE_AAL5

(

2

*

0x04000

)




#define

PDUMODE_AAL5STREAM

(

3

*

0x04000

)


 vcc_txwriteptr=0x38,

#define

TXWRITEPTR_GET_PTR

(

x

)

(

(

x

)

&

0x1FFF

)


 vcc_txcbr_next=0x3C

#define

TXCBR_NEXT_BOZO

(

0x00008000

)


,} cocci_id/* drivers/atm/lanai.c 591 */;
	enum lanai_register cocci_id/* drivers/atm/lanai.c 469 */;
	enum lanai_register{Reset_Reg=0x00, Endian_Reg=0x04, IntStatus_Reg=0x08, IntStatusMasked_Reg=0x0C, IntAck_Reg=0x10, IntAckMasked_Reg=0x14, IntStatusSet_Reg=0x18, IntStatusSetMasked_Reg=0x1C, IntControlEna_Reg=0x20, IntControlDis_Reg=0x24, Status_Reg=0x28, Config1_Reg=0x2C, Config2_Reg=0x30, Statistics_Reg=0x34, ServiceStuff_Reg=0x38, ServWrite_Reg=0x3C, ServRead_Reg=0x40, TxDepth_Reg=0x44, Butt_Reg=0x48, CBR_ICG_Reg=0x50, CBR_PTR_Reg=0x54, PingCount_Reg=0x58, DMA_Addr_Reg=0x5C,} cocci_id/* drivers/atm/lanai.c 392 */;
	const struct lanai_buffer *cocci_id/* drivers/atm/lanai.c 363 */;
	unsigned char *cocci_id/* drivers/atm/lanai.c 354 */;
	u32 *cocci_id/* drivers/atm/lanai.c 353 */;
	struct pci_dev *cocci_id/* drivers/atm/lanai.c 329 */;
	size_t cocci_id/* drivers/atm/lanai.c 329 */;
	struct lanai_buffer *cocci_id/* drivers/atm/lanai.c 328 */;
	void (*cocci_id/* drivers/atm/lanai.c 304 */)(struct lanai_dev *,
						      vci_t vci);
	const unsigned long *cocci_id/* drivers/atm/lanai.c 303 */;
	struct lanai_dev {
		bus_addr_t base;
		struct lanai_dev_stats stats;
		struct lanai_buffer service;
		struct lanai_vcc **vccs;
#ifdef USE_POWERDOWN
		int nbound;
#endif
		enum lanai_type type;
		vci_t num_vci;
		u8 eeprom[LANAI_EEPROM_SIZE];
		u32 serialno,magicno;
		struct pci_dev *pci;
	DECLARE_BITMAP(backlog_vccs,NUM_VCI)
		;
	DECLARE_BITMAP(transmit_ready,NUM_VCI)
		;
		struct timer_list timer;
		int naal0;
		struct lanai_buffer aal0buf;
		u32 conf1,conf2;
		u32 status;
		spinlock_t endtxlock;
		spinlock_t servicelock;
		struct atm_vcc *cbrvcc;
		int number;
		int board_rev;
	} cocci_id/* drivers/atm/lanai.c 267 */;
	struct pci_driver cocci_id/* drivers/atm/lanai.c 2593 */;
	const struct pci_device_id cocci_id/* drivers/atm/lanai.c 2586 */[];
	enum lanai_type cocci_id/* drivers/atm/lanai.c 2575 */;
	const struct pci_device_id *cocci_id/* drivers/atm/lanai.c 2552 */;
	const struct atmdev_ops cocci_id/* drivers/atm/lanai.c 2536 */;
	struct lanai_dev_stats {
		unsigned ovfl_trash;
		unsigned vci_trash;
		unsigned hec_err;
		unsigned atm_ovfl;
		unsigned pcierr_parity_detect;
		unsigned pcierr_serr_set;
		unsigned pcierr_master_abort;
		unsigned pcierr_m_target_abort;
		unsigned pcierr_s_target_abort;
		unsigned pcierr_master_parity;
		unsigned service_notx;
		unsigned service_norx;
		unsigned service_rxnotaal5;
		unsigned dma_reenable;
		unsigned card_reset;
	} cocci_id/* drivers/atm/lanai.c 249 */;
	loff_t cocci_id/* drivers/atm/lanai.c 2443 */;
	loff_t *cocci_id/* drivers/atm/lanai.c 2440 */;
	enum lanai_type{lanai2=PCI_DEVICE_ID_EF_ATM_LANAI2, lanaihb=PCI_DEVICE_ID_EF_ATM_LANAIHB,} cocci_id/* drivers/atm/lanai.c 244 */;
	struct atm_qos *cocci_id/* drivers/atm/lanai.c 2432 */;
	struct atm_vcc *cocci_id/* drivers/atm/lanai.c 2431 */;
	short cocci_id/* drivers/atm/lanai.c 2313 */;
	struct lanai_vcc {
		bus_addr_t vbase;
		struct lanai_vcc_stats stats;
		int nref;
		vci_t vci;
		struct {
			struct lanai_buffer buf;
			struct atm_vcc *atmvcc;
		} rx;
		struct {
			struct lanai_buffer buf;
			struct atm_vcc *atmvcc;
			int endptr;
			struct sk_buff_head backlog;
			void (*unqueue)(struct lanai_dev *,
					struct lanai_vcc *, int);
		} tx;
	} cocci_id/* drivers/atm/lanai.c 226 */;
	struct atm_dev *cocci_id/* drivers/atm/lanai.c 2246 */;
	struct lanai_dev cocci_id/* drivers/atm/lanai.c 216 */;
	struct lanai_vcc_stats {
		unsigned rx_nomem;
		union {
			struct {
				unsigned rx_badlen;
				unsigned service_trash;
				unsigned service_stream;
				unsigned service_rxcrc;
			} aal5;
			struct {
			} aal0;
		} x;
	} cocci_id/* drivers/atm/lanai.c 202 */;
	const struct atm_vcc *cocci_id/* drivers/atm/lanai.c 2017 */;
	vci_t *cocci_id/* drivers/atm/lanai.c 2017 */;
	short *cocci_id/* drivers/atm/lanai.c 2017 */;
	struct lanai_buffer {
		u32 *start;
		u32 *end;
		u32 *ptr;
		dma_addr_t dmaaddr;
	} cocci_id/* drivers/atm/lanai.c 195 */;
	void __iomem *cocci_id/* drivers/atm/lanai.c 192 */;
	const char *cocci_id/* drivers/atm/lanai.c 1914 */;
	int *cocci_id/* drivers/atm/lanai.c 1914 */;
	irqreturn_t cocci_id/* drivers/atm/lanai.c 1874 */;
	void *cocci_id/* drivers/atm/lanai.c 1874 */;
	struct timer_list *cocci_id/* drivers/atm/lanai.c 1760 */;
	unsigned long cocci_id/* drivers/atm/lanai.c 1673 */;
	struct lanai_vcc *cocci_id/* drivers/atm/lanai.c 1620 */;
	const struct atm_qos *cocci_id/* drivers/atm/lanai.c 1500 */;
	struct lanai_vcc **cocci_id/* drivers/atm/lanai.c 1444 */;
	const unsigned char *cocci_id/* drivers/atm/lanai.c 1367 */;
	u16 cocci_id/* drivers/atm/lanai.c 1098 */;
	const char *cocci_id/* drivers/atm/lanai.c 1071 */[2];
	const u8 *cocci_id/* drivers/atm/lanai.c 1020 */;
}
