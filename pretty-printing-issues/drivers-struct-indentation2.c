/* drivers/usb/host/oxu210hp-hcd.c 233 */
struct ehci_qtd {
	/* first part defined by EHCI spec */
	__le32			hw_next;		/* see EHCI 3.5.1 */
	__le32			hw_alt_next;		/* see EHCI 3.5.2 */
	__le32			hw_token;		/* see EHCI 3.5.3 */
#define	QTD_TOGGLE	(1 << 31)	/* data toggle */
#define	QTD_LENGTH(tok)	(((tok)>>16) & 0x7fff)
#define	QTD_IOC		(1 << 15)	/* interrupt on complete */
#define	QTD_CERR(tok)	(((tok)>>10) & 0x3)
#define	QTD_PID(tok)	(((tok)>>8) & 0x3)
#define	QTD_STS_ACTIVE	(1 << 7)	/* HC may execute this */
#define	QTD_STS_HALT	(1 << 6)	/* halted on error */
#define	QTD_STS_DBE	(1 << 5)	/* data buffer error (in HC) */
#define	QTD_STS_BABBLE	(1 << 4)	/* device was babbling (qtd halted) */
#define	QTD_STS_XACT	(1 << 3)	/* device gave illegal response */
#define	QTD_STS_MMF	(1 << 2)	/* incomplete split transaction */
#define	QTD_STS_STS	(1 << 1)	/* split transaction state */
#define	QTD_STS_PING	(1 << 0)	/* issue PING? */
	__le32			hw_buf[5];		/* see EHCI 3.5.4 */
	__le32			hw_buf_hi[5];		/* Appendix B */

	/* the rest is HCD-private */
	dma_addr_t		qtd_dma;		/* qtd address */
	struct list_head	qtd_list;		/* sw qtd list */
	struct urb		*urb;			/* qtd's urb */
	size_t			length;			/* length of buffer */

	u32			qtd_buffer_len;
	void			*buffer;
	dma_addr_t		buffer_dma;
	void			*transfer_buffer;
	void			*transfer_dma;
} __aligned(32);


