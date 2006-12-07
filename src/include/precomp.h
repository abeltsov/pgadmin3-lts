//////////////////////////////////////////////////////////////////////////
//
// pgAdmin III - PostgreSQL Tools
// RCS-ID:      $Id$
// Copyright (C) 2002 - 2006, The pgAdmin Development Team
// This software is released under the Artistic Licence
//
// precomp.h - All header files for compilers supporting precompiled headers
//
//////////////////////////////////////////////////////////////////////////

#ifdef WX_PRECOMP

#include "agent/dlgJob.h"
#include "agent/dlgSchedule.h"
#include "agent/dlgStep.h"
#include "agent/pgaJob.h"
#include "agent/pgaSchedule.h"
#include "agent/pgaStep.h"
#include "copyright.h"
#include "ctl/calbox.h"
#include "ctl/ctlComboBox.h"
#include "ctl/ctlListView.h"
#include "ctl/ctlSQLBox.h"
#include "ctl/ctlSQLGrid.h"
#include "ctl/ctlSQLResult.h"
#include "ctl/ctlTree.h"
#include "ctl/timespin.h"
#include "ctl/xh_calb.h"
#include "ctl/xh_ctlcombo.h"
#include "ctl/xh_ctltree.h"
#include "ctl/xh_sqlbox.h"
#include "ctl/xh_timespin.h"
#include "ctl/ctlSecurityPanel.h"
#include "dlg/dlgAddFavourite.h"
#include "dlg/dlgAggregate.h"
#include "dlg/dlgCast.h"
#include "dlg/dlgCheck.h"
#include "dlg/dlgClasses.h"
#include "dlg/dlgColumn.h"
#include "dlg/dlgConnect.h"
#include "dlg/dlgConversion.h"
#include "dlg/dlgDatabase.h"
#include "dlg/dlgDomain.h"
#include "dlg/dlgEditGridOptions.h"
#include "dlg/dlgFindReplace.h"
#include "dlg/dlgForeignKey.h"
#include "dlg/dlgFunction.h"
#include "dlg/dlgGroup.h"
#include "dlg/dlgHbaConfig.h"
#include "dlg/dlgIndex.h"
#include "dlg/dlgIndexConstraint.h"
#include "dlg/dlgLanguage.h"
#include "dlg/dlgMainConfig.h"
#include "dlg/dlgManageFavourites.h"
#include "dlg/dlgOperator.h"
#include "dlg/dlgPgpassConfig.h"
#include "dlg/dlgProperty.h"
#include "dlg/dlgRole.h"
#include "dlg/dlgRule.h"
#include "dlg/dlgSchema.h"
#include "dlg/dlgSelectConnection.h"
#include "dlg/dlgSequence.h"
#include "dlg/dlgServer.h"
#include "dlg/dlgTable.h"
#include "dlg/dlgTablespace.h"
#include "dlg/dlgTrigger.h"
#include "dlg/dlgType.h"
#include "dlg/dlgUser.h"
#include "dlg/dlgView.h"
#include "explainCanvas.h"
#include "frm/frmAbout.h"
#include "frm/frmBackup.h"
#include "frm/frmConfig.h"
#include "frm/frmEditGrid.h"
#include "frm/frmExport.h"
#include "frm/frmGrantWizard.h"
#include "frm/frmHbaConfig.h"
#include "frm/frmHelp.h"
#include "frm/frmHint.h"
#include "frm/frmIndexcheck.h"
#include "frm/frmMain.h"
#include "frm/frmMainConfig.h"
#include "frm/frmMaintenance.h"
#include "frm/frmOptions.h"
#include "frm/frmPassword.h"
#include "frm/frmPgpassConfig.h"
#include "frm/frmQuery.h"
#include "frm/frmReport.h"
#include "frm/frmRestore.h"
#include "frm/frmSplash.h"
#include "frm/frmStatus.h"
#include "menu.h"
//#include "nodes/parsenodes.h"
//#include "parser/keywords.h"
//#include "parser/parse.h"
#include "pgAdmin3.h"
#include "schema/pgAggregate.h"
#include "schema/pgCast.h"
#include "schema/pgCheck.h"
#include "schema/pgCollection.h"
#include "schema/pgColumn.h"
#include "schema/pgConn.h"
#include "schema/pgConstraints.h"
#include "schema/pgConversion.h"
#include "schema/pgDatabase.h"
#include "schema/pgDatatype.h"
#include "schema/pgDomain.h"
#include "schema/pgForeignKey.h"
#include "schema/pgFunction.h"
#include "schema/pgGroup.h"
#include "schema/pgIndex.h"
#include "schema/pgIndexConstraint.h"
#include "schema/pgLanguage.h"
#include "schema/pgObject.h"
#include "schema/pgOperator.h"
#include "schema/pgOperatorClass.h"
#include "pgQueryThread.h"
#include "schema/pgRole.h"
#include "schema/pgRule.h"
#include "schema/pgSchema.h"
#include "schema/pgSequence.h"
#include "schema/pgServer.h"
#include "schema/pgSet.h"
#include "schema/pgTable.h"
#include "schema/pgTablespace.h"
#include "schema/pgTrigger.h"
#include "schema/pgType.h"
#include "schema/pgUser.h"
#include "schema/pgView.h"
#include "pgfeatures.h"
#include "utils/factory.h"
#include "utils/favourites.h"
#include "utils/md5.h"
#include "utils/misc.h"
#include "utils/pgDefs.h"
#include "utils/pgconfig.h"
#include "utils/sysLogger.h"
#include "utils/sysProcess.h"
#include "utils/sysSettings.h"
#include "utils/utffile.h"
#include "version.h"
#include "wxgridsel.h"


#endif
