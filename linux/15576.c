cocci_test_suite() {
	struct p80211msg_p2req_ramdl_write *cocci_id/* drivers/staging/wlan-ng/prism2fw.c 999 */;
	struct p80211msg_p2req_ramdl_state *cocci_id/* drivers/staging/wlan-ng/prism2fw.c 998 */;
	uint8_t *cocci_id/* drivers/staging/wlan-ng/prism2fw.c 965 */;
	struct s3inforec {
		u16 len;
		u16 type;
		union {
			struct hfa384x_compident version;
			struct hfa384x_caplevel compat;
			u16 buildseq;
			struct hfa384x_compident platform;
		} info;
	} cocci_id/* drivers/staging/wlan-ng/prism2fw.c 96 */;
	u16 cocci_id/* drivers/staging/wlan-ng/prism2fw.c 942 */;
	struct s3crcrec {
		u32 addr;
		u32 len;
		unsigned int dowrite;
	} cocci_id/* drivers/staging/wlan-ng/prism2fw.c 90 */;
	u16 *cocci_id/* drivers/staging/wlan-ng/prism2fw.c 877 */;
	struct s3plugrec {
		u32 itemcode;
		u32 addr;
		u32 len;
	} cocci_id/* drivers/staging/wlan-ng/prism2fw.c 84 */;
	struct p80211msg_p2req_readpda *cocci_id/* drivers/staging/wlan-ng/prism2fw.c 780 */;
	struct s3datarec {
		u32 len;
		u32 addr;
		u8 checksum;
		u8 *data;
	} cocci_id/* drivers/staging/wlan-ng/prism2fw.c 77 */;
	struct s3plugrec *cocci_id/* drivers/staging/wlan-ng/prism2fw.c 674 */;
	struct hfa384x_pdrec *cocci_id/* drivers/staging/wlan-ng/prism2fw.c 612 */;
	__le16 *cocci_id/* drivers/staging/wlan-ng/prism2fw.c 605 */;
	struct pda *cocci_id/* drivers/staging/wlan-ng/prism2fw.c 603 */;
	unsigned int *cocci_id/* drivers/staging/wlan-ng/prism2fw.c 461 */;
	void cocci_id/* drivers/staging/wlan-ng/prism2fw.c 461 */;
	u8 *cocci_id/* drivers/staging/wlan-ng/prism2fw.c 411 */;
	u32 cocci_id/* drivers/staging/wlan-ng/prism2fw.c 408 */;
	struct s3crcrec *cocci_id/* drivers/staging/wlan-ng/prism2fw.c 403 */;
	struct imgchunk *cocci_id/* drivers/staging/wlan-ng/prism2fw.c 402 */;
	unsigned int cocci_id/* drivers/staging/wlan-ng/prism2fw.c 402 */;
	int cocci_id/* drivers/staging/wlan-ng/prism2fw.c 402 */;
	u32 *cocci_id/* drivers/staging/wlan-ng/prism2fw.c 252 */;
	struct p80211itemd *cocci_id/* drivers/staging/wlan-ng/prism2fw.c 251 */;
	struct p80211msg_dot11req_mibget cocci_id/* drivers/staging/wlan-ng/prism2fw.c 250 */;
	signed int cocci_id/* drivers/staging/wlan-ng/prism2fw.c 249 */;
	struct wlandevice *cocci_id/* drivers/staging/wlan-ng/prism2fw.c 247 */;
	const struct ihex_binrec *cocci_id/* drivers/staging/wlan-ng/prism2fw.c 246 */;
	const struct firmware *cocci_id/* drivers/staging/wlan-ng/prism2fw.c 210 */;
	struct usb_device *cocci_id/* drivers/staging/wlan-ng/prism2fw.c 208 */;
	int cocci_id/* drivers/staging/wlan-ng/prism2fw.c 189 */(void);
	void cocci_id/* drivers/staging/wlan-ng/prism2fw.c 187 */(void);
	void cocci_id/* drivers/staging/wlan-ng/prism2fw.c 185 */(struct imgchunk *fchunk,
								  unsigned int *nfchunks);
	int cocci_id/* drivers/staging/wlan-ng/prism2fw.c 182 */(struct wlandevice *wlandev,
								 struct imgchunk *fchunk,
								 unsigned int nfchunks);
	int cocci_id/* drivers/staging/wlan-ng/prism2fw.c 179 */(struct imgchunk *fchunk,
								 unsigned int nfchunks,
								 struct s3crcrec *s3crc,
								 unsigned int ns3crc);
	int cocci_id/* drivers/staging/wlan-ng/prism2fw.c 175 */(struct imgchunk *fchunk,
								 unsigned int nfchunks,
								 struct s3plugrec *s3plug,
								 unsigned int ns3plug,
								 struct pda *pda);
	int cocci_id/* drivers/staging/wlan-ng/prism2fw.c 173 */(struct pda *pda);
	int cocci_id/* drivers/staging/wlan-ng/prism2fw.c 171 */(struct pda *pda,
								 struct wlandevice *wlandev);
	int cocci_id/* drivers/staging/wlan-ng/prism2fw.c 169 */(struct imgchunk *clist,
								 unsigned int *ccnt);
	int cocci_id/* drivers/staging/wlan-ng/prism2fw.c 167 */(const struct ihex_binrec *rfptr);
	int cocci_id/* drivers/staging/wlan-ng/prism2fw.c 164 */(const struct ihex_binrec *rfptr,
								 struct wlandevice *wlandev);
	struct hfa384x_caplevel cocci_id/* drivers/staging/wlan-ng/prism2fw.c 158 */;
	struct hfa384x_compident cocci_id/* drivers/staging/wlan-ng/prism2fw.c 156 */;
	struct pda cocci_id/* drivers/staging/wlan-ng/prism2fw.c 155 */;
	struct imgchunk cocci_id/* drivers/staging/wlan-ng/prism2fw.c 147 */[CHUNKS_MAX];
	struct s3inforec cocci_id/* drivers/staging/wlan-ng/prism2fw.c 140 */[S3INFO_MAX];
	struct s3crcrec cocci_id/* drivers/staging/wlan-ng/prism2fw.c 136 */[S3CRC_MAX];
	struct s3plugrec cocci_id/* drivers/staging/wlan-ng/prism2fw.c 132 */[S3PLUG_MAX];
	struct s3datarec *cocci_id/* drivers/staging/wlan-ng/prism2fw.c 128 */;
	struct imgchunk {
		u32 addr;
		u32 len;
		u16 crc;
		u8 *data;
	} cocci_id/* drivers/staging/wlan-ng/prism2fw.c 113 */;
	struct pda {
		u8 buf[HFA384x_PDA_LEN_MAX];
		struct hfa384x_pdrec *rec[HFA384x_PDA_RECS_MAX];
		unsigned int nrec;
	} cocci_id/* drivers/staging/wlan-ng/prism2fw.c 107 */;
}
