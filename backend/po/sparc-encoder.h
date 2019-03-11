/* Generated by the New Jersey Machine-Code Toolkit, version 0.5 */
/* command line: tools -encoder sparc-encoder -byteorder b -indirect sparc_enc:sparc_enc_t machine/sparc/sparc-core.spec machine/sparc/sparc-synth.spec */
/* must #include <mclib.h> before this file */
typedef struct address__instance {
  int tag;
  union {
    struct {
      int simm13:13;
    } absoluteA;
    struct {
      unsigned rs1:5;
      int simm13:13;
    } dispA;
    struct {
      unsigned rs1:5;
      unsigned rs2:5;
    } indexA;
    struct {
      unsigned rs1:5;
    } indirectA;
  } u;
} address__Instance;
typedef struct reg_or_imm_instance {
  int tag;
  union {
    struct {
      int simm13:13;
    } imode;
    struct {
      unsigned rs2:5;
    } rmode;
  } u;
} reg_or_imm_Instance;
typedef struct regaddr_instance {
  int tag;
  union {
    struct {
      unsigned rs1:5;
      unsigned rs2:5;
    } indexR;
    struct {
      unsigned rs1:5;
    } indirectR;
  } u;
} regaddr_Instance;
struct sparc_enc_t {
  address__Instance (*dispA)(unsigned /* [0..31] */ rs1, int simm13);
  address__Instance (*absoluteA)(int simm13);
  address__Instance (*indexA)(unsigned /* [0..31] */ rs1, unsigned /* [0..31] */ rs2);
  address__Instance (*indirectA)(unsigned /* [0..31] */ rs1);
  reg_or_imm_Instance (*imode)(int simm13);
  reg_or_imm_Instance (*rmode)(unsigned /* [0..31] */ rs2);
  void (*LDSB)(address__Instance address_, unsigned /* [0..31] */ rd);
  void (*LDSH)(address__Instance address_, unsigned /* [0..31] */ rd);
  void (*LDUB)(address__Instance address_, unsigned /* [0..31] */ rd);
  void (*LDUH)(address__Instance address_, unsigned /* [0..31] */ rd);
  void (*LD)(address__Instance address_, unsigned /* [0..31] */ rd);
  void (*LDSTUB)(address__Instance address_, unsigned /* [0..31] */ rd);
  void (*SWAP_)(address__Instance address_, unsigned /* [0..31] */ rd);
  void (*LDD)(address__Instance address_, unsigned /* [0..31] */ rd);
  void (*LDF)(address__Instance address_, unsigned /* [0..31] */ fds);
  void (*LDDF)(address__Instance address_, unsigned /* [0..31] */ fdd);
  void (*LDC)(address__Instance address_, unsigned /* [0..31] */ cd);
  void (*LDDC)(address__Instance address_, unsigned /* [0..31] */ cd);
  void (*STB)(unsigned /* [0..31] */ rd, address__Instance address_);
  void (*STH)(unsigned /* [0..31] */ rd, address__Instance address_);
  void (*ST)(unsigned /* [0..31] */ rd, address__Instance address_);
  void (*STD)(unsigned /* [0..31] */ rd, address__Instance address_);
  void (*STF)(unsigned /* [0..31] */ fds, address__Instance address_);
  void (*STDF)(unsigned /* [0..31] */ fdd, address__Instance address_);
  void (*STC)(unsigned /* [0..31] */ cd, address__Instance address_);
  void (*STDC)(unsigned /* [0..31] */ cd, address__Instance address_);
  regaddr_Instance (*indexR)(unsigned /* [0..31] */ rs1, unsigned /* [0..31] */ rs2);
  regaddr_Instance (*indirectR)(unsigned /* [0..31] */ rs1);
  void (*LDSBA)(regaddr_Instance regaddr, unsigned /* [0..255] */ asi, unsigned /* [0..31] */ rd);
  void (*LDSHA)(regaddr_Instance regaddr, unsigned /* [0..255] */ asi, unsigned /* [0..31] */ rd);
  void (*LDUBA)(regaddr_Instance regaddr, unsigned /* [0..255] */ asi, unsigned /* [0..31] */ rd);
  void (*LDUHA)(regaddr_Instance regaddr, unsigned /* [0..255] */ asi, unsigned /* [0..31] */ rd);
  void (*LDA)(regaddr_Instance regaddr, unsigned /* [0..255] */ asi, unsigned /* [0..31] */ rd);
  void (*LDSTUBA)(regaddr_Instance regaddr, unsigned /* [0..255] */ asi, unsigned /* [0..31] */ rd);
  void (*SWAPA)(regaddr_Instance regaddr, unsigned /* [0..255] */ asi, unsigned /* [0..31] */ rd);
  void (*LDDA)(regaddr_Instance regaddr, unsigned /* [0..255] */ asi, unsigned /* [0..31] */ rd);
  void (*STBA)(unsigned /* [0..31] */ rd, regaddr_Instance regaddr, unsigned /* [0..255] */ asi);
  void (*STHA)(unsigned /* [0..31] */ rd, regaddr_Instance regaddr, unsigned /* [0..255] */ asi);
  void (*STA)(unsigned /* [0..31] */ rd, regaddr_Instance regaddr, unsigned /* [0..255] */ asi);
  void (*STDA)(unsigned /* [0..31] */ rd, regaddr_Instance regaddr, unsigned /* [0..255] */ asi);
  void (*LDFSR)(address__Instance address_);
  void (*LDCSR)(address__Instance address_);
  void (*STFSR)(address__Instance address_);
  void (*STCSR)(address__Instance address_);
  void (*STDFQ)(address__Instance address_);
  void (*STDCQ)(address__Instance address_);
  void (*RDY)(unsigned /* [0..31] */ rd);
  void (*RDPSR)(unsigned /* [0..31] */ rd);
  void (*RDWIM)(unsigned /* [0..31] */ rd);
  void (*RDTBR)(unsigned /* [0..31] */ rd);
  void (*WRY)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm);
  void (*WRPSR)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm);
  void (*WRWIM)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm);
  void (*WRTBR)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm);
  void (*RDASR)(unsigned /* [0..31] */ rs1i, unsigned /* [0..31] */ rd);
  void (*WRASR)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rdi);
  void (*STBAR)(void);
  void (*AND)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*ANDcc)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*ANDN)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*ANDNcc)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*OR)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*ORcc)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*ORN)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*ORNcc)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*XOR)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*XORcc)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*XNOR)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*XNORcc)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*SLL)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*SRL)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*SRA)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*ADD)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*ADDcc)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*ADDX)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*ADDXcc)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*TADDcc)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*TADDccTV)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*SUB)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*SUBcc)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*SUBX)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*SUBXcc)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*TSUBcc)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*TSUBccTV)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*MULScc)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*UMUL)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*SMUL)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*UMULcc)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*SMULcc)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*UDIV)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*SDIV)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*UDIVcc)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*SDIVcc)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*SAVE)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*RESTORE)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*BN_a)(RAddr reloc);
  void (*BE_a)(RAddr reloc);
  void (*BLE_a)(RAddr reloc);
  void (*BL_a)(RAddr reloc);
  void (*BLEU_a)(RAddr reloc);
  void (*BCS_a)(RAddr reloc);
  void (*BNEG_a)(RAddr reloc);
  void (*BVS_a)(RAddr reloc);
  void (*BA_a)(RAddr reloc);
  void (*BNE_a)(RAddr reloc);
  void (*BG_a)(RAddr reloc);
  void (*BGE_a)(RAddr reloc);
  void (*BGU_a)(RAddr reloc);
  void (*BCC_a)(RAddr reloc);
  void (*BPOS_a)(RAddr reloc);
  void (*BVC_a)(RAddr reloc);
  void (*FBN_a)(RAddr reloc);
  void (*FBNE_a)(RAddr reloc);
  void (*FBLG_a)(RAddr reloc);
  void (*FBUL_a)(RAddr reloc);
  void (*FBL_a)(RAddr reloc);
  void (*FBUG_a)(RAddr reloc);
  void (*FBG_a)(RAddr reloc);
  void (*FBU_a)(RAddr reloc);
  void (*FBA_a)(RAddr reloc);
  void (*FBE_a)(RAddr reloc);
  void (*FBUE_a)(RAddr reloc);
  void (*FBGE_a)(RAddr reloc);
  void (*FBUGE_a)(RAddr reloc);
  void (*FBLE_a)(RAddr reloc);
  void (*FBULE_a)(RAddr reloc);
  void (*FBO_a)(RAddr reloc);
  void (*CBN_a)(RAddr reloc);
  void (*CB123_a)(RAddr reloc);
  void (*CB12_a)(RAddr reloc);
  void (*CB13_a)(RAddr reloc);
  void (*CB1_a)(RAddr reloc);
  void (*CB23_a)(RAddr reloc);
  void (*CB2_a)(RAddr reloc);
  void (*CB3_a)(RAddr reloc);
  void (*CBA_a)(RAddr reloc);
  void (*CB0_a)(RAddr reloc);
  void (*CB03_a)(RAddr reloc);
  void (*CB02_a)(RAddr reloc);
  void (*CB023_a)(RAddr reloc);
  void (*CB01_a)(RAddr reloc);
  void (*CB013_a)(RAddr reloc);
  void (*CB012_a)(RAddr reloc);
  void (*BN)(RAddr reloc);
  void (*BE)(RAddr reloc);
  void (*BLE)(RAddr reloc);
  void (*BL)(RAddr reloc);
  void (*BLEU)(RAddr reloc);
  void (*BCS)(RAddr reloc);
  void (*BNEG)(RAddr reloc);
  void (*BVS)(RAddr reloc);
  void (*BA)(RAddr reloc);
  void (*BNE)(RAddr reloc);
  void (*BG)(RAddr reloc);
  void (*BGE)(RAddr reloc);
  void (*BGU)(RAddr reloc);
  void (*BCC)(RAddr reloc);
  void (*BPOS)(RAddr reloc);
  void (*BVC)(RAddr reloc);
  void (*FBN)(RAddr reloc);
  void (*FBNE)(RAddr reloc);
  void (*FBLG)(RAddr reloc);
  void (*FBUL)(RAddr reloc);
  void (*FBL)(RAddr reloc);
  void (*FBUG)(RAddr reloc);
  void (*FBG)(RAddr reloc);
  void (*FBU)(RAddr reloc);
  void (*FBA)(RAddr reloc);
  void (*FBE)(RAddr reloc);
  void (*FBUE)(RAddr reloc);
  void (*FBGE)(RAddr reloc);
  void (*FBUGE)(RAddr reloc);
  void (*FBLE)(RAddr reloc);
  void (*FBULE)(RAddr reloc);
  void (*FBO)(RAddr reloc);
  void (*CBN)(RAddr reloc);
  void (*CB123)(RAddr reloc);
  void (*CB12)(RAddr reloc);
  void (*CB13)(RAddr reloc);
  void (*CB1)(RAddr reloc);
  void (*CB23)(RAddr reloc);
  void (*CB2)(RAddr reloc);
  void (*CB3)(RAddr reloc);
  void (*CBA)(RAddr reloc);
  void (*CB0)(RAddr reloc);
  void (*CB03)(RAddr reloc);
  void (*CB02)(RAddr reloc);
  void (*CB023)(RAddr reloc);
  void (*CB01)(RAddr reloc);
  void (*CB013)(RAddr reloc);
  void (*CB012)(RAddr reloc);
  void (*call__)(RAddr reloc);
  void (*FMOVs)(unsigned /* [0..31] */ fs2s, unsigned /* [0..31] */ fds);
  void (*FNEGs)(unsigned /* [0..31] */ fs2s, unsigned /* [0..31] */ fds);
  void (*FABSs)(unsigned /* [0..31] */ fs2s, unsigned /* [0..31] */ fds);
  void (*FSQRTs)(unsigned /* [0..31] */ fs2s, unsigned /* [0..31] */ fds);
  void (*FSQRTd)(unsigned /* [0..31] */ fs2d, unsigned /* [0..31] */ fdd);
  void (*FSQRTq)(unsigned /* [0..31] */ fs2q, unsigned /* [0..31] */ fdq);
  void (*FiTOs)(unsigned /* [0..31] */ fs2s, unsigned /* [0..31] */ fds);
  void (*FsTOi)(unsigned /* [0..31] */ fs2s, unsigned /* [0..31] */ fds);
  void (*FiTOd)(unsigned /* [0..31] */ fs2s, unsigned /* [0..31] */ fdd);
  void (*FsTOd)(unsigned /* [0..31] */ fs2s, unsigned /* [0..31] */ fdd);
  void (*FiTOq)(unsigned /* [0..31] */ fs2s, unsigned /* [0..31] */ fdq);
  void (*FsTOq)(unsigned /* [0..31] */ fs2s, unsigned /* [0..31] */ fdq);
  void (*FdTOi)(unsigned /* [0..31] */ fs2d, unsigned /* [0..31] */ fds);
  void (*FdTOs)(unsigned /* [0..31] */ fs2d, unsigned /* [0..31] */ fds);
  void (*FqTOs)(unsigned /* [0..31] */ fs2q, unsigned /* [0..31] */ fds);
  void (*FqTOi)(unsigned /* [0..31] */ fs2q, unsigned /* [0..31] */ fds);
  void (*FqTOd)(unsigned /* [0..31] */ fs2q, unsigned /* [0..31] */ fdd);
  void (*FdTOq)(unsigned /* [0..31] */ fs2d, unsigned /* [0..31] */ fdq);
  void (*FADDs)(unsigned /* [0..31] */ fs1s, unsigned /* [0..31] */ fs2s, unsigned /* [0..31] */ fds);
  void (*FSUBs)(unsigned /* [0..31] */ fs1s, unsigned /* [0..31] */ fs2s, unsigned /* [0..31] */ fds);
  void (*FMULs)(unsigned /* [0..31] */ fs1s, unsigned /* [0..31] */ fs2s, unsigned /* [0..31] */ fds);
  void (*FDIVs)(unsigned /* [0..31] */ fs1s, unsigned /* [0..31] */ fs2s, unsigned /* [0..31] */ fds);
  void (*FADDd)(unsigned /* [0..31] */ fs1d, unsigned /* [0..31] */ fs2d, unsigned /* [0..31] */ fdd);
  void (*FSUBd)(unsigned /* [0..31] */ fs1d, unsigned /* [0..31] */ fs2d, unsigned /* [0..31] */ fdd);
  void (*FMULd)(unsigned /* [0..31] */ fs1d, unsigned /* [0..31] */ fs2d, unsigned /* [0..31] */ fdd);
  void (*FDIVd)(unsigned /* [0..31] */ fs1d, unsigned /* [0..31] */ fs2d, unsigned /* [0..31] */ fdd);
  void (*FADDq)(unsigned /* [0..31] */ fs1q, unsigned /* [0..31] */ fs2q, unsigned /* [0..31] */ fdq);
  void (*FSUBq)(unsigned /* [0..31] */ fs1q, unsigned /* [0..31] */ fs2q, unsigned /* [0..31] */ fdq);
  void (*FMULq)(unsigned /* [0..31] */ fs1q, unsigned /* [0..31] */ fs2q, unsigned /* [0..31] */ fdq);
  void (*FDIVq)(unsigned /* [0..31] */ fs1q, unsigned /* [0..31] */ fs2q, unsigned /* [0..31] */ fdq);
  void (*FsMULd)(unsigned /* [0..31] */ fs1d, unsigned /* [0..31] */ fs2d, unsigned /* [0..31] */ fdd);
  void (*FdMULq)(unsigned /* [0..31] */ fs1q, unsigned /* [0..31] */ fs2q, unsigned /* [0..31] */ fdq);
  void (*FCMPs)(unsigned /* [0..31] */ fs1s, unsigned /* [0..31] */ fs2s);
  void (*FCMPEs)(unsigned /* [0..31] */ fs1s, unsigned /* [0..31] */ fs2s);
  void (*FCMPd)(unsigned /* [0..31] */ fs1d, unsigned /* [0..31] */ fs2d);
  void (*FCMPEd)(unsigned /* [0..31] */ fs1d, unsigned /* [0..31] */ fs2d);
  void (*FCMPq)(unsigned /* [0..31] */ fs1q, unsigned /* [0..31] */ fs2q);
  void (*FCMPEq)(unsigned /* [0..31] */ fs1q, unsigned /* [0..31] */ fs2q);
  void (*NOP)(void);
  void (*FLUSH)(address__Instance address_);
  void (*JMPL)(address__Instance address_, unsigned /* [0..31] */ rd);
  void (*RETT)(address__Instance address_);
  void (*TN)(address__Instance address_);
  void (*TE)(address__Instance address_);
  void (*TLE)(address__Instance address_);
  void (*TL)(address__Instance address_);
  void (*TLEU)(address__Instance address_);
  void (*TCS)(address__Instance address_);
  void (*TNEG)(address__Instance address_);
  void (*TVS)(address__Instance address_);
  void (*TA)(address__Instance address_);
  void (*TNE)(address__Instance address_);
  void (*TG)(address__Instance address_);
  void (*TGE)(address__Instance address_);
  void (*TGU)(address__Instance address_);
  void (*TCC)(address__Instance address_);
  void (*TPOS)(address__Instance address_);
  void (*TVC)(address__Instance address_);
  void (*UNIMP)(unsigned /* [0..4194303] */ imm22);
  void (*sethi)(int val, unsigned /* [0..31] */ rd);
  void (*cmp)(unsigned /* [0..31] */ rs1, reg_or_imm_Instance reg_or_imm);
  void (*jmp)(address__Instance address_);
  void (*call_)(address__Instance address_);
  void (*tst)(unsigned /* [0..31] */ rs2);
  void (*ret)(void);
  void (*retl)(void);
  void (*restore_)(void);
  void (*save_)(void);
  void (*not)(unsigned /* [0..31] */ rd);
  void (*not2)(unsigned /* [0..31] */ rs1, unsigned /* [0..31] */ rd);
  void (*neg)(unsigned /* [0..31] */ rd);
  void (*neg2)(unsigned /* [0..31] */ rs2, unsigned /* [0..31] */ rd);
  void (*inc)(unsigned /* [0..8191] */ simm13, unsigned /* [0..31] */ rd);
  void (*inccc)(unsigned /* [0..8191] */ simm13, unsigned /* [0..31] */ rd);
  void (*dec)(unsigned /* [0..8191] */ simm13, unsigned /* [0..31] */ rd);
  void (*deccc)(unsigned /* [0..8191] */ simm13, unsigned /* [0..31] */ rd);
  void (*btst)(reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rs1);
  void (*bset)(reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*bclr)(reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*btog)(reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*clr)(unsigned /* [0..31] */ rd);
  void (*clr_)(address__Instance address_);
  void (*clrb)(address__Instance address_);
  void (*clrh)(address__Instance address_);
  void (*mov)(reg_or_imm_Instance reg_or_imm, unsigned /* [0..31] */ rd);
  void (*mov_)(unsigned /* [0..31] */ rs2, unsigned /* [0..31] */ rd);
  
};