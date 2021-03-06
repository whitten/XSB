/*
** This program has been automatically generated by the
** second-level foreign language interface of the
** XSB System
*/

#include <stdio.h>
#include <string.h>
#include "../../emu/cinterf.h"
#include "../../emu/context.h"

/* New Definition: smodelsInit from void init(CTXTdecl). */
void init(CTXTdecl );
DllExport int call_conv smodelsInit(CTXTdecl)
{
   init(CTXT);
   return TRUE;
}

/* New Definition: smodelsNumAtoms(a:input) from void numberAtoms(CTXTdeclc int a). */
void numberAtoms(CTXTdeclc int a);
DllExport int call_conv smodelsNumAtoms(CTXTdecl)
{
   prolog_term aIn;
   prolog_int  a;
   aIn = extern_reg_term(1);
   if (!is_int(aIn)) return FALSE;
   a = extern_p2c_int(aIn);
   numberAtoms(CTXTc a);
   return TRUE;
}

/* New Definition: smodelsAtomName(a:input) from void atomName(CTXTdeclc string a). */
void atomName(CTXTdeclc char * a);
DllExport int call_conv smodelsAtomName(CTXTdecl)
{
   prolog_term aIn;
   char *a;
   aIn = extern_reg_term(1);
   if (!is_string(aIn)) return FALSE;
   a = extern_p2c_string(aIn);
   atomName(CTXTc a);
   return TRUE;
}

/* New Definition: smodelsBeginBasicRule from void beginBasicRule(CTXTdecl). */
void beginBasicRule(CTXTdecl );
DllExport int call_conv smodelsBeginBasicRule(CTXTdecl)
{
   beginBasicRule(CTXT);
   return TRUE;
}

/* New Definition: smodelsBeginChoiceRule from void beginChoiceRule(CTXTdecl). */
void beginChoiceRule(CTXTdecl );
DllExport int call_conv smodelsBeginChoiceRule(CTXTdecl)
{
   beginChoiceRule(CTXT);
   return TRUE;
}

/* New Definition: smodelsBeginConstraintRule from void beginConstraintRule(CTXTdecl). */
void beginConstraintRule(CTXTdecl );
DllExport int call_conv smodelsBeginConstraintRule(CTXTdecl)
{
   beginConstraintRule(CTXT);
   return TRUE;
}

/* New Definition: smodelsBeginWeightRule from void beginWeightRule(CTXTdecl). */
void beginWeightRule(CTXTdecl );
DllExport int call_conv smodelsBeginWeightRule(CTXTdecl)
{
   beginWeightRule(CTXT);
   return TRUE;
}

/* New Definition: smodelsAddHead(a:input) from void addHead(CTXTdeclc int a). */
void addHead(CTXTdeclc int a);
DllExport int call_conv smodelsAddHead(CTXTdecl)
{
   prolog_term aIn;
   prolog_int  a;
   aIn = extern_reg_term(1);
   if (!is_int(aIn)) return FALSE;
   a = extern_p2c_int(aIn);
   addHead(CTXTc a);
   return TRUE;
}

/* New Definition: smodelsAddPosBody(a:input) from void addPosBody(CTXTdeclc int a). */
void addPosBody(CTXTdeclc int a);
DllExport int call_conv smodelsAddPosBody(CTXTdecl)
{
   prolog_term aIn;
   prolog_int  a;
   aIn = extern_reg_term(1);
   if (!is_int(aIn)) return FALSE;
   a = extern_p2c_int(aIn);
   addPosBody(CTXTc a);
   return TRUE;
}

/* New Definition: smodelsAddNegBody(a:input) from void addNegBody(CTXTdeclc int a). */
void addNegBody(CTXTdeclc int a);
DllExport int call_conv smodelsAddNegBody(CTXTdecl)
{
   prolog_term aIn;
   prolog_int  a;
   aIn = extern_reg_term(1);
   if (!is_int(aIn)) return FALSE;
   a = extern_p2c_int(aIn);
   addNegBody(CTXTc a);
   return TRUE;
}

/* New Definition: smodelsAddWPosBody(a:input,w:input) from void addWPosBody(CTXTdeclc int a,int w). */
void addWPosBody(CTXTdeclc int a, int w);
DllExport int call_conv smodelsAddWPosBody(CTXTdecl)
{
   prolog_term aIn;
   prolog_int  a;
   prolog_term wIn;
   prolog_int  w;
   aIn = extern_reg_term(1);
   if (!is_int(aIn)) return FALSE;
   a = extern_p2c_int(aIn);
   wIn = extern_reg_term(2);
   if (!is_int(wIn)) return FALSE;
   w = extern_p2c_int(wIn);
   addWPosBody(CTXTc a, w);
   return TRUE;
}

/* New Definition: smodelsAddWNegBody(a:input,w:input) from void addWNegBody(CTXTdeclc int a,int w). */
void addWNegBody(CTXTdeclc int a, int w);
DllExport int call_conv smodelsAddWNegBody(CTXTdecl)
{
   prolog_term aIn;
   prolog_int  a;
   prolog_term wIn;
   prolog_int  w;
   aIn = extern_reg_term(1);
   if (!is_int(aIn)) return FALSE;
   a = extern_p2c_int(aIn);
   wIn = extern_reg_term(2);
   if (!is_int(wIn)) return FALSE;
   w = extern_p2c_int(wIn);
   addWNegBody(CTXTc a, w);
   return TRUE;
}

/* New Definition: smodelsEndRule from void endRule(CTXTdecl). */
void endRule(CTXTdecl );
DllExport int call_conv smodelsEndRule(CTXTdecl)
{
   endRule(CTXT);
   return TRUE;
}

/* New Definition: smodelsCommitRules from void commitRules(CTXTdecl). */
void commitRules(CTXTdecl );
DllExport int call_conv smodelsCommitRules(CTXTdecl)
{
   commitRules(CTXT);
   return TRUE;
}

/* New Definition: smodelsPrintProgram from void printProgram(CTXTdecl). */
void printProgram(CTXTdecl );
DllExport int call_conv smodelsPrintProgram(CTXTdecl)
{
   printProgram(CTXT);
   return TRUE;
}

/* New Definition: smodelsExistsModel(retval:output) from int existsModel(CTXTdecl). */
int existsModel(CTXTdecl );
DllExport int call_conv smodelsExistsModel(CTXTdecl)
{
   prolog_term retvalOut;
   prolog_int retval;
   retvalOut = extern_reg_term(1);
   if(!is_var(retvalOut)) return FALSE;
   retval =   existsModel(CTXT);
   extern_c2p_int(retval,retvalOut);
   return TRUE;
}

/* New Definition: smodelsPrintAnswer from void printAnswer(CTXTdecl). */
void printAnswer(CTXTdecl );
DllExport int call_conv smodelsPrintAnswer(CTXTdecl)
{
   printAnswer(CTXT);
   return TRUE;
}

/* New Definition: smodelsClose from void close(CTXTdecl). */
void close(CTXTdecl );
DllExport int call_conv smodelsClose(CTXTdecl)
{
   close(CTXT);
   return TRUE;
}

/* New Definition: smodelsCheckAtom(a:input,retval:output) from int checkAtom(CTXTdeclc int a). */
int checkAtom(CTXTdeclc int a);
DllExport int call_conv smodelsCheckAtom(CTXTdecl)
{
   prolog_term aIn;
   prolog_int  a;
   prolog_term retvalOut;
   prolog_int retval;
   aIn = extern_reg_term(1);
   if (!is_int(aIn)) return FALSE;
   a = extern_p2c_int(aIn);
   retvalOut = extern_reg_term(2);
   if(!is_var(retvalOut)) return FALSE;
   retval =   checkAtom(CTXTc a);
   extern_c2p_int(retval,retvalOut);
   return TRUE;
}

/* New Definition: smodelsSetPosCompute(a:input) from void setPosCompute(CTXTdeclc int a). */
void setPosCompute(CTXTdeclc int a);
DllExport int call_conv smodelsSetPosCompute(CTXTdecl)
{
   prolog_term aIn;
   prolog_int  a;
   aIn = extern_reg_term(1);
   if (!is_int(aIn)) return FALSE;
   a = extern_p2c_int(aIn);
   setPosCompute(CTXTc a);
   return TRUE;
}

/* New Definition: smodelsSetNegCompute(a:input) from void setNegCompute(CTXTdeclc int a). */
void setNegCompute(CTXTdeclc int a);
DllExport int call_conv smodelsSetNegCompute(CTXTdecl)
{
   prolog_term aIn;
   prolog_int  a;
   aIn = extern_reg_term(1);
   if (!is_int(aIn)) return FALSE;
   a = extern_p2c_int(aIn);
   setNegCompute(CTXTc a);
   return TRUE;
}

/* New Definition: smodelsResetPosCompute(a:input) from void resetPosCompute(CTXTdeclc int a). */
void resetPosCompute(CTXTdeclc int a);
DllExport int call_conv smodelsResetPosCompute(CTXTdecl)
{
   prolog_term aIn;
   prolog_int  a;
   aIn = extern_reg_term(1);
   if (!is_int(aIn)) return FALSE;
   a = extern_p2c_int(aIn);
   resetPosCompute(CTXTc a);
   return TRUE;
}

/* New Definition: smodelsResetNegCompute(a:input) from void resetNegCompute(CTXTdeclc int a). */
void resetNegCompute(CTXTdeclc int a);
DllExport int call_conv smodelsResetNegCompute(CTXTdecl)
{
   prolog_term aIn;
   prolog_int  a;
   aIn = extern_reg_term(1);
   if (!is_int(aIn)) return FALSE;
   a = extern_p2c_int(aIn);
   resetNegCompute(CTXTc a);
   return TRUE;
}

/* New Definition: smodelsRemember from void remember(CTXTdecl). */
void remember(CTXTdecl );
DllExport int call_conv smodelsRemember(CTXTdecl)
{
   remember(CTXT);
   return TRUE;
}

/* New Definition: smodelsForget from void forget(CTXTdecl). */
void forget(CTXTdecl );
DllExport int call_conv smodelsForget(CTXTdecl)
{
   forget(CTXT);
   return TRUE;
}

/* New Definition: smodelsSetBody(a:input) from void setBody(CTXTdeclc int a). */
void setBody(CTXTdeclc int a);
DllExport int call_conv smodelsSetBody(CTXTdecl)
{
   prolog_term aIn;
   prolog_int  a;
   aIn = extern_reg_term(1);
   if (!is_int(aIn)) return FALSE;
   a = extern_p2c_int(aIn);
   setBody(CTXTc a);
   return TRUE;
}

/* New Definition: smodelsSetWeight(a:input) from void setWeight(CTXTdeclc int a). */
void setWeight(CTXTdeclc int a);
DllExport int call_conv smodelsSetWeight(CTXTdecl)
{
   prolog_term aIn;
   prolog_int  a;
   aIn = extern_reg_term(1);
   if (!is_int(aIn)) return FALSE;
   a = extern_p2c_int(aIn);
   setWeight(CTXTc a);
   return TRUE;
}

/* New Definition: smodelsSetHead(a:input) from void setHead(CTXTdeclc int a). */
void setHead(CTXTdeclc int a);
DllExport int call_conv smodelsSetHead(CTXTdecl)
{
   prolog_term aIn;
   prolog_int  a;
   aIn = extern_reg_term(1);
   if (!is_int(aIn)) return FALSE;
   a = extern_p2c_int(aIn);
   setHead(CTXTc a);
   return TRUE;
}

/* New Definition: smodelsWellFounded from void wellfounded(CTXTdecl). */
void wellfounded(CTXTdecl );
DllExport int call_conv smodelsWellFounded(CTXTdecl)
{
   wellfounded(CTXT);
   return TRUE;
}

/* New Definition: smodelsTestPos(a:input,retval:output) from int testPos(CTXTdeclc int a). */
int testPos(CTXTdeclc int a);
DllExport int call_conv smodelsTestPos(CTXTdecl)
{
   prolog_term aIn;
   prolog_int  a;
   prolog_term retvalOut;
   prolog_int retval;
   aIn = extern_reg_term(1);
   if (!is_int(aIn)) return FALSE;
   a = extern_p2c_int(aIn);
   retvalOut = extern_reg_term(2);
   if(!is_var(retvalOut)) return FALSE;
   retval =   testPos(CTXTc a);
   extern_c2p_int(retval,retvalOut);
   return TRUE;
}

/* New Definition: smodelsTestNeg(a:input,retval:output) from int testNeg(CTXTdeclc int a). */
int testNeg(CTXTdeclc int a);
DllExport int call_conv smodelsTestNeg(CTXTdecl)
{
   prolog_term aIn;
   prolog_int  a;
   prolog_term retvalOut;
   prolog_int retval;
   aIn = extern_reg_term(1);
   if (!is_int(aIn)) return FALSE;
   a = extern_p2c_int(aIn);
   retvalOut = extern_reg_term(2);
   if(!is_var(retvalOut)) return FALSE;
   retval =   testNeg(CTXTc a);
   extern_c2p_int(retval,retvalOut);
   return TRUE;
}

