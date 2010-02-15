#include "PythonQtWrapper_QTileRules.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>

QTileRules* PythonQtWrapper_QTileRules::new_QTileRules(Qt::TileRule  horizontalRule, Qt::TileRule  verticalRule)
{ 
return new PythonQtShell_QTileRules(horizontalRule, verticalRule); }

QTileRules* PythonQtWrapper_QTileRules::new_QTileRules(Qt::TileRule  rule)
{ 
return new PythonQtShell_QTileRules(rule); }

