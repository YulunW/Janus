/* **********************************************************
 * Copyright (c) 2010-2011 Google, Inc.  All rights reserved.
 * Copyright (c) 2002-2010 VMware, Inc.  All rights reserved.
 * **********************************************************/

/*
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * * Redistributions of source code must retain the above copyright notice,
 *   this list of conditions and the following disclaimer.
 *
 * * Redistributions in binary form must reproduce the above copyright notice,
 *   this list of conditions and the following disclaimer in the documentation
 *   and/or other materials provided with the distribution.
 *
 * * Neither the name of VMware, Inc. nor the names of its contributors may be
 *   used to endorse or promote products derived from this software without
 *   specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL VMWARE, INC. OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 */

#ifndef _DR_IR_OPCODES_AARCH64_H_
#define _DR_IR_OPCODES_AARCH64_H_ 1


/****************************************************************************
 * OPCODES
 */
/**
 * @file dr_ir_opcodes_aarch64.h
 * @brief Instruction opcode constants for AArch64.
 */
/** Opcode constants for use in the instr_t data structure. */
enum {
/*   0 */     OP_INVALID, /**< INVALID opcode */
/*   1 */     OP_UNDECODED, /**< UNDECODED opcode */
/*   2 */     OP_CONTD, /**< CONTD opcode */
/*   3 */     OP_LABEL, /**< LABEL opcode */

/*   4 */     OP_adc,             /**< AArch64 adc opcode.*/
/*   5 */     OP_adcs,            /**< AArch64 adcs opcode.*/
/*   6 */     OP_add,             /**< AArch64 add opcode.*/
/*   7 */     OP_adds,            /**< AArch64 adds opcode.*/
/*   8 */     OP_adr,             /**< AArch64 adr opcode.*/
/*   9 */     OP_adrp,            /**< AArch64 adrp opcode.*/
/*  10 */     OP_and,             /**< AArch64 and opcode.*/
/*  11 */     OP_ands,            /**< AArch64 ands opcode.*/
/*  12 */     OP_asrv,            /**< AArch64 asrv opcode.*/
/*  13 */     OP_b,               /**< AArch64 b opcode.*/
/*  14 */     OP_bcond,           /**< AArch64 bcond opcode.*/
/*  15 */     OP_bfm,             /**< AArch64 bfm opcode.*/
/*  16 */     OP_bic,             /**< AArch64 bic opcode.*/
/*  17 */     OP_bics,            /**< AArch64 bics opcode.*/
/*  18 */     OP_bl,              /**< AArch64 bl opcode.*/
/*  19 */     OP_blr,             /**< AArch64 blr opcode.*/
/*  20 */     OP_br,              /**< AArch64 br opcode.*/
/*  21 */     OP_brk,             /**< AArch64 brk opcode.*/
/*  22 */     OP_cas,             /**< AArch64 cas opcode.*/
/*  23 */     OP_casa,            /**< AArch64 casa opcode.*/
/*  24 */     OP_casab,           /**< AArch64 casab opcode.*/
/*  25 */     OP_casah,           /**< AArch64 casah opcode.*/
/*  26 */     OP_casal,           /**< AArch64 casal opcode.*/
/*  27 */     OP_casalb,          /**< AArch64 casalb opcode.*/
/*  28 */     OP_casalh,          /**< AArch64 casalh opcode.*/
/*  29 */     OP_casb,            /**< AArch64 casb opcode.*/
/*  30 */     OP_cash,            /**< AArch64 cash opcode.*/
/*  31 */     OP_casl,            /**< AArch64 casl opcode.*/
/*  32 */     OP_caslb,           /**< AArch64 caslb opcode.*/
/*  33 */     OP_caslh,           /**< AArch64 caslh opcode.*/
/*  34 */     OP_casp,            /**< AArch64 casp opcode.*/
/*  35 */     OP_caspa,           /**< AArch64 caspa opcode.*/
/*  36 */     OP_caspal,          /**< AArch64 caspal opcode.*/
/*  37 */     OP_caspl,           /**< AArch64 caspl opcode.*/
/*  38 */     OP_cbnz,            /**< AArch64 cbnz opcode.*/
/*  39 */     OP_cbz,             /**< AArch64 cbz opcode.*/
/*  40 */     OP_ccmn,            /**< AArch64 ccmn opcode.*/
/*  41 */     OP_ccmp,            /**< AArch64 ccmp opcode.*/
/*  42 */     OP_clrex,           /**< AArch64 clrex opcode.*/
/*  43 */     OP_cls,             /**< AArch64 cls opcode.*/
/*  44 */     OP_clz,             /**< AArch64 clz opcode.*/
/*  45 */     OP_crc32b,          /**< AArch64 crc32b opcode.*/
/*  46 */     OP_crc32cb,         /**< AArch64 crc32cb opcode.*/
/*  47 */     OP_crc32ch,         /**< AArch64 crc32ch opcode.*/
/*  48 */     OP_crc32cw,         /**< AArch64 crc32cw opcode.*/
/*  49 */     OP_crc32cx,         /**< AArch64 crc32cx opcode.*/
/*  50 */     OP_crc32h,          /**< AArch64 crc32h opcode.*/
/*  51 */     OP_crc32w,          /**< AArch64 crc32w opcode.*/
/*  52 */     OP_crc32x,          /**< AArch64 crc32x opcode.*/
/*  53 */     OP_csel,            /**< AArch64 csel opcode.*/
/*  54 */     OP_csinc,           /**< AArch64 csinc opcode.*/
/*  55 */     OP_csinv,           /**< AArch64 csinv opcode.*/
/*  56 */     OP_csneg,           /**< AArch64 csneg opcode.*/
/*  57 */     OP_dmb,             /**< AArch64 dmb opcode.*/
/*  58 */     OP_dsb,             /**< AArch64 dsb opcode.*/
/*  59 */     OP_eon,             /**< AArch64 eon opcode.*/
/*  60 */     OP_eor,             /**< AArch64 eor opcode.*/
/*  61 */     OP_extr,            /**< AArch64 extr opcode.*/
/*  62 */     OP_hlt,             /**< AArch64 hlt opcode.*/
/*  63 */     OP_hvc,             /**< AArch64 hvc opcode.*/
/*  64 */     OP_isb,             /**< AArch64 isb opcode.*/
/*  65 */     OP_ld1,             /**< AArch64 ld1 opcode.*/
/*  66 */     OP_ld1r,            /**< AArch64 ld1r opcode.*/
/*  67 */     OP_ld2,             /**< AArch64 ld2 opcode.*/
/*  68 */     OP_ld2r,            /**< AArch64 ld2r opcode.*/
/*  69 */     OP_ld3,             /**< AArch64 ld3 opcode.*/
/*  70 */     OP_ld3r,            /**< AArch64 ld3r opcode.*/
/*  71 */     OP_ld4,             /**< AArch64 ld4 opcode.*/
/*  72 */     OP_ld4r,            /**< AArch64 ld4r opcode.*/
/*  73 */     OP_ldadd,           /**< AArch64 ldadd opcode.*/
/*  74 */     OP_ldadda,          /**< AArch64 ldadda opcode.*/
/*  75 */     OP_ldaddab,         /**< AArch64 ldaddab opcode.*/
/*  76 */     OP_ldaddah,         /**< AArch64 ldaddah opcode.*/
/*  77 */     OP_ldaddal,         /**< AArch64 ldaddal opcode.*/
/*  78 */     OP_ldaddalb,        /**< AArch64 ldaddalb opcode.*/
/*  79 */     OP_ldaddalh,        /**< AArch64 ldaddalh opcode.*/
/*  80 */     OP_ldaddb,          /**< AArch64 ldaddb opcode.*/
/*  81 */     OP_ldaddh,          /**< AArch64 ldaddh opcode.*/
/*  82 */     OP_ldaddl,          /**< AArch64 ldaddl opcode.*/
/*  83 */     OP_ldaddlb,         /**< AArch64 ldaddlb opcode.*/
/*  84 */     OP_ldaddlh,         /**< AArch64 ldaddlh opcode.*/
/*  85 */     OP_ldar,            /**< AArch64 ldar opcode.*/
/*  86 */     OP_ldarb,           /**< AArch64 ldarb opcode.*/
/*  87 */     OP_ldarh,           /**< AArch64 ldarh opcode.*/
/*  88 */     OP_ldaxp,           /**< AArch64 ldaxp opcode.*/
/*  89 */     OP_ldaxr,           /**< AArch64 ldaxr opcode.*/
/*  90 */     OP_ldaxrb,          /**< AArch64 ldaxrb opcode.*/
/*  91 */     OP_ldaxrh,          /**< AArch64 ldaxrh opcode.*/
/*  92 */     OP_ldclr,           /**< AArch64 ldclr opcode.*/
/*  93 */     OP_ldclra,          /**< AArch64 ldclra opcode.*/
/*  94 */     OP_ldclrab,         /**< AArch64 ldclrab opcode.*/
/*  95 */     OP_ldclrah,         /**< AArch64 ldclrah opcode.*/
/*  96 */     OP_ldclral,         /**< AArch64 ldclral opcode.*/
/*  97 */     OP_ldclralb,        /**< AArch64 ldclralb opcode.*/
/*  98 */     OP_ldclralh,        /**< AArch64 ldclralh opcode.*/
/*  99 */     OP_ldclrb,          /**< AArch64 ldclrb opcode.*/
/* 100 */     OP_ldclrh,          /**< AArch64 ldclrh opcode.*/
/* 101 */     OP_ldclrl,          /**< AArch64 ldclrl opcode.*/
/* 102 */     OP_ldclrlb,         /**< AArch64 ldclrlb opcode.*/
/* 103 */     OP_ldclrlh,         /**< AArch64 ldclrlh opcode.*/
/* 104 */     OP_ldeor,           /**< AArch64 ldeor opcode.*/
/* 105 */     OP_ldeora,          /**< AArch64 ldeora opcode.*/
/* 106 */     OP_ldeorab,         /**< AArch64 ldeorab opcode.*/
/* 107 */     OP_ldeorah,         /**< AArch64 ldeorah opcode.*/
/* 108 */     OP_ldeoral,         /**< AArch64 ldeoral opcode.*/
/* 109 */     OP_ldeoralb,        /**< AArch64 ldeoralb opcode.*/
/* 110 */     OP_ldeoralh,        /**< AArch64 ldeoralh opcode.*/
/* 111 */     OP_ldeorb,          /**< AArch64 ldeorb opcode.*/
/* 112 */     OP_ldeorh,          /**< AArch64 ldeorh opcode.*/
/* 113 */     OP_ldeorl,          /**< AArch64 ldeorl opcode.*/
/* 114 */     OP_ldeorlb,         /**< AArch64 ldeorlb opcode.*/
/* 115 */     OP_ldeorlh,         /**< AArch64 ldeorlh opcode.*/
/* 116 */     OP_ldnp,            /**< AArch64 ldnp opcode.*/
/* 117 */     OP_ldp,             /**< AArch64 ldp opcode.*/
/* 118 */     OP_ldpsw,           /**< AArch64 ldpsw opcode.*/
/* 119 */     OP_ldr,             /**< AArch64 ldr opcode.*/
/* 120 */     OP_ldrb,            /**< AArch64 ldrb opcode.*/
/* 121 */     OP_ldrh,            /**< AArch64 ldrh opcode.*/
/* 122 */     OP_ldrsb,           /**< AArch64 ldrsb opcode.*/
/* 123 */     OP_ldrsh,           /**< AArch64 ldrsh opcode.*/
/* 124 */     OP_ldrsw,           /**< AArch64 ldrsw opcode.*/
/* 125 */     OP_ldset,           /**< AArch64 ldset opcode.*/
/* 126 */     OP_ldseta,          /**< AArch64 ldseta opcode.*/
/* 127 */     OP_ldsetab,         /**< AArch64 ldsetab opcode.*/
/* 128 */     OP_ldsetah,         /**< AArch64 ldsetah opcode.*/
/* 129 */     OP_ldsetal,         /**< AArch64 ldsetal opcode.*/
/* 130 */     OP_ldsetalb,        /**< AArch64 ldsetalb opcode.*/
/* 131 */     OP_ldsetalh,        /**< AArch64 ldsetalh opcode.*/
/* 132 */     OP_ldsetb,          /**< AArch64 ldsetb opcode.*/
/* 133 */     OP_ldseth,          /**< AArch64 ldseth opcode.*/
/* 134 */     OP_ldsetl,          /**< AArch64 ldsetl opcode.*/
/* 135 */     OP_ldsetlb,         /**< AArch64 ldsetlb opcode.*/
/* 136 */     OP_ldsetlh,         /**< AArch64 ldsetlh opcode.*/
/* 137 */     OP_ldsmax,          /**< AArch64 ldsmax opcode.*/
/* 138 */     OP_ldsmaxa,         /**< AArch64 ldsmaxa opcode.*/
/* 139 */     OP_ldsmaxab,        /**< AArch64 ldsmaxab opcode.*/
/* 140 */     OP_ldsmaxah,        /**< AArch64 ldsmaxah opcode.*/
/* 141 */     OP_ldsmaxal,        /**< AArch64 ldsmaxal opcode.*/
/* 142 */     OP_ldsmaxalb,       /**< AArch64 ldsmaxalb opcode.*/
/* 143 */     OP_ldsmaxalh,       /**< AArch64 ldsmaxalh opcode.*/
/* 144 */     OP_ldsmaxb,         /**< AArch64 ldsmaxb opcode.*/
/* 145 */     OP_ldsmaxh,         /**< AArch64 ldsmaxh opcode.*/
/* 146 */     OP_ldsmaxl,         /**< AArch64 ldsmaxl opcode.*/
/* 147 */     OP_ldsmaxlb,        /**< AArch64 ldsmaxlb opcode.*/
/* 148 */     OP_ldsmaxlh,        /**< AArch64 ldsmaxlh opcode.*/
/* 149 */     OP_ldsmin,          /**< AArch64 ldsmin opcode.*/
/* 150 */     OP_ldsmina,         /**< AArch64 ldsmina opcode.*/
/* 151 */     OP_ldsminab,        /**< AArch64 ldsminab opcode.*/
/* 152 */     OP_ldsminah,        /**< AArch64 ldsminah opcode.*/
/* 153 */     OP_ldsminal,        /**< AArch64 ldsminal opcode.*/
/* 154 */     OP_ldsminalb,       /**< AArch64 ldsminalb opcode.*/
/* 155 */     OP_ldsminalh,       /**< AArch64 ldsminalh opcode.*/
/* 156 */     OP_ldsminb,         /**< AArch64 ldsminb opcode.*/
/* 157 */     OP_ldsminh,         /**< AArch64 ldsminh opcode.*/
/* 158 */     OP_ldsminl,         /**< AArch64 ldsminl opcode.*/
/* 159 */     OP_ldsminlb,        /**< AArch64 ldsminlb opcode.*/
/* 160 */     OP_ldsminlh,        /**< AArch64 ldsminlh opcode.*/
/* 161 */     OP_ldtr,            /**< AArch64 ldtr opcode.*/
/* 162 */     OP_ldtrb,           /**< AArch64 ldtrb opcode.*/
/* 163 */     OP_ldtrh,           /**< AArch64 ldtrh opcode.*/
/* 164 */     OP_ldtrsb,          /**< AArch64 ldtrsb opcode.*/
/* 165 */     OP_ldtrsh,          /**< AArch64 ldtrsh opcode.*/
/* 166 */     OP_ldtrsw,          /**< AArch64 ldtrsw opcode.*/
/* 167 */     OP_ldumax,          /**< AArch64 ldumax opcode.*/
/* 168 */     OP_ldumaxa,         /**< AArch64 ldumaxa opcode.*/
/* 169 */     OP_ldumaxab,        /**< AArch64 ldumaxab opcode.*/
/* 170 */     OP_ldumaxah,        /**< AArch64 ldumaxah opcode.*/
/* 171 */     OP_ldumaxal,        /**< AArch64 ldumaxal opcode.*/
/* 172 */     OP_ldumaxalb,       /**< AArch64 ldumaxalb opcode.*/
/* 173 */     OP_ldumaxalh,       /**< AArch64 ldumaxalh opcode.*/
/* 174 */     OP_ldumaxb,         /**< AArch64 ldumaxb opcode.*/
/* 175 */     OP_ldumaxh,         /**< AArch64 ldumaxh opcode.*/
/* 176 */     OP_ldumaxl,         /**< AArch64 ldumaxl opcode.*/
/* 177 */     OP_ldumaxlb,        /**< AArch64 ldumaxlb opcode.*/
/* 178 */     OP_ldumaxlh,        /**< AArch64 ldumaxlh opcode.*/
/* 179 */     OP_ldumin,          /**< AArch64 ldumin opcode.*/
/* 180 */     OP_ldumina,         /**< AArch64 ldumina opcode.*/
/* 181 */     OP_lduminab,        /**< AArch64 lduminab opcode.*/
/* 182 */     OP_lduminah,        /**< AArch64 lduminah opcode.*/
/* 183 */     OP_lduminal,        /**< AArch64 lduminal opcode.*/
/* 184 */     OP_lduminalb,       /**< AArch64 lduminalb opcode.*/
/* 185 */     OP_lduminalh,       /**< AArch64 lduminalh opcode.*/
/* 186 */     OP_lduminb,         /**< AArch64 lduminb opcode.*/
/* 187 */     OP_lduminh,         /**< AArch64 lduminh opcode.*/
/* 188 */     OP_lduminl,         /**< AArch64 lduminl opcode.*/
/* 189 */     OP_lduminlb,        /**< AArch64 lduminlb opcode.*/
/* 190 */     OP_lduminlh,        /**< AArch64 lduminlh opcode.*/
/* 191 */     OP_ldur,            /**< AArch64 ldur opcode.*/
/* 192 */     OP_ldurb,           /**< AArch64 ldurb opcode.*/
/* 193 */     OP_ldurh,           /**< AArch64 ldurh opcode.*/
/* 194 */     OP_ldursb,          /**< AArch64 ldursb opcode.*/
/* 195 */     OP_ldursh,          /**< AArch64 ldursh opcode.*/
/* 196 */     OP_ldursw,          /**< AArch64 ldursw opcode.*/
/* 197 */     OP_ldxp,            /**< AArch64 ldxp opcode.*/
/* 198 */     OP_ldxr,            /**< AArch64 ldxr opcode.*/
/* 199 */     OP_ldxrb,           /**< AArch64 ldxrb opcode.*/
/* 200 */     OP_ldxrh,           /**< AArch64 ldxrh opcode.*/
/* 201 */     OP_lslv,            /**< AArch64 lslv opcode.*/
/* 202 */     OP_lsrv,            /**< AArch64 lsrv opcode.*/
/* 203 */     OP_madd,            /**< AArch64 madd opcode.*/
/* 204 */     OP_movk,            /**< AArch64 movk opcode.*/
/* 205 */     OP_movn,            /**< AArch64 movn opcode.*/
/* 206 */     OP_movz,            /**< AArch64 movz opcode.*/
/* 207 */     OP_mrs,             /**< AArch64 mrs opcode.*/
/* 208 */     OP_msr,             /**< AArch64 msr opcode.*/
/* 209 */     OP_msub,            /**< AArch64 msub opcode.*/
/* 210 */     OP_nop,             /**< AArch64 nop opcode.*/
/* 211 */     OP_orn,             /**< AArch64 orn opcode.*/
/* 212 */     OP_orr,             /**< AArch64 orr opcode.*/
/* 213 */     OP_prfm,            /**< AArch64 prfm opcode.*/
/* 214 */     OP_prfum,           /**< AArch64 prfum opcode.*/
/* 215 */     OP_rbit,            /**< AArch64 rbit opcode.*/
/* 216 */     OP_ret,             /**< AArch64 ret opcode.*/
/* 217 */     OP_rev,             /**< AArch64 rev opcode.*/
/* 218 */     OP_rev16,           /**< AArch64 rev16 opcode.*/
/* 219 */     OP_rev32,           /**< AArch64 rev32 opcode.*/
/* 220 */     OP_rorv,            /**< AArch64 rorv opcode.*/
/* 221 */     OP_sbc,             /**< AArch64 sbc opcode.*/
/* 222 */     OP_sbcs,            /**< AArch64 sbcs opcode.*/
/* 223 */     OP_sbfm,            /**< AArch64 sbfm opcode.*/
/* 224 */     OP_sdiv,            /**< AArch64 sdiv opcode.*/
/* 225 */     OP_sev,             /**< AArch64 sev opcode.*/
/* 226 */     OP_sevl,            /**< AArch64 sevl opcode.*/
/* 227 */     OP_smaddl,          /**< AArch64 smaddl opcode.*/
/* 228 */     OP_smc,             /**< AArch64 smc opcode.*/
/* 229 */     OP_smsubl,          /**< AArch64 smsubl opcode.*/
/* 230 */     OP_smulh,           /**< AArch64 smulh opcode.*/
/* 231 */     OP_st1,             /**< AArch64 st1 opcode.*/
/* 232 */     OP_st2,             /**< AArch64 st2 opcode.*/
/* 233 */     OP_st3,             /**< AArch64 st3 opcode.*/
/* 234 */     OP_st4,             /**< AArch64 st4 opcode.*/
/* 235 */     OP_stlr,            /**< AArch64 stlr opcode.*/
/* 236 */     OP_stlrb,           /**< AArch64 stlrb opcode.*/
/* 237 */     OP_stlrh,           /**< AArch64 stlrh opcode.*/
/* 238 */     OP_stlxp,           /**< AArch64 stlxp opcode.*/
/* 239 */     OP_stlxr,           /**< AArch64 stlxr opcode.*/
/* 240 */     OP_stlxrb,          /**< AArch64 stlxrb opcode.*/
/* 241 */     OP_stlxrh,          /**< AArch64 stlxrh opcode.*/
/* 242 */     OP_stnp,            /**< AArch64 stnp opcode.*/
/* 243 */     OP_stp,             /**< AArch64 stp opcode.*/
/* 244 */     OP_str,             /**< AArch64 str opcode.*/
/* 245 */     OP_strb,            /**< AArch64 strb opcode.*/
/* 246 */     OP_strh,            /**< AArch64 strh opcode.*/
/* 247 */     OP_sttr,            /**< AArch64 sttr opcode.*/
/* 248 */     OP_sttrb,           /**< AArch64 sttrb opcode.*/
/* 249 */     OP_sttrh,           /**< AArch64 sttrh opcode.*/
/* 250 */     OP_stur,            /**< AArch64 stur opcode.*/
/* 251 */     OP_sturb,           /**< AArch64 sturb opcode.*/
/* 252 */     OP_sturh,           /**< AArch64 sturh opcode.*/
/* 253 */     OP_stxp,            /**< AArch64 stxp opcode.*/
/* 254 */     OP_stxr,            /**< AArch64 stxr opcode.*/
/* 255 */     OP_stxrb,           /**< AArch64 stxrb opcode.*/
/* 256 */     OP_stxrh,           /**< AArch64 stxrh opcode.*/
/* 257 */     OP_sub,             /**< AArch64 sub opcode.*/
/* 258 */     OP_subs,            /**< AArch64 subs opcode.*/
/* 259 */     OP_svc,             /**< AArch64 svc opcode.*/
/* 260 */     OP_swp,             /**< AArch64 swp opcode.*/
/* 261 */     OP_swpa,            /**< AArch64 swpa opcode.*/
/* 262 */     OP_swpab,           /**< AArch64 swpab opcode.*/
/* 263 */     OP_swpah,           /**< AArch64 swpah opcode.*/
/* 264 */     OP_swpal,           /**< AArch64 swpal opcode.*/
/* 265 */     OP_swpalb,          /**< AArch64 swpalb opcode.*/
/* 266 */     OP_swpalh,          /**< AArch64 swpalh opcode.*/
/* 267 */     OP_swpb,            /**< AArch64 swpb opcode.*/
/* 268 */     OP_swph,            /**< AArch64 swph opcode.*/
/* 269 */     OP_swpl,            /**< AArch64 swpl opcode.*/
/* 270 */     OP_swplb,           /**< AArch64 swplb opcode.*/
/* 271 */     OP_swplh,           /**< AArch64 swplh opcode.*/
/* 272 */     OP_sys,             /**< AArch64 sys opcode.*/
/* 273 */     OP_tbnz,            /**< AArch64 tbnz opcode.*/
/* 274 */     OP_tbz,             /**< AArch64 tbz opcode.*/
/* 275 */     OP_ubfm,            /**< AArch64 ubfm opcode.*/
/* 276 */     OP_udiv,            /**< AArch64 udiv opcode.*/
/* 277 */     OP_umaddl,          /**< AArch64 umaddl opcode.*/
/* 278 */     OP_umsubl,          /**< AArch64 umsubl opcode.*/
/* 279 */     OP_umulh,           /**< AArch64 umulh opcode.*/
/* 280 */     OP_wfe,             /**< AArch64 wfe opcode.*/
/* 281 */     OP_wfi,             /**< AArch64 wfi opcode.*/
/* 282 */     OP_yield,           /**< AArch64 yield opcode.*/

    OP_xx,

    OP_AFTER_LAST,
    OP_FIRST = OP_LABEL + 1,      /**< First real opcode. */
    OP_LAST  = OP_AFTER_LAST - 1, /**< Last real opcode. */
};

/* alternative names */
#define OP_jmp       OP_b      /**< Platform-independent opcode name for jump. */
#define OP_jmp_short OP_b      /**< Platform-independent opcode name for short jump. */
#define OP_load      OP_ldr    /**< Platform-independent opcode name for load. */
#define OP_store     OP_str    /**< Platform-independent opcode name for store. */

/****************************************************************************/



#endif /* _DR_IR_OPCODES_AARCH64_H_ */
