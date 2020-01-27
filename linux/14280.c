cocci_test_suite() {
	s32 cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 976 */;
	u8 cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 736 */[];
	struct tda_state {
		struct i2c_adapter *i2c;
		u8 adr;
		u32 m_Frequency;
		u32 IF;
		u8 m_IFLevelAnalog;
		u8 m_IFLevelDigital;
		u8 m_IFLevelDVBC;
		u8 m_IFLevelDVBT;
		u8 m_EP4;
		u8 m_EP3_Standby;
		bool m_bMaster;
		s32 m_SettlingTime;
		u8 m_Regs[NUM_REGS];
		u32 m_RF1[7];
		s32 m_RF_A1[7];
		s32 m_RF_B1[7];
		u32 m_RF2[7];
		s32 m_RF_A2[7];
		s32 m_RF_B2[7];
		u32 m_RF3[7];
		u8 m_TMValue_RFCal;
		bool m_bFMInput;
	} cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 65 */;
	bool cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 599 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 586 */;
	bool *cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 586 */;
	enum ERegister{ID=0, TM, PL, EP1, EP2, EP3, EP4, EP5, CPD, CD1, CD2, CD3, MPD, MD1, MD2, MD3, EB1, EB2, EB3, EB4, EB5, EB6, EB7, EB8, EB9, EB10, EB11, EB12, EB13, EB14, EB15, EB16, EB17, EB18, EB19, EB20, EB21, EB22, EB23, NUM_REGS,} cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 52 */;
	struct SRFBandMap {
		u32 m_RF_max;
		u32 m_RF1_Default;
		u32 m_RF2_Default;
		u32 m_RF3_Default;
	} cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 45 */;
	struct SMap2 {
		u32 m_Frequency;
		u8 m_Param1;
		u8 m_Param2;
	} cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 39 */;
	u8 cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 373 */[NUM_REGS];
	s32 *cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 370 */;
	u64 cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 349 */;
	u8 cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 347 */;
	u32 cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 345 */;
	struct tda_state *cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 345 */;
	int cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 345 */;
	struct SMapI {
		u32 m_Frequency;
		s32 m_Param;
	} cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 34 */;
	struct SMap {
		u32 m_Frequency;
		u8 m_Param;
	} cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 29 */;
	u8 cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 261 */[16];
	struct SRFBandMap cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 243 */[];
	struct SMap2 cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 228 */[];
	struct SStandardParam {
		s32 m_IFFrequency;
		u32 m_BandWidth;
		u8 m_EP3_4_0;
		u8 m_EB22;
	} cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 22 */;
	struct SMapI cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 214 */[];
	struct SMap cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 201 */[];
	u8 *cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 148 */;
	u8 cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 143 */[2];
	u8 cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 127 */[MAX_XFER_SIZE];
	u16 cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 125 */;
	struct dvb_tuner_ops cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 1228 */;
	struct tda_state cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 1221 */;
	const struct dvb_tuner_ops cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 1201 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 1193 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 114 */;
	void cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 1110 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 107 */[1];
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 105 */;
	int cocci_id/* drivers/media/dvb-frontends/tda18271c2dd.c 101 */(struct tda_state *state,
									 u8 RFBand,
									 u32 RF_in,
									 u32 *pRF_Out,
									 bool *pbcal);
}
