/* THIS IS A GENERATED FILE. DO NOT EDIT! */
/* Generated from s7plc.dbd */

#include <string.h>

#include "compilerDependencies.h"
#include "epicsStdlib.h"
#include "iocsh.h"
#include "iocshRegisterCommon.h"
#include "registryCommon.h"

extern "C" {

epicsShareExtern dset *pvar_dset_s7plcAai, *pvar_dset_s7plcAao,
    *pvar_dset_s7plcAi, *pvar_dset_s7plcAo, *pvar_dset_s7plcBi,
    *pvar_dset_s7plcStat, *pvar_dset_s7plcBo, *pvar_dset_s7plcCalcout,
    *pvar_dset_s7plcLongin, *pvar_dset_s7plcLongout, *pvar_dset_s7plcMbbi,
    *pvar_dset_s7plcMbbiDirect, *pvar_dset_s7plcMbbo,
    *pvar_dset_s7plcMbboDirect, *pvar_dset_s7plcStringin,
    *pvar_dset_s7plcStringout, *pvar_dset_s7plcAddr,
    *pvar_dset_s7plcWaveform;

static const char * const deviceSupportNames[] = {
    "s7plcAai", "s7plcAao", "s7plcAi", "s7plcAo", "s7plcBi", "s7plcStat",
    "s7plcBo", "s7plcCalcout", "s7plcLongin", "s7plcLongout", "s7plcMbbi",
    "s7plcMbbiDirect", "s7plcMbbo", "s7plcMbboDirect", "s7plcStringin",
    "s7plcStringout", "s7plcAddr", "s7plcWaveform"
};

static const dset * const devsl[] = {
    pvar_dset_s7plcAai, pvar_dset_s7plcAao, pvar_dset_s7plcAi,
    pvar_dset_s7plcAo, pvar_dset_s7plcBi, pvar_dset_s7plcStat,
    pvar_dset_s7plcBo, pvar_dset_s7plcCalcout, pvar_dset_s7plcLongin,
    pvar_dset_s7plcLongout, pvar_dset_s7plcMbbi,
    pvar_dset_s7plcMbbiDirect, pvar_dset_s7plcMbbo,
    pvar_dset_s7plcMbboDirect, pvar_dset_s7plcStringin,
    pvar_dset_s7plcStringout, pvar_dset_s7plcAddr, pvar_dset_s7plcWaveform
};

epicsShareExtern drvet *pvar_drvet_s7plc;

static const char *driverSupportNames[] = {
    "s7plc"};

static struct drvet *drvsl[] = {
    pvar_drvet_s7plc};

typedef void (*reg_func)(void);
epicsShareExtern reg_func pvar_func_s7plcRegister;

epicsShareExtern int * const pvar_int_s7plcDebug;

static struct iocshVarDef vardefs[] = {
    {"s7plcDebug", iocshArgInt, pvar_int_s7plcDebug},
    {NULL, iocshArgInt, NULL}
};

int s7plc_registerRecordDeviceDriver(DBBASE *pbase)
{
    static int executed = 0;
    const char *bldTop = "/home/vasu/s7plc";
    const char *envTop = getenv("TOP");

    if (envTop && strcmp(envTop, bldTop)) {
        printf("Warning: IOC is booting with TOP = \"%s\"\n"
               "          but was built with TOP = \"%s\"\n",
               envTop, bldTop);
    }

    if (!pbase) {
        printf("pdbbase is NULL; you must load a DBD file first.\n");
        return -1;
    }

    if (executed) {
        printf("Warning: Registration already done.\n");
    }
    executed = 1;

    registerDevices(pbase, NELEMENTS(devsl), deviceSupportNames, devsl);
    registerDrivers(pbase, NELEMENTS(drvsl), driverSupportNames, drvsl);
    pvar_func_s7plcRegister();
    iocshRegisterVariable(vardefs);
    return 0;
}

/* s7plc_registerRecordDeviceDriver */
static const iocshArg rrddArg0 = {"pdbbase", iocshArgPdbbase};
static const iocshArg *rrddArgs[] = {&rrddArg0};
static const iocshFuncDef rrddFuncDef =
    {"s7plc_registerRecordDeviceDriver", 1, rrddArgs};
static void rrddCallFunc(const iocshArgBuf *)
{
    s7plc_registerRecordDeviceDriver(*iocshPpdbbase);
}

} // extern "C"

/*
 * Register commands on application startup
 */
static int Registration() {
    iocshRegisterCommon();
    iocshRegister(&rrddFuncDef, rrddCallFunc);
    return 0;
}

static int done EPICS_UNUSED = Registration();
