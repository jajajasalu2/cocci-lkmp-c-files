cocci_test_suite() {
	union ata_cdb *cocci_id/* drivers/usb/storage/isd200.c 609 */;
	int cocci_id/* drivers/usb/storage/isd200.c 58 */(struct us_data *us);
	struct scsi_cmnd *cocci_id/* drivers/usb/storage/isd200.c 484 */;
	struct isd200_info *cocci_id/* drivers/usb/storage/isd200.c 483 */;
	struct scsi_device cocci_id/* drivers/usb/storage/isd200.c 482 */;
	union ata_cdb cocci_id/* drivers/usb/storage/isd200.c 480 */;
	void *cocci_id/* drivers/usb/storage/isd200.c 478 */;
	enum dma_data_direction cocci_id/* drivers/usb/storage/isd200.c 450 */;
	unsigned cocci_id/* drivers/usb/storage/isd200.c 450 */;
	unsigned char cocci_id/* drivers/usb/storage/isd200.c 403 */;
	struct sense_data *cocci_id/* drivers/usb/storage/isd200.c 402 */;
	struct sense_data {
		unsigned char ErrorCode;
		unsigned char SegmentNumber;
		unsigned char Flags;
		unsigned char Information[4];
		unsigned char AdditionalSenseLength;
		unsigned char CommandSpecificInformation[4];
		unsigned char AdditionalSenseCode;
		unsigned char AdditionalSenseCodeQualifier;
		unsigned char FieldReplaceableUnitCode;
		unsigned char SenseKeySpecific[3];
	}__attribute__((packed)) cocci_id/* drivers/usb/storage/isd200.c 367 */;
	struct read_block_limits {
		unsigned char Reserved;
		unsigned char BlockMaximumSize[3];
		unsigned char BlockMinimumSize[2];
	} cocci_id/* drivers/usb/storage/isd200.c 350 */;
	struct read_capacity_data {
		__be32 LogicalBlockAddress;
		__be32 BytesPerBlock;
	} cocci_id/* drivers/usb/storage/isd200.c 339 */;
	struct isd200_info {
		struct inquiry_data InquiryData;
		u16 *id;
		struct isd200_config ConfigData;
		unsigned char *RegsBuf;
		unsigned char ATARegs[8];
		unsigned char DeviceHead;
		unsigned char DeviceFlags;
		unsigned char MaxLUNs;
		unsigned char cmnd[BLK_MAX_CDB];
		struct scsi_cmnd srb;
		struct scatterlist sg;
	} cocci_id/* drivers/usb/storage/isd200.c 318 */;
	struct isd200_config {
		unsigned char EventNotification;
		unsigned char ExternalClock;
		unsigned char ATAInitTimeout;
		unsigned char ATAConfig;
		unsigned char ATAMajorCommand;
		unsigned char ATAMinorCommand;
		unsigned char ATAExtraConfig;
		unsigned char Capability;
	}__attribute__((packed)) cocci_id/* drivers/usb/storage/isd200.c 302 */;
	struct inquiry_data {
		unsigned char DeviceType;
		unsigned char DeviceTypeModifier;
		unsigned char Versions;
		unsigned char Format;
		unsigned char AdditionalLength;
		unsigned char Reserved[2];
		unsigned char Capability;
		unsigned char VendorId[8];
		unsigned char ProductId[16];
		unsigned char ProductRevisionLevel[4];
		unsigned char VendorSpecific[20];
		unsigned char Reserved3[40];
	}__attribute__((packed)) cocci_id/* drivers/usb/storage/isd200.c 262 */;
	union ata_cdb {
		struct {
			unsigned char SignatureByte0;
			unsigned char SignatureByte1;
			unsigned char ActionSelect;
			unsigned char RegisterSelect;
			unsigned char TransferBlockSize;
			unsigned char WriteData3F6;
			unsigned char WriteData1F1;
			unsigned char WriteData1F2;
			unsigned char WriteData1F3;
			unsigned char WriteData1F4;
			unsigned char WriteData1F5;
			unsigned char WriteData1F6;
			unsigned char WriteData1F7;
			unsigned char Reserved[3];
		} generic;
		struct {
			unsigned char SignatureByte0;
			unsigned char SignatureByte1;
			unsigned char ActionSelect;
			unsigned char RegisterSelect;
			unsigned char TransferBlockSize;
			unsigned char AlternateStatusByte;
			unsigned char ErrorByte;
			unsigned char SectorCountByte;
			unsigned char SectorNumberByte;
			unsigned char CylinderLowByte;
			unsigned char CylinderHighByte;
			unsigned char DeviceHeadByte;
			unsigned char StatusByte;
			unsigned char Reserved[3];
		} read;
		struct {
			unsigned char SignatureByte0;
			unsigned char SignatureByte1;
			unsigned char ActionSelect;
			unsigned char RegisterSelect;
			unsigned char TransferBlockSize;
			unsigned char DeviceControlByte;
			unsigned char FeaturesByte;
			unsigned char SectorCountByte;
			unsigned char SectorNumberByte;
			unsigned char CylinderLowByte;
			unsigned char CylinderHighByte;
			unsigned char DeviceHeadByte;
			unsigned char CommandByte;
			unsigned char Reserved[3];
		} write;
	} cocci_id/* drivers/usb/storage/isd200.c 193 */;
	struct usb_driver cocci_id/* drivers/usb/storage/isd200.c 1559 */;
	const struct usb_device_id *cocci_id/* drivers/usb/storage/isd200.c 1541 */;
	struct usb_interface *cocci_id/* drivers/usb/storage/isd200.c 1540 */;
	struct scsi_host_template cocci_id/* drivers/usb/storage/isd200.c 1538 */;
	void cocci_id/* drivers/usb/storage/isd200.c 1513 */;
	struct us_data *cocci_id/* drivers/usb/storage/isd200.c 1482 */;
	int cocci_id/* drivers/usb/storage/isd200.c 1482 */;
	struct isd200_info cocci_id/* drivers/usb/storage/isd200.c 1458 */;
	u16 cocci_id/* drivers/usb/storage/isd200.c 1319 */;
	u8 cocci_id/* drivers/usb/storage/isd200.c 1318 */;
	__be32 *cocci_id/* drivers/usb/storage/isd200.c 1310 */;
	struct read_capacity_data cocci_id/* drivers/usb/storage/isd200.c 1287 */;
	unsigned char *cocci_id/* drivers/usb/storage/isd200.c 1239 */;
	unsigned char cocci_id/* drivers/usb/storage/isd200.c 1229 */[8];
	unsigned long cocci_id/* drivers/usb/storage/isd200.c 1227 */;
	unsigned short cocci_id/* drivers/usb/storage/isd200.c 1226 */;
	__u16 *cocci_id/* drivers/usb/storage/isd200.c 1135 */;
	__be16 *cocci_id/* drivers/usb/storage/isd200.c 1134 */;
	char *cocci_id/* drivers/usb/storage/isd200.c 1075 */;
	u16 *cocci_id/* drivers/usb/storage/isd200.c 1066 */;
}