cocci_test_suite() {
	void (*cocci_id/* drivers/scsi/FlashPoint.c 927 */[8])(u32,
							       unsigned char);
	struct nvram_info cocci_id/* drivers/scsi/FlashPoint.c 915 */[MAX_MB_CARDS];
	SCCBSCAM_INFO cocci_id/* drivers/scsi/FlashPoint.c 914 */[MAX_SCSI_TAR];
	struct sccb_card cocci_id/* drivers/scsi/FlashPoint.c 913 */[MAX_CARDS];
	struct sccb_mgr_tar_info cocci_id/* drivers/scsi/FlashPoint.c 911 */[MAX_CARDS][MAX_SCSI_TAR];
	void cocci_id/* drivers/scsi/FlashPoint.c 908 */(u32 p_port,
							 unsigned char p_card);
	unsigned char cocci_id/* drivers/scsi/FlashPoint.c 905 */(unsigned char p_card,
								  unsigned char p_id_string[]);
	void cocci_id/* drivers/scsi/FlashPoint.c 902 */(unsigned char p_card,
							 u32 p_port,
							 unsigned char p_our_id);
	unsigned char cocci_id/* drivers/scsi/FlashPoint.c 900 */(u32 p_port,
								  unsigned char targ_id);
	unsigned char cocci_id/* drivers/scsi/FlashPoint.c 899 */(unsigned char p_quintet);
	void cocci_id/* drivers/scsi/FlashPoint.c 897 */(u32 p_port,
							 unsigned char p_data_bit);
	unsigned char cocci_id/* drivers/scsi/FlashPoint.c 895 */(u32 p_port,
								  unsigned char p_id_string[]);
	unsigned char cocci_id/* drivers/scsi/FlashPoint.c 892 */(u32 p_port,
								  unsigned char p_data);
	void cocci_id/* drivers/scsi/FlashPoint.c 891 */(unsigned char p_card,
							 u32 p_port);
	int cocci_id/* drivers/scsi/FlashPoint.c 888 */(u32 p_port,
							unsigned char p_sel_type);
	void cocci_id/* drivers/scsi/FlashPoint.c 885 */(unsigned char p_card,
							 unsigned char p_our_id,
							 unsigned char p_power_up);
	void cocci_id/* drivers/scsi/FlashPoint.c 882 */(unsigned char p_card,
							 unsigned char target);
	void cocci_id/* drivers/scsi/FlashPoint.c 880 */(struct sccb_card *pCurrCard,
							 unsigned char p_card);
	void cocci_id/* drivers/scsi/FlashPoint.c 879 */(void);
	unsigned char cocci_id/* drivers/scsi/FlashPoint.c 874 */(u32 p_port,
								  unsigned char p_card,
								  struct sccb_card *pCurrCard,
								  unsigned short p_int);
	void cocci_id/* drivers/scsi/FlashPoint.c 872 */(struct sccb *currSCCB);
	void cocci_id/* drivers/scsi/FlashPoint.c 870 */(u32 port,
							 unsigned char p_card,
							 struct sccb *pCurrSCCB);
	void cocci_id/* drivers/scsi/FlashPoint.c 868 */(u32 port,
							 struct sccb *pCurrSCCB);
	void cocci_id/* drivers/scsi/FlashPoint.c 864 */(u32 port,
							 struct sccb_card *pCurrCard);
	void cocci_id/* drivers/scsi/FlashPoint.c 861 */(u32 p_port);
	void cocci_id/* drivers/scsi/FlashPoint.c 860 */(u32 port,
							 unsigned char scamFlg);
	void cocci_id/* drivers/scsi/FlashPoint.c 857 */(u32 port,
							 unsigned char p_card);
	void cocci_id/* drivers/scsi/FlashPoint.c 845 */(u32 p_port,
							 unsigned char ee_cmd,
							 unsigned short ee_addr);
	unsigned short cocci_id/* drivers/scsi/FlashPoint.c 841 */(u32 p_port,
								   unsigned short ee_addr);
	void cocci_id/* drivers/scsi/FlashPoint.c 839 */(u32 p_port,
							 unsigned short ee_data,
							 unsigned short ee_addr);
	void cocci_id/* drivers/scsi/FlashPoint.c 838 */(u32 p_port,
							 unsigned char p_mode);
	void cocci_id/* drivers/scsi/FlashPoint.c 837 */(u32 p_port,
							 unsigned char p_delay);
	unsigned char cocci_id/* drivers/scsi/FlashPoint.c 834 */(unsigned char buffer[]);
	unsigned short cocci_id/* drivers/scsi/FlashPoint.c 833 */(unsigned char buffer[]);
	void cocci_id/* drivers/scsi/FlashPoint.c 832 */(struct sccb *p_SCCB);
	unsigned char cocci_id/* drivers/scsi/FlashPoint.c 830 */(struct sccb *p_SCCB,
								  unsigned char p_card);
	void cocci_id/* drivers/scsi/FlashPoint.c 829 */(struct sccb *p_SCCB,
							 unsigned char card);
	void cocci_id/* drivers/scsi/FlashPoint.c 828 */(unsigned char p_card,
							 unsigned char error_code);
	void cocci_id/* drivers/scsi/FlashPoint.c 824 */(struct sccb_card *pCurrCard,
							 struct sccb *p_SCCB,
							 unsigned char p_card);
	void cocci_id/* drivers/scsi/FlashPoint.c 823 */(struct sccb *p_SCCB,
							 unsigned char p_card);
	void cocci_id/* drivers/scsi/FlashPoint.c 819 */(u32 port,
							 unsigned char width);
	unsigned char cocci_id/* drivers/scsi/FlashPoint.c 817 */(u32 port,
								  unsigned char p_card);
	void cocci_id/* drivers/scsi/FlashPoint.c 815 */(struct nvram_info *pNvRamInfo);
	void cocci_id/* drivers/scsi/FlashPoint.c 814 */(struct sccb *p_sccb,
							 unsigned char p_card);
	void cocci_id/* drivers/scsi/FlashPoint.c 811 */(unsigned char p_card,
							 unsigned char thisTarg,
							 unsigned char error_code);
	void cocci_id/* drivers/scsi/FlashPoint.c 810 */(u32 port,
							 unsigned char message);
	unsigned char cocci_id/* drivers/scsi/FlashPoint.c 808 */(u32 ioPort);
	void cocci_id/* drivers/scsi/FlashPoint.c 806 */(u32 portBase,
							 unsigned char index,
							 unsigned char data);
	unsigned char cocci_id/* drivers/scsi/FlashPoint.c 805 */(u32 port,
								  unsigned char index);
	void cocci_id/* drivers/scsi/FlashPoint.c 799 */(u32 p_port,
							 unsigned char p_id,
							 unsigned char p_sync_value,
							 struct sccb_mgr_tar_info *currTar_Info);
	void cocci_id/* drivers/scsi/FlashPoint.c 797 */(u32 port,
							 unsigned char sync_pulse,
							 unsigned char offset);
	void cocci_id/* drivers/scsi/FlashPoint.c 792 */(u32 port,
							 unsigned char p_card,
							 struct sccb_card *pCurrCard);
	unsigned char cocci_id/* drivers/scsi/FlashPoint.c 789 */(u32 port,
								  unsigned char p_card,
								  unsigned char syncFlag);
	void cocci_id/* drivers/scsi/FlashPoint.c 7586 */(void *);
	int cocci_id/* drivers/scsi/FlashPoint.c 7585 */(void *);
	bool cocci_id/* drivers/scsi/FlashPoint.c 7584 */(void *);
	int cocci_id/* drivers/scsi/FlashPoint.c 7583 */(void *,
							 struct blogic_ccb *);
	void cocci_id/* drivers/scsi/FlashPoint.c 7582 */(void *,
							  struct blogic_ccb *);
	void *cocci_id/* drivers/scsi/FlashPoint.c 7581 */(struct fpoint_info *);
	unsigned char cocci_id/* drivers/scsi/FlashPoint.c 7580 */(struct fpoint_info *);
	bool cocci_id/* drivers/scsi/FlashPoint.c 7554 */;
	struct blogic_ccb *cocci_id/* drivers/scsi/FlashPoint.c 7549 */;
	struct fpoint_info *cocci_id/* drivers/scsi/FlashPoint.c 7530 */;
	unsigned char cocci_id/* drivers/scsi/FlashPoint.c 7508 */;
	int cocci_id/* drivers/scsi/FlashPoint.c 7493 */;
	unsigned char cocci_id/* drivers/scsi/FlashPoint.c 7490 */[];
	unsigned short cocci_id/* drivers/scsi/FlashPoint.c 7490 */;
	struct sccb {
		unsigned char OperationCode;
		unsigned char ControlByte;
		unsigned char CdbLength;
		unsigned char RequestSenseLength;
		u32 DataLength;
		void *DataPointer;
		unsigned char CcbRes[2];
		unsigned char HostStatus;
		unsigned char TargetStatus;
		unsigned char TargID;
		unsigned char Lun;
		unsigned char Cdb[12];
		unsigned char CcbRes1;
		unsigned char Reserved1;
		u32 Reserved2;
		u32 SensePointer;
		CALL_BK_FN SccbCallback;
		u32 SccbIOPort;
		unsigned char SccbStatus;
		unsigned char SCCBRes2;
		u16 SccbOSFlags;
		u32 Sccb_XferCnt;
		u32 Sccb_ATC;
		u32 SccbVirtDataPtr;
		u32 Sccb_res1;
		u16 Sccb_MGRFlags;
		u16 Sccb_sgseg;
		unsigned char Sccb_scsimsg;
		unsigned char Sccb_tag;
		unsigned char Sccb_scsistat;
		unsigned char Sccb_idmsg;
		struct sccb *Sccb_forwardlink;
		struct sccb *Sccb_backlink;
		u32 Sccb_savedATC;
		unsigned char Save_Cdb[6];
		unsigned char Save_CdbLen;
		unsigned char Sccb_XferState;
		u32 Sccb_SGoffset;
	} cocci_id/* drivers/scsi/FlashPoint.c 74 */;
	CALL_BK_FN cocci_id/* drivers/scsi/FlashPoint.c 6862 */;
	u32 cocci_id/* drivers/scsi/FlashPoint.c 6482 */;
	void cocci_id/* drivers/scsi/FlashPoint.c 6482 */;
	unsigned short *cocci_id/* drivers/scsi/FlashPoint.c 5764 */;
	unsigned char cocci_id/* drivers/scsi/FlashPoint.c 5762 */[3];
	unsigned char cocci_id/* drivers/scsi/FlashPoint.c 5759 */[ID_STRING_LENGTH];
	unsigned long cocci_id/* drivers/scsi/FlashPoint.c 5050 */;
	struct blogic_sg_seg *cocci_id/* drivers/scsi/FlashPoint.c 4955 */;
	unsigned int cocci_id/* drivers/scsi/FlashPoint.c 4952 */;
	struct sccb *cocci_id/* drivers/scsi/FlashPoint.c 4645 */;
	void (*cocci_id/* drivers/scsi/FlashPoint.c 3981 */)(u32,
							     unsigned char);
	struct sccb_mgr_info {
		u32 si_baseaddr;
		unsigned char si_present;
		unsigned char si_intvect;
		unsigned char si_id;
		unsigned char si_lun;
		u16 si_fw_revision;
		u16 si_per_targ_init_sync;
		u16 si_per_targ_fast_nego;
		u16 si_per_targ_ultra_nego;
		u16 si_per_targ_no_disc;
		u16 si_per_targ_wide_nego;
		u16 si_flags;
		unsigned char si_card_family;
		unsigned char si_bustype;
		unsigned char si_card_model[3];
		unsigned char si_relative_cardnum;
		unsigned char si_reserved[4];
		u32 si_OS_reserved;
		unsigned char si_XlatInfo[4];
		u32 si_reserved2[5];
		u32 si_secondary_range;
	} cocci_id/* drivers/scsi/FlashPoint.c 31 */;
	struct SCCBscam_info {
		unsigned char id_string[ID_STRING_LENGTH];
		enum scam_id_st state;
	} cocci_id/* drivers/scsi/FlashPoint.c 300 */;
	enum scam_id_st{ID0, ID1, ID2, ID3, ID4, ID5, ID6, ID7, ID8, ID9, ID10, ID11, ID12, ID13, ID14, ID15, ID_UNUSED, ID_UNASSIGNED, ID_ASSIGNED, LEGACY, CLR_PRIORITY, NO_ID_AVAIL,} cocci_id/* drivers/scsi/FlashPoint.c 294 */;
	void (*cocci_id/* drivers/scsi/FlashPoint.c 29 */)(struct sccb *);
	struct sccb cocci_id/* drivers/scsi/FlashPoint.c 28 */;
	unsigned char *cocci_id/* drivers/scsi/FlashPoint.c 2556 */;
	struct sccb_card {
		struct sccb *currentSCCB;
		struct sccb_mgr_info *cardInfo;
		u32 ioPort;
		unsigned short cmdCounter;
		unsigned char discQCount;
		unsigned char tagQ_Lst;
		unsigned char cardIndex;
		unsigned char scanIndex;
		unsigned char globalFlags;
		unsigned char ourId;
		struct nvram_info *pNvRamInfo;
		struct sccb *discQ_Tbl[QUEUE_DEPTH];
	} cocci_id/* drivers/scsi/FlashPoint.c 248 */;
	struct nvram_info {
		unsigned char niModel;
		unsigned char niCardNo;
		u32 niBaseAddr;
		unsigned char niSysConf;
		unsigned char niScsiConf;
		unsigned char niScamConf;
		unsigned char niAdapId;
		unsigned char niSyncTbl[MAX_SCSI_TAR / 2];
		unsigned char niScamTbl[MAX_SCSI_TAR][4];
	} cocci_id/* drivers/scsi/FlashPoint.c 225 */;
	struct sccb_mgr_tar_info *cocci_id/* drivers/scsi/FlashPoint.c 2199 */;
	struct sccb_card *cocci_id/* drivers/scsi/FlashPoint.c 2162 */;
	struct sccb_mgr_tar_info {
		struct sccb *TarSelQ_Head;
		struct sccb *TarSelQ_Tail;
		unsigned char TarLUN_CA;
		unsigned char TarTagQ_Cnt;
		unsigned char TarSelQ_Cnt;
		unsigned char TarStatus;
		unsigned char TarEEValue;
		unsigned char TarSyncCtrl;
		unsigned char TarReserved[2];
		unsigned char LunDiscQ_Idx[MAX_LUN];
		unsigned char TarLUNBusy[MAX_LUN];
	} cocci_id/* drivers/scsi/FlashPoint.c 210 */;
	u16 cocci_id/* drivers/scsi/FlashPoint.c 186 */;
	u8 cocci_id/* drivers/scsi/FlashPoint.c 185 */;
	void *cocci_id/* drivers/scsi/FlashPoint.c 1609 */;
	u32 *cocci_id/* drivers/scsi/FlashPoint.c 1437 */;
	struct nvram_info *cocci_id/* drivers/scsi/FlashPoint.c 1431 */;
	struct sccb_mgr_info *cocci_id/* drivers/scsi/FlashPoint.c 1210 */;
}
