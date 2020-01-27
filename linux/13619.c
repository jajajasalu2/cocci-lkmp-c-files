cocci_test_suite() {
	struct sd *cocci_id/* drivers/media/usb/gspca/cpia1.c 976 */;
	struct gspca_dev *cocci_id/* drivers/media/usb/gspca/cpia1.c 969 */;
	int cocci_id/* drivers/media/usb/gspca/cpia1.c 969 */;
	struct cam_params *cocci_id/* drivers/media/usb/gspca/cpia1.c 696 */;
	u8 cocci_id/* drivers/media/usb/gspca/cpia1.c 442 */[8];
	u16 cocci_id/* drivers/media/usb/gspca/cpia1.c 437 */;
	unsigned int cocci_id/* drivers/media/usb/gspca/cpia1.c 400 */;
	u8 cocci_id/* drivers/media/usb/gspca/cpia1.c 399 */;
	u8 *cocci_id/* drivers/media/usb/gspca/cpia1.c 397 */;
	const struct v4l2_pix_format cocci_id/* drivers/media/usb/gspca/cpia1.c 365 */[];
	struct sd {
		struct gspca_dev gspca_dev;
		struct cam_params params;
		atomic_t cam_exposure;
		atomic_t fps;
		int exposure_count;
		u8 exposure_status;
		struct v4l2_ctrl *freq;
		u8 mainsFreq;
		u8 first_frame;
	} cocci_id/* drivers/media/usb/gspca/cpia1.c 352 */;
	struct cam_params {
		struct {
			u8 firmwareVersion;
			u8 firmwareRevision;
			u8 vcVersion;
			u8 vcRevision;
		} version;
		struct {
			u16 vendor;
			u16 product;
			u16 deviceRevision;
		} pnpID;
		struct {
			u8 vpVersion;
			u8 vpRevision;
			u16 cameraHeadID;
		} vpVersion;
		struct {
			u8 systemState;
			u8 grabState;
			u8 streamState;
			u8 fatalError;
			u8 cmdError;
			u8 debugFlags;
			u8 vpStatus;
			u8 errorCode;
		} status;
		struct {
			u8 brightness;
			u8 contrast;
			u8 saturation;
		} colourParams;
		struct {
			u8 gainMode;
			u8 expMode;
			u8 compMode;
			u8 centreWeight;
			u8 gain;
			u8 fineExp;
			u8 coarseExpLo;
			u8 coarseExpHi;
			u8 redComp;
			u8 green1Comp;
			u8 green2Comp;
			u8 blueComp;
		} exposure;
		struct {
			u8 balanceMode;
			u8 redGain;
			u8 greenGain;
			u8 blueGain;
		} colourBalance;
		struct {
			u8 divisor;
			u8 baserate;
		} sensorFps;
		struct {
			u8 gain1;
			u8 gain2;
			u8 gain4;
			u8 gain8;
		} apcor;
		struct {
			u8 disabled;
			u8 flickerMode;
			u8 coarseJump;
			u8 allowableOverExposure;
		} flickerControl;
		struct {
			u8 gain1;
			u8 gain2;
			u8 gain4;
			u8 gain8;
		} vlOffset;
		struct {
			u8 mode;
			u8 decimation;
		} compression;
		struct {
			u8 frTargeting;
			u8 targetFR;
			u8 targetQ;
		} compressionTarget;
		struct {
			u8 yThreshold;
			u8 uvThreshold;
		} yuvThreshold;
		struct {
			u8 hysteresis;
			u8 threshMax;
			u8 smallStep;
			u8 largeStep;
			u8 decimationHysteresis;
			u8 frDiffStepThresh;
			u8 qDiffStepThresh;
			u8 decimationThreshMod;
		} compressionParams;
		struct {
			u8 videoSize;
			u8 subSample;
			u8 yuvOrder;
		} format;
		struct {
			u8 qx3_detected;
			u8 toplight;
			u8 bottomlight;
			u8 button;
			u8 cradled;
		} qx3;
		struct {
			u8 colStart;
			u8 colEnd;
			u8 rowStart;
			u8 rowEnd;
		} roi;
		u8 ecpTiming;
		u8 streamStartLine;
	} cocci_id/* drivers/media/usb/gspca/cpia1.c 232 */;
	u8 cocci_id/* drivers/media/usb/gspca/cpia1.c 227 */[2][2][4];
	struct usb_driver cocci_id/* drivers/media/usb/gspca/cpia1.c 1888 */;
	struct sd cocci_id/* drivers/media/usb/gspca/cpia1.c 1884 */;
	struct usb_interface *cocci_id/* drivers/media/usb/gspca/cpia1.c 1881 */;
	const struct usb_device_id cocci_id/* drivers/media/usb/gspca/cpia1.c 1873 */[];
	const struct sd_desc cocci_id/* drivers/media/usb/gspca/cpia1.c 1858 */;
	const struct v4l2_ctrl_config cocci_id/* drivers/media/usb/gspca/cpia1.c 1818 */;
	const char *const cocci_id/* drivers/media/usb/gspca/cpia1.c 1813 */[];
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/usb/gspca/cpia1.c 1812 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/usb/gspca/cpia1.c 1805 */;
	struct gspca_dev cocci_id/* drivers/media/usb/gspca/cpia1.c 1753 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/usb/gspca/cpia1.c 1750 */;
	struct cam *cocci_id/* drivers/media/usb/gspca/cpia1.c 1426 */;
	const struct usb_device_id *cocci_id/* drivers/media/usb/gspca/cpia1.c 1423 */;
	void cocci_id/* drivers/media/usb/gspca/cpia1.c 1134 */;
}
